#include "NN.h"


void Neural_Network::fill_rank_output()
{
    output_rank.clear();
    rank_output.clear();
    fori (0,output_len)
    {
        output_rank.insert(pair<string,int>(rank_output_strings[i],i+1));
        rank_output.insert(pair<int,string>(i+1,rank_output_strings[i]));
    }
    return;
}

void Neural_Network::start(int what)
{
    //add read files and write to files calls
    if (what == 0)
    {
        cout << "reading input\n";
        access(0); // read input
        cout << "input read\n";
        access(3); // read expected output
        cout << "ex output read\n";
        train(); //train
        cout << "train finished\n";
        access(1); // write output
        cout << "output wrote\n";
        access(4); // write weights
        cout << "weights wrote\n";
    }
    else if (what == 1)
    {
        cout << "reading input \n";
        access(0); // read input
        cout << "file read\n";
        access(2); // read weights
        cout << "weights read\n";
        test();
        cout << "test finished\n";
        access(1); // write output
        cout << "output wrote\n";
    }
    return;
}

void Neural_Network::access(int mode)
{
    if (mode == 0) //read input
        read_input(input_file);
    else if (mode == 1) //write output
        write_output(output_file);
    else if (mode == 2) //read weights
        read_weights(weights_file);
    else if (mode == 3) //read expected output
        read_expected_output(expected_out_file);
    else if (mode == 4) // write weights
        write_weights(weights_file);
    return;
}

void Neural_Network::read_input(string filePath)
{
    dataset_size = 0;
    int id = -1;
    char char1,char2;
    read.open(filePath.c_str());
    input_dataset.clear();
    input_dataset.resize(max_dataset_size);
    fork (0,max_dataset_size)
    {
        read >> id;
        if (read.fail()) {read.clear(); break;}
        read_input_string += id+"\n";
        input_dataset[dataset_size].resize(input_len+1);
        fill_n(input,input_len,0);
        fori(0,input_len)
        {
            read >> char1 >> char2;
            read_input_string += char1 + char2 + "\n";
            pair <char,char> temp (char1,char2);
            input[i] = input_rank[temp];
            input_dataset[dataset_size][i]=input[i];
        }
        dataset_size++;
    }
    read.close();
    return;
}


void Neural_Network::read_expected_output(string filePath)
{
    string temp;
    string tempSplit;
    read.open(filePath.c_str());
    output_dataset.clear();
    output_dataset.resize(max_dataset_size);
    fori(0,dataset_size)
    {
        fill_n(expected_o,output_len+1,0);
        output_dataset[i].resize(output_len);
        read >> temp;
        read_ex_output_string+= temp + "\n";
        std::istringstream s(temp.c_str());
        while(getline(s,tempSplit,','))
            expected_o[output_rank[tempSplit]]=1;

        forj(1,output_len+1)
                output_dataset[i][j-1]=expected_o[j];
    }
    read.close();
    return;
}


void Neural_Network::write_output(string filePath)
{
    write.open(filePath.c_str());
    fori(0,dataset_size)
    {
            forj(1,output_len+1)
                    /*if (*/write << output_dataset[i][j-1]<<" "<<rank_output[j]<<",";// != 0)
                    //write << rank_output[j]<<",";
        write << endl;
    }
    write.close();
    return;
}

void Neural_Network::read_weights(string filePath)
{
    read.open(filePath.c_str());
    fori (0,hidden_len)
            forj (0,input_len)
            read >> Wh[i][j];
    fori (0,output_len)
            forj (0,hidden_len)
            read >> Wo[i][j];
    read.close();
    return;
}


void Neural_Network::write_weights(string filePath)
{
    write.open(filePath.c_str());
    fori (0,hidden_len)
            forj (0,input_len)
                write << Wh[i][j] << " ";
    fori (0,output_len)
            forj (0,hidden_len)
                write << Wo[i][j] << " ";
    write.close();
    return;
}

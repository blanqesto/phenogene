#include <FileManager.h>

File_Manager::File_Manager()
{
}

void File_Manager::do_function(int mode)
{
    switch(mode)
    {
    case 0: //read input
        read_input(input_file);
        break;
    case 1: //write output
        write_output(output_file);
        break;
    case 2: //read weights
        read_weights(weights_file);
        break;
    case 3: //read expected output
        read_expected_output(expected_out_file);
        break;
    case 4: // write weights
        write_weights(weights_file);
        break;
    }
    return;
}

void File_Manager::read_input(string filePath)
{
    int id = -1;
    char char1,char2;
    n.dataset_size = 0;
    input_population_string="";
    n.input_dataset.clear();
    n.input_dataset.resize(max_dataset_size);
    read.open(filePath.c_str());
    fork (0,max_dataset_size)
    {
        read >> id;
        if (read.fail()) {read.clear(); break;}
        input_population_string += convertInt(id);
        input_population_string +="\n";
        n.input_dataset[n.dataset_size].resize(n.input_len+1);
        fill_n(n.input,n.input_len,0);
        fori(0,n.input_len)
        {
            read >> char1 >> char2;
            input_population_string += char1;
            input_population_string +=char2;
            input_population_string +="\n";
            pair <char,char> temp (char1,char2);
            n.input[i] = n.input_rank[temp];
            n.input_dataset[n.dataset_size][i]=n.input[i];
        }
        n.dataset_size++;
    }
    read.close();
    return;
}


void File_Manager::read_expected_output(string filePath)
{
    string temp;
    string tempSplit;
    read.open(filePath.c_str());
    n.output_dataset.clear();
    n.output_dataset.resize(max_dataset_size);
    read_ex_output_string="";
    fori(0,n.dataset_size)
    {
        fill_n(n.expected_o,n.output_len+1,0);
        n.output_dataset[i].resize(n.output_len);
        read >> temp;
        read_ex_output_string+= temp + "\n";
        std::istringstream s(temp.c_str());
        while(getline(s,tempSplit,','))
            n.expected_o[n.output_rank[tempSplit]]=1;

        forj(1,n.output_len+1)
                n.output_dataset[i][j-1]=n.expected_o[j];
    }
    read.close();
    return;
}


void File_Manager::write_output(string filePath)
{
    write.open(filePath.c_str());
    fori(0,n.dataset_size)
    {
        double temp = -10000,rank=-1;
        forj(1,n.output_len+1)
                if (n.output_dataset[i][j-1]>temp)
                {
                    temp = n.output_dataset[i][j-1];
                    rank = j;
                }
        write << n.rank_output[rank];
        output_population_string+=n.rank_output[rank];
        output_population_string+="\n";
        write << endl;
    }
    write.close();
    return;
}

void File_Manager::read_weights(string filePath)
{
    read.open(filePath.c_str());
    fori (0,n.hidden_len)
            forj (0,n.input_len)
            read >> n.Wh[i][j];
    fori (0,n.output_len)
            forj (0,n.hidden_len)
            read >> n.Wo[i][j];
    read.close();
    return;
}


void File_Manager::write_weights(string filePath)
{
    write.open(filePath.c_str());
    fori (0,n.hidden_len)
            forj (0,n.input_len)
                write << n.Wh[i][j] << " ";
    fori (0,n.output_len)
            forj (0,n.hidden_len)
                write << n.Wo[i][j] << " ";
    write.close();
    return;
}


string File_Manager::convertInt(int number)
{
    if (number == 0)
        return "0";
    string temp="";
    string returnvalue="";
    while (number>0)
    {
        temp+=number%10+48;
        number/=10;
    }
    for (unsigned i=0;i<temp.length();i++)
        returnvalue+=temp[temp.length()-i-1];
    return returnvalue;
}

void File_Manager::fill_rank_output()
{
    n.output_rank.clear();
    n.rank_output.clear();
    fori (0,n.output_len)
    {
        n.output_rank.insert(pair<string,int>(rank_output_strings[i],i+1));
        n.rank_output.insert(pair<int,string>(i+1,rank_output_strings[i]));
    }
    return;
}

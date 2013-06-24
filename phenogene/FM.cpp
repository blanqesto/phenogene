#include <FileManager.h>

File_Manager::File_Manager()
{
}

/**
 \brief Call rotine specified by parameter mode.
 \param [mode]
 mode = 1: read from input file\n
 mode = 2: write to output file\n
 mode = 3: read from weights file\n
 mode = 4: write to weights file\n
*/
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
    case 5:
        read_pg_file(pg_file);
        break;
    case 6:
        write_pg_file(pg_file);
    }
    return;
}


/**
 *Read input
 \brief Opens file filePath and reads its content
 \param [filePath] File path to be read.
 \pre File specified by filePath is in the correct format.
 \post Input dataset is filled.
*/
void File_Manager::read_input(string filePath)
{
    char char1,char2;//c;
    n.dataset_size = 0;
    input_population_string="";
    n.input_dataset.clear();
    n.input_dataset.resize(max_dataset_size);
    read.open(filePath.c_str());
    fork (0,max_dataset_size)
    {
        read >> ids[k];
        if (read.fail()) {read.clear(); break;}
        input_population_string += convertInt(ids[k]) + "\n";
        n.input_dataset[n.dataset_size].resize(n.input_len+1);
        fill_n(n.input,n.input_len,0);
        fori(0,n.input_len)
                {
                    read >> char1 >> char2;
                    input_population_string += char1;
                    input_population_string += char2;
                    input_population_string += "\n";
                    pair <char,char> temp (char1,char2);
                    n.input[i] = n.input_rank[temp];
                    n.input_dataset[n.dataset_size][i]=n.input[i];
                }
        /*
        fori(0,n.input_len)
        {
            read >> c;
            input_population_string += c;
            if (i%2!=0) input_population_string += "\n";
            n.input[i] = n.input_rank[c];
            n.input_dataset[n.dataset_size][i]=n.input[i];
        }*/
//            read >> char1 >> char2;
//            input_population_string += char1;
//            input_population_string += char2;
            //input_population_string += "\n";
//            pair <char,char> temp (char1,char2);
//            n.input[i] = n.input_rank[temp];
//            n.input_dataset[n.dataset_size][i]=n.input[i];
        n.dataset_size++;
    }
    read.close();
    return;
}


/**
 \brief Read expected output\n
  Opens file filePath and reads its content.
 \param [filePath] File path to be read.
 \pre File specified by filePath is in the correct format.
 \post Expected output dataset is filled.
*/
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
        {
            //cout << i << " " << tempSplit << endl;
            n.expected_o[n.output_rank[tempSplit]]=1;
        }

        forj(1,n.output_len+1)
                n.output_dataset[i][j-1]=n.expected_o[j];
    }
    read.close();
    return;
}

/**
 \brief Write output\n
  Opens file filePath and write to it.
 \param [filePath] File path to be wrote.
 \pre Directory specified by filePath is accessible.
 \post Output file to be found in the specified directory.
*/
void File_Manager::write_output(string filePath)
{
    output_population_string="";
    write.open(filePath.c_str());
    fori(0,n.dataset_size)
    {
        double temp = -10000.00,rank=-1;
        //cout << "dataset:" << i<< endl;
        forj(1,n.output_len+1)
        {
           // cout << "rank: " << j << " "<< n.output_dataset[i][j-1] << endl;
                if (n.output_dataset[i][j-1]>temp)
                {
                    temp = n.output_dataset[i][j-1];
                    rank = j;
                }
        }
        write << ids[i] << ": "<< n.rank_output[rank];
        output_population_string+="ID#";
        output_population_string+=convertInt(ids[i]);
        output_population_string+=": ";
        output_population_string+=n.rank_output[rank];
        output_population_string+="\n";
        write << endl;
    }
    write.close();
    return;
}


/**
 \brief Read weights for hidden and output layer.\n
  Opens file filePath and reads its content.
 \param [filePath] File path to be read.
 \pre File specified by filePath is in the correct format.
 \post Weights datasets are filled.
*/
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


/**
 \brief Write weights\n
  Opens file filePath and write to it.
 \param [filePath] File path to be wrote.
 \pre Directory specified by filePath is accessible.
 \post Weights file to be found in the specified directory.
*/
void File_Manager::write_weights(string filePath)
{
    write.open(filePath.c_str());
    fori (0,n.hidden_len)
            forj (0,n.input_len)
                write << n.Wh[i][j] << endl;
    fori (0,n.output_len)
            forj (0,n.hidden_len)
                write << n.Wo[i][j] << endl;
    write.close();
    return;
}

/**
 \brief Converts integer number to string
 \param [number] Integer to be converted.
 \returns Number in string format.
*/
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

/**
 \brief Interface to fill the output/decimal association\n
  associates each output node with a string.
  \post Output_rank is filled.
  \post Rank_output is filled.
*/
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

/**
 \brief Read pg configuration file.\n
  Opens file filePath and reads its content.
 \param [filePath] File path to be read.
 \pre File specified by filePath is in the correct format.
 \post different neural network datasets are filled.
*/
void File_Manager::read_pg_file(string filePath)
{
    read.open(filePath.c_str());
    read >> n.input_len;
    read >> n.hidden_len;
    read >> n.output_len;
    fori(0,n.output_len)
    {
            read >> rank_output_strings[i];
            rank_output_strings[i]+="\n";
    }
    read >> n.learning_rate;
    read >> n.momentum;
    read >> n.minimum_error;
    read >> n.max_iterations;
    fori (0,n.hidden_len)
            forj (0,n.input_len)
            read >> n.Wh[i][j];
    fori (0,n.output_len)
            forj (0,n.hidden_len)
            read >> n.Wo[i][j];
    read.close();
    return;
}
/**
 \brief Write pg configuration file.\n
  Opens file filePath and write to it.
 \param [filePath] File path to be wrote.
 \pre Directory specified by filePath is accessible.
 \post pg file to be found in the specified directory.
*/
void File_Manager::write_pg_file(string filePath)
{
    write.open(filePath.c_str());
    write << n.input_len << endl;
    write << n.hidden_len << endl;
    write << n.output_len << endl;
    fori(0,n.output_len)
            write << rank_output_strings[i] << endl;
    write << n.learning_rate << endl;
    write << n.momentum << endl;
    write << n.minimum_error << endl;
    write << n.max_iterations << endl;
    fori (0,n.hidden_len)
            forj (0,n.input_len)
                write << n.Wh[i][j] << endl;
    fori (0,n.output_len)
            forj (0,n.hidden_len)
                write << n.Wo[i][j] << endl;
    write.close();
    return;
}

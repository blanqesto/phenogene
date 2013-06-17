#include "NN.h"

double pow(double x, double y)
{
    for(int i = 0; i < y; i++)
        x*=x;
    return x;
}

double Neural_Network::segmoidal_fn(double x, int mode)
{
    double out = 0.0;
    if (mode == 0)
        out = 1/(1+(1/pow(2.7182,x)));
    else if(mode == 1) //derivation of segmoidal
        out = x*(1-x);
    return out;
}

void Neural_Network::init()
{
    double r;
    fori(0,output_len)
    {
        r = -0.5 + (double)rand()/((double)RAND_MAX);
        bias_O[i]=r;
        forj(0,hidden_len)
        {
            r = -0.5 + (double)rand()/((double)RAND_MAX);
            Wo[i][j]=r;
        }
    }
    fori(0,hidden_len)
    {
        r = -0.5 + (double)rand()/((double)RAND_MAX);
        bias_H[i]=r;
        forj(0,input_len)
        {
            r = -0.5 + (double)rand()/((double)RAND_MAX);
            Wh[i][j]=r;
        }
    }
}

void Neural_Network::train()
{
    error = 10000;
    /*initialize weights,bias*/
    init();
    int iterations = 0;
    while (error > minimum_error && iterations < max_iterations)
    {
        iterations ++ ;
        error = 0;
        fork(0, dataset_size)
        {
            // Get current dataset of input and expected output
            fori(0,input_len) input[i]=input_dataset[k][i];
            fori(0,output_len) expected_o[i]=output_dataset[k][i];
            // Propagate input
            propagate(AV);
            // Calculate Error
            error+=cal_error(AV);
            // Back propagagte the error
            back_propagate();
        }
        //error*=0.5;
    }
}

void Neural_Network::test()
{
    error = 0;
    output_dataset.clear();
    output_dataset.resize(dataset_size);
    fork(0,dataset_size)
    {
        // Get current dataset of input
        fori(0,input_len)
                input[i]=input_dataset[k][i];
        // Calculate Output
        propagate(AV);
        // Calculate Error
        fori(0,output_len)
                error += pow((output[i]-expected_o[i]),2);
        error*=0.5;
        output_dataset[k].resize(output_len);
        forj(0,output_len)
                output_dataset[k][j]=output[j];
    }
    return;
}

void Neural_Network::propagate(int av)
{
    fill_n(hidden, hidden_len, 0);
    fill_n(output, output_len, 0);
    fori (0,hidden_len)
            forj (0,input_len)
            hidden[i] += input[j]*Wh[i][j];
    fori (0,output_len)
            forj (0,hidden_len)
            output[i] += hidden[j]*Wo[i][j];
    if (av == segmoidal)
        {
            fori(0,output_len)
                    output[i] = segmoidal_fn(output[i],0);
            fori(0,hidden_len)
                    hidden[i] = segmoidal_fn(hidden[i],0);
       }
    return;
}

void Neural_Network::back_propagate()
{
    // bias update
    fori(0,output_len)
            bias_O[i]-=(learning_rate*delta_O[i])+(momentum*bias_O[i]);
    fori(0,hidden_len)
            bias_H[i]-=(learning_rate*delta_H[i])+(momentum*bias_H[i]);

    // output weights update
    fori(0,output_len)
            forj(0,hidden_len)
            Wo[i][j]-=(learning_rate*delta_O[i]*hidden[j]) + (momentum*Wo[i][j]);

    // hidden weights update
    fori(0,hidden_len)
            forj(0,input_len)
            Wh[i][j]-=(learning_rate*delta_H[i]*input[j]) + (momentum*Wh[i][j]);
    return;
}

double Neural_Network::cal_error(int AV)
{
    double total_error = 0.0, temp = 0.0;
    if (AV == segmoidal)
    {
        // error signal for output layer
        fori(0,output_len)
        {
            temp = pow(expected_o[i]-output[i],2);
            delta_O[i] = temp*segmoidal_fn(output[i],1);
            total_error += temp;
        }
        // error signal for hidden layer
        fori(0,hidden_len)
        {
            temp = 0.0;
            forj(0,output_len)
                    temp += Wo[j][i]*delta_O[j];
            delta_H[i] = segmoidal_fn(hidden[i],1)*temp;
        }
    }
    return (0.5*total_error); //was *0.5
}


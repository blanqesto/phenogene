#include <NeuralNetwork.h>

/*
 *Do function:
 **Call train/test according to parameter what
*/
void Neural_Network::do_function(int what)
{
    switch(what)
    {
    case 5:
        train();
        break;
    case 6:
        test();
        break;
    default:
        break;
    }
    return;
}

/*
 *Calculates the power of x to y
 *Overwrites math::pow(double,double)
*/
double pow(double x, double y)
{
    for(int i = 0; i < y; i++)
        x*=x;
    return x;
}

/*
 *If called in mode 0:
 ****Calculates the segmoidal of a double x.
 *If called in mode 1:
 ****Calculates the inverse of the segmoidal of a double x.
*/
double Neural_Network::segmoidal_fn(double x, int mode)
{
    double out = 0.0;
    if (mode == 0)
        out = 1/(1+(1/pow(2.7182,x)));
    else if(mode == 1) //derivation of segmoidal
        out = x*(1-x);
    return out;
}

/*
 *Initialize weights and biases
 *with values between -0.5 and 0.5
*/
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

/*
 *Train the neural network:
 *
 **Until error is under threshold
 **Or maximum number of iterations is reached.
 *
 *Data strcutres of the caller object are used:
 *
 **input_dataset should be filled before calling
 **output_dataset should be filled before calling
 *
*/
void Neural_Network::train()
{
    error = 10000;
    init(); //initialize weights,bias
    int iterations = 0;
    while (error > minimum_error && iterations < max_iterations)
    {
        iterations ++ ;
        error = 0;
        fork(0, dataset_size)
        {
            cout << k << endl;
            // Get current dataset of input and expected output
            fori(0,input_len) input[i]=input_dataset[k][i];
            fori(0,output_len) expected_o[i]=output_dataset[k][i];
            //if(input_absent())continue;
            // Propagate input
            propagate(AV);
            // Calculate Error
            error+=cal_error(AV);
            // Back propagagte the error
            back_propagate();
        }
        error*=0.5;
    }
}



//bool Neural_Network::input_absent()
//{
//    fori (0,input_len)
//            if(input[i]==1) return false;
//    return true;
//}

/*
 *Test the neural network.
 *
 *Data strcutres of the caller object are used:
 *
 **input_dataset should be filled before calling.
 **hidden/output weights should be filled before calling.
 *
*/
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

/*
 *Propagate input through all layers:
 *
 **Starting from the input layer up to the output layer.
 *
 *Use activation function's ID = AV.
 *
*/
void Neural_Network::propagate(int AV)
{
    fill_n(hidden, hidden_len, 0);
    fill_n(output, output_len, 0);
    fori (0,hidden_len)
            forj (0,input_len)
            hidden[i] += input[j]*Wh[i][j];
    fori (0,output_len)
            forj (0,hidden_len)
            output[i] += hidden[j]*Wo[i][j];
    if (AV == segmoidal)
        {
            fori(0,output_len)
                    output[i] = segmoidal_fn(output[i],0);
            fori(0,hidden_len)
                    hidden[i] = segmoidal_fn(hidden[i],0);
       }
    return;
}

/*
 *Back propagate the error through all layers:
 *
 **Starting from the output layer down to the input layer.
 **Updating the hidden/output weights/biases.
 *
*/
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

/*
 *Calculate the error signal for each node.
 *
 *Use activation function's ID = AV.
 *
 *Return total error.
*/
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
    return (total_error);
}


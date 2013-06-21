#include <NeuralNetwork.h>

/**
 * \brief Train or test the network.
 * \param [what] Determines weather to train or to test.
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

/**
 * \brief Calculates the power of x to y
 * \brief Overwrites math::pow(double,double)
*/
double pow(double x, double y)
{
    for(int i = 0; i < y; i++)
        x*=x;
    return x;
}

/**
 * \brief Calculates the segmoidal/segmoidal inverse of a double [x].
 * \param [mode] Determines weather to calculate segmoidal or inverse.
*/
double Neural_Network::segmoidal_fn(double x, int mode)
{
    double out = 0.0;
    if (mode == 0)
    {
        //out = 1/(1+(1/pow(2.7182,x)));
        x*=-1;
        out = 1/1+exp(x);
    }
    else if(mode == 1) //derivation of segmoidal
        out = x*(1-x);
    return out;
}

/**
 * \brief Initialize weights and biases with values between -0.5 and 0.5
*/
void Neural_Network::init()
{
    double r;
    fori(0,output_len)
    {
        r =  -0.5 + (double)rand()/((double)RAND_MAX);
        bias_O[i]=r;
        forj(0,hidden_len)
        {
            r =  -0.5 + (double)rand()/((double)RAND_MAX);
            Wo[i][j]=r;
        }
    }
    fori(0,hidden_len)
    {
        r =  -0.5 + (double)rand()/((double)RAND_MAX);
        bias_H[i]=r;
        forj(0,input_len)
        {
            r =  -0.5 + (double)rand()/((double)RAND_MAX);
            Wh[i][j]=r;
        }
    }
}

/**
 * \brief Train the neural network:
 *
  Until error is under threshold or maximum number of iterations is reached.
  \pre Input Dataset is filled.
  \pre Expected Output Dataset is filled.
  \post Weights are optimal.
 *
*/
void Neural_Network::train()
{
    init(); //initialize weights,bias
    int iterations = 0;
    //int mismatch=1000000;
    //while(mismatch > (0.75*dataset_size) && iterations < max_iterations)
    //{
      //  iterations ++ ;
        //mismatch = 0.0;
      double prevError=10001.1;
//    double best_error;
//    double best_lr;
//    int n_mismatch;
    error = 100000;
    //for (int n = 0; n < 130; n++)
    //{
        error = 10000.0;
        error = 10000.0;
        cout << "min_err" << minimum_error << endl << endl << endl;
        while (error > minimum_error && error < prevError)//&& iterations < max_iterations)
        {
            iterations ++ ;
            prevError = error;
            error = 0.0;
            fork(0, dataset_size)//dataset_size);
            {
                //cout << k << " ";
                // Get current dataset of input and expected output
                fori(0,input_len) input[i]=input_dataset[k][i];
                fori(0,output_len) expected_o[i]=output_dataset[k][i];

                //fori(0,input_len) cout << input[i] << endl;
                //fori(0,output_len) cout << expected_o[i] << endl;
                //if(input_absent())continue;
                // Propagate input
                propagate();
                // Calculate Error
                error+=cal_error();
                // Back propagagte the error
                back_propagate();
            }
            error/=dataset_size;
        }
//        if (error<prev_error)
//        {
//            cout << "Found optimal!" << n << endl;
//            best_error = error;
//            best_lr = learning_rate;
//        }
//        learning_rate+=0.001;
//    }
//    cout << "Optimals:\nError= " << best_error << endl << "learning rate= " << best_lr << endl;
}



/**
 * \brief Test the neural network.
 *
 *\pre Input_dataset is filled.
  \pre Weights dataset is filled.
  \post Output is filled.
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
        propagate();
        // Calculate Error
        fori(0,output_len)
                error += pow((output[i]-expected_o[i]),2);
        output_dataset[k].resize(output_len);
        forj(0,output_len)
                output_dataset[k][j]=output[j];
    }
    error*=0.5;
    return;
}

/**
 * \brief Propagate input starting from the input layer up to the output layer.
   Uses softmax activation function.
 *
 \pre Input dataset is filled
 \post Hidden and Output nodes are computed.
 *
*/
void Neural_Network::propagate()
{
    fill_n(hidden, hidden_len, 0);
    fill_n(output, output_len, 0);

    double max = -1000.0;
    double maxO = -1000.0;

    /*Calculate the net (weights x input)*/
    calculate_net(max,maxO);
    double exp_HT=0.0;
    double exp_OT=0.0;

    /*Softmax activation function*/
    fori(0,hidden_len) exp_HT+=hidden[i]=exp(netH[i]);//-max);
    fori(0,output_len) exp_OT+=output[i]=exp(netO[i]);//-maxO);

   // cout << exp_HT << ":HELLO:" << exp_OT << endl;

    fori(0,hidden_len) hidden[i]=hidden[i]/exp_HT;
    fori(0,output_len) output[i]=output[i]/exp_OT;

//    fori(0,hidden_len) cout << hidden[i] << endl;
//    fori(0,output_len) cout << output[i] << endl;

    //fori(0,hidden_len) cout << hidden[i] << endl;
    //fori(0,output_len) cout << output[i] << endl;
    return;
}

/**
 * \brief Back propagate the error starting from the output layer down to the input layer.
 *
  \pre Delta signal for each node has been calculated.
  \pre Bias and Weights doesn't hold garpage.
  \post Bias and Weights are updated.
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

/**
 * \brief Calculate the error signal for each node.
 Uses corss entropy error function.
 *
 \returns [total error]
 \pre Actual output is calculated using function [propagate].
 \post Delta signal for all nodes is calculated.
*/
double Neural_Network::cal_error()
{
    fill_n(delta_O,output_len,0);
    fill_n(delta_H,hidden_len,0);
    double total_error = 0.0, temp = 0.0;

    double max = -1000;
    double maxO = -1000;
    /*Calculate the net (weights x input)*/
    calculate_net(max,maxO);

    // error signal for output layer
    fori(0,output_len)
    {        //temp = log(netO[i]+maxO);//-maxO);
        //cout << temp << "::";
        delta_O[i] = (output[i]-expected_o[i]);//expected_o[i]*log(output[i]+0.001)+(1-expected_o[i])*log(1-output[i]+0.001);//*temp;
        temp = expected_o[i]*log(output[i])+(1-expected_o[i])*log(1-output[i]);
        total_error += temp;
    }
    total_error/=-output_len;
//    total_error=pow(total_error,2.0);
//    total_error*=0.5;
    // error signal for hidden layer
    fori(0,hidden_len)
    {
        temp = 0.0;
        forj(0,output_len)
                temp += delta_O[j]*Wo[j][i];//log(netH[i]+max);//-max)*delta_O[j];
        //cout << temp << ":";
        delta_H[i] = temp;
    }
    return (total_error);
}

/**
 * \brief Calculates the net for each node.
 \pre Input dataset is filled.
 \pre Weights dataset is initialized.
 \post Net is caculated for Output and Hidden nodes.
*/
void Neural_Network::calculate_net(double &max, double &maxO)
{
    max = -1000.0;
    maxO = -1000.0;
    fill_n(netH,hidden_len,0);
    fill_n(netO,output_len,0);

    /*Calculate the net (weights x input)*/
    fori (0,hidden_len)
    {
        forj (0,input_len)netH[i] += input[j]*Wh[i][j];
        if (netH[i]>max)max=netH[i];
    }
    fori (0,output_len)
    {
        forj (0,hidden_len) netO[i] += netH[j]*Wo[i][j];
        if (netO[i]>maxO)maxO=netO[i];
    }
    return;
}

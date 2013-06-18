#include <NeuralNetwork.h>

/*
 *Set number of input nodes to int i
*/
void Neural_Network::set_input_len(int i)
{
    input_len = i;
    return;
}
/*
 *Set number of output to int i
*/
void Neural_Network::set_output_len(int i)
{
    output_len = i;
    return;
}
/*
 *Set hidden nodes to int i
*/
void Neural_Network::set_hidden_len(int i)
{
    hidden_len=i;
    return;
}
/*
 *Set Activation function to be used to int i
*/
void Neural_Network::set_AV(int i)
{
    AV=i;
    return;
}
/*
 *Set minimum error to double d
*/
void Neural_Network::set_minimum_error(double d)
{
    minimum_error=d;
    return;
}
/*
 *Set learning rate to double d
*/
void Neural_Network::set_learning_rate(double d)
{
    learning_rate=d;
    return;
}


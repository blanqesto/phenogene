#include <NeuralNetwork.h>

/**
 * \brief Set number of input nodes to int i
 * \param [int i] Number of nodes on the input layer.
*/
void Neural_Network::set_input_len(int i)
{
    input_len = i;
    return;
}
/**
 * \brief Set number of output to int i
 * \param [int i] Number of nodes on the output layer.
*/
void Neural_Network::set_output_len(int i)
{
    output_len = i;
    return;
}
/**
 * \brief Set hidden nodes to int i
 * \param [int i] Number of nodes on the hidden layer.
*/
void Neural_Network::set_hidden_len(int i)
{
    hidden_len=i;
    return;
}
/**
 * \brief Set Activation function to be used to int i
 * \param [int i] Activation function to be used.
*/
void Neural_Network::set_AV(int i)
{
    AV=i;
    return;
}
/**
 * \brief Set minimum error to double d
 * \param [double d] Least acceptable error.
*/
void Neural_Network::set_minimum_error(double d)
{
    minimum_error=d;
    return;
}
/**
 * \brief Set learning rate to double d
 * \param [double d] Learning rate of the neural network.
*/
void Neural_Network::set_learning_rate(double d)
{
    learning_rate=d;
    return;
}


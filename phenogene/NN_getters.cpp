#include <NeuralNetwork.h>

/**
 * \brief Get int number of input nodes
*/
int Neural_Network::get_input_len()
{
    return input_len;
}


/**
 * \brief Get int number of output nodes
*/
int Neural_Network::get_output_len()
{
    return output_len;
}


/**
 * \brief Get int number of hidden nodes
*/
int Neural_Network::get_hidden_len()
{
    return hidden_len;
}

/**
 * \brief Get double momentum
*/
double Neural_Network::get_momentum()
{
    return momentum;
}

/**
 * \brief Get int maximum iterations number
*/
int Neural_Network::get_max_it()
{
    return max_iterations;
}

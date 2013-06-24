#include <NeuralNetwork.h>

/**
 * \brief Get integer number of input nodes
*/
int Neural_Network::get_input_len()
{
    return input_len;
}


/**
 * \brief Get integer number of output nodes
*/
int Neural_Network::get_output_len()
{
    return output_len;
}


/**
 * \brief Get integer number of hidden nodes
*/
int Neural_Network::get_hidden_len()
{
    return hidden_len;
}

/**
 * \brief Get integer maximum iterations number
*/
int Neural_Network::get_max_it()
{
    return max_iterations;
}

/**
 * \brief Get integer actual iterations number
*/
int Neural_Network::get_iterations()
{
    return iterations;
}

/**
 * \brief Get integer number of mismatches between expected and actual output
*/
int Neural_Network::get_mismatch()
{
    return mismatch;
}

/**
 * \brief Get integer dataset size
*/
int Neural_Network::get_dataset_size()
{
    return dataset_size;
}

/**
 * \brief Get double least error reached
*/
double Neural_Network::get_least_error()
{
    return least_error;
}

/**
 * \brief Get double momentum
*/
double Neural_Network::get_momentum()
{
    return momentum;
}

/**
 * \brief Get double learning_rate
*/
double Neural_Network::get_learning_rate()
{
    return learning_rate;
}
/**
 * \brief Get double minimum error
*/
double Neural_Network::get_min_er()
{
    return minimum_error;
}

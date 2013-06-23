#include <NeuralNetwork.h>


/**
 * \brief Neural Network class constructor
*/
Neural_Network::Neural_Network()
{
    srand((unsigned)time(0));
    minimum_error = 0.01;
    input_len = 9;
    hidden_len = ceil((input_len+output_len)/2);
    output_len = 5;
    momentum = 0.0000;
    learning_rate = 0.001;
    dataset_size=0;
    max_iterations=10000;
    mismatch=0;
    /*input_rank.insert(pair <char,double>('-',0));
    input_rank.insert(pair <char,double>('1',0));
    input_rank.insert(pair <char,double>('A',0.225));
    input_rank.insert(pair <char,double>('C',0.45));
    input_rank.insert(pair <char,double>('G',0.675));
    input_rank.insert(pair <char,double>('T',0.9));*/
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('-','1'),0));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('A','A'),0.0625));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('A','C'),0.125));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('A','G'),0.1875));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('A','T'),0.25));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('C','A'),0.3125));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('C','C'),0.375));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('C','G'),0.4375));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('C','T'),0.5));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('G','A'),0.5625));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('G','C'),0.625));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('G','G'),0.6875));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('G','T'),0.75));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('T','A'),0.8125));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('T','C'),0.875));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('T','G'),0.9375));
    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('T','T'),1));
}

#include <NeuralNetwork.h>


/*
 *Neural Network class constructor
*/
Neural_Network::Neural_Network()
{
    srand((unsigned)time(0));
    minimum_error = 0.01;
    input_len = 18;
    hidden_len = 12;
    output_len = 5;
    momentum = 0.0001;
    learning_rate = 0.001;
    dataset_size=0;
    AV=segmoidal;
    input_rank.insert(pair <char,double>('-',0.1));
    input_rank.insert(pair <char,double>('1',0.1));
    input_rank.insert(pair <char,double>('A',0.3));
    input_rank.insert(pair <char,double>('C',0.4));
    input_rank.insert(pair <char,double>('G',0.6));
    input_rank.insert(pair <char,double>('T',0.9));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('-','1'),0));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('A','A'),1));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('A','C'),2));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('A','G'),3));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('A','T'),4));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('C','A'),5));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('C','C'),6));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('C','G'),7));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('C','T'),8));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('G','A'),9));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('G','C'),10));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('G','G'),11));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('G','T'),12));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('T','A'),13));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('T','C'),14));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('T','G'),15));
//    input_rank.insert(pair<pair<char,char>,int>(pair <char,char> ('T','T'),16));
}

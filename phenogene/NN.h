
#ifndef NN_H
#define NN_H
#include <iostream>
#include <map>
#include <stdio.h>
#include <utility>
#include <vector>
#include <cstring>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <sstream>
using namespace std;

#define fori(a, b) for (int i = (a); i < (b); i++)
#define forj(a, b) for (int j = (a); j < (b); j++)
#define fork(a, b) for (int k = (a); k < (b); k++)
#define max_dataset_size 10000
#define input_l 100
#define output_l 100
#define hidden_l 100
#define hidden_layer 0
#define output_layer 1
#define segmoidal 1

class Neural_Network
{
public:
    /*Networks Parameters*/
    int input_len,hidden_len,output_len, AV,dataset_size;
    double error, minimum_error, learning_rate, momentum;
    /**/
    map <pair<char,char>,int> input_rank;
    map <string,int> output_rank;
    map <int,string> rank_output;

    /*layers structures*/
    vector <vector<double> > input_dataset, output_dataset;
    double	input[input_l],
            hidden[hidden_l],
            output[output_l],
            expected_o[output_l],
            bias_O[output_l],
            bias_H[hidden_l];

    /*weights structures*/
    double	Wh[hidden_l][input_l],
            Wo[output_l][hidden_l],
            tempWo[output_l][hidden_l];

    /*error measurements*/
    double  delta_O[output_l],
            delta_H[hidden_l];

    /*files parameters*/
    string  input_file,
            expected_out_file,
            output_file,
            weights_file,
            rank_output_strings[output_l];

    Neural_Network();
    void access(int);
    //void copy_array(int ar1, int ar2);
    void init();
    void train();
    void test();
    void start(int);
    double segmoidal_fn(double, int);
    void propagate(int);
    double cal_error(int);
    void back_propagate();
    void fill_rank_output();
    void read_input(string filePath);
    void read_expected_output(string filePath);
    void read_weights(string filePath);
    void write_output(string filePath);
    void write_weights(string filePath);
};
#endif // NN_H

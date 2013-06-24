#ifndef NN_H
#define NN_H

#include <General_Notation.h>

class Neural_Network
{
friend class File_Manager;
public:
    Neural_Network();
    /*Setter functions*/
    void set_input_len(int);
    void set_output_len(int);
    void set_hidden_len(int);
    void set_max_it(int);
    void set_minimum_error(double);
    void set_learning_rate(double);
    void set_momentum(double);


    /*Getter functions*/
    int get_input_len();
    int get_output_len();
    int get_hidden_len();
    int get_max_it();
    int get_iterations();
    int get_mismatch();
    int get_dataset_size();
    double get_least_error();
    double get_momentum();
    double get_learning_rate();
    double get_min_er();

    /*Other functions*/
    void do_function(int);

private:
    /*Networks Parameters*/
    int input_len;
    int hidden_len;
    int output_len;
    int max_iterations;
    int iterations;
    int dataset_size;
    int mismatch;
    double least_error;
    double error;
    double minimum_error;
    double learning_rate;
    double momentum;

    /*Layers structures*/
    double input[input_l];
    double hidden[hidden_l];
    double output[output_l];
    double netH[hidden_l];
    double netO[output_l];
    double expected_o[output_l];
    double bias_O[output_l];
    double bias_H[hidden_l];

    /*Weights structures*/
    double Wh[hidden_l][input_l];
    double Wo[output_l][hidden_l];
    double tempWo[output_l][hidden_l];

    /*Error delta*/
    double delta_O[output_l];
    double delta_H[hidden_l];

    /*Map to decimal from characters*/
    //map <char,double> input_rank;
    map < pair <char,char>,int > input_rank;
    //map <pair<char,char>,double> input_rank;
    /*Map to decimal from string*/
    map <string,int> output_rank;
    /*Map to string from decimal*/
    map <int,string> rank_output;

    /*Input/Output vector, to hold the whole population*/
    vector <vector<double> > input_dataset;
    vector <vector<double> > output_dataset;



    void init();
    void train();
    void predict();
    double segmoidal_fn(double, int);
    void propagate();
    double cal_error();
    void back_propagate();
    bool input_absent();
    void calculate_net(double&,double&);
};
#endif // NN_H

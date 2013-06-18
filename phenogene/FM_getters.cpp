#include <FileManager.h>

/*
 *Get string expected output content
*/
string Neural_Network::get_read_ex_output_string()
{
    return read_ex_output_string;
}
/*
 *Get string input content
*/
string Neural_Network::get_input_population_string()
{
    return input_population_string;
}
/*
 *Get string output content
*/
string Neural_Network::get_output_population_string()
{
    return output_population_string;
}
/*
 *Get string represenation for given ID
*/
string Neural_Network::get_rank_output_strings(int i)
{
    return rank_output_strings[i];
}

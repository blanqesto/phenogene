#include <FileManager.h>

/*
 *Get string expected output content
*/
string File_Manager::get_read_ex_output_string()
{
    return read_ex_output_string;
}
/*
 *Get string input content
*/
string File_Manager::get_input_population_string()
{
    return input_population_string;
}
/*
 *Get string output content
*/
string File_Manager::get_output_population_string()
{
    return output_population_string;
}
/*
 *Get string represenation for given ID
*/
string File_Manager::get_rank_output_strings(int i)
{
    return rank_output_strings[i];
}

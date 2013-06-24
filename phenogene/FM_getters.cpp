#include <FileManager.h>

/**
 * \brief Get string expected output content
*/
string File_Manager::get_read_ex_output_string()
{
    return read_ex_output_string;
}
/**
 * \brief Get string input content
*/
string File_Manager::get_input_population_string()
{
    return input_population_string;
}
/**
 * \brief Get string output content
*/
string File_Manager::get_output_population_string()
{
    return output_population_string;
}
/**
 * \brief Get string pg file
*/
string File_Manager::get_pg_file()
{
    return pg_file;
}
/**
 * \brief Get string input file
*/
string File_Manager::get_input_file()
{
    return input_file;
}
/**
 * \brief Get string represenation for given ID
*/
string File_Manager::get_rank_output_strings(int i)
{
    return rank_output_strings[i];
}

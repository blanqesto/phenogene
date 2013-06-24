#include <FileManager.h>

/**
 * \brief Set input file path to string s
 * \param [string s] input file path
*/
void File_Manager::set_input_file(string s)
{
    input_file=s;
    return;
}
/**
 * \brief Set expected output file path to string s
 * \param [string s] expected output file path
*/
void File_Manager::set_expected_out_file(string s)
{
    expected_out_file=s;
    return;
}
/**
 * \brief Set calculated output file path to string s
 * \param [string s] output file path
*/
void File_Manager::set_output_file(string s)
{
    output_file=s;
    return;
}
/**
 * \brief Set weights file path to string s
 * \param [string s] weights file path
*/
void File_Manager::set_weights_file(string s)
{
    weights_file=s;
    return;
}
/**
 * \brief Set string pg file
 * \param [string s] pg project file path
*/
void File_Manager::set_pg_file(string s)
{
    pg_file=s;
}
/**
 * \brief Set string with index i to s
 * \param [int i] Index i of rank_output_strings
 * \param [string s] Output keyword
*/
void File_Manager::set_rank_output_strings(int i, string s)
{
    rank_output_strings[i] = s;
    return;
}

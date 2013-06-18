#include <FileManager.h>

/*
 *Set input file path to string s
*/
void File_Manager::set_input_file(string s)
{
    input_file=s;
    return;
}
/*
 *Set expected output file path to string s
*/
void File_Manager::set_expected_out_file(string s)
{
    expected_out_file=s;
    return;
}
/*
 *Set calculated output file path to string s
*/
void File_Manager::set_output_file(string s)
{
    output_file=s;
    return;
}
/*
 *Set weights file path to string s
*/
void File_Manager::set_weights_file(string s)
{
    weights_file=s;
    return;
}

/*
 *Set string with index i to s
*/
void File_Manager::set_rank_output_strings(int i, string s)
{
    rank_output_strings[i] = s;
    return;
}

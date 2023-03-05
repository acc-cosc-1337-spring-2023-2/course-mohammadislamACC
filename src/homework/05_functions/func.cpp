//add include statements
#include <iostream>
#include "func.h"
#include <string>

using namespace std;

//add function code here

string reverse_string(string dna)
{
    int length = dna.length();

    if(length == 0)
        return dna;

    for(int i = 0; i < length / 2; i++)
    {
        int temp = dna[i];
        dna[i] = dna[length - 1 - i];
        dna[length - 1 - i] = temp;
    }

    return dna;
}

string get_dna_complement(string dna)
{
    string reverse = reverse_string(dna);
    string result = "";

    for(int i = 0; i < reverse.length(); i++)
    {
        if(reverse[i] == 'T')   
            result = result + 'A';
        else if(reverse[i] == 'A') 
            result = result + 'T';
        else if(reverse[i] == 'G')
            result = result + 'C';
        else if(reverse[i] == 'C')
            result = result + 'G';
        else
            result = result + reverse[i];
    }

    return result;
}

double get_gc_content(const string& dna)
{
    int length = dna.length();
    int count = 0;

    for(int i = 0; i < length; i++)
    {
        if(dna[i] == 'C' || dna[i] == 'G')
            count++;
    }

    return (double) count/length;
}
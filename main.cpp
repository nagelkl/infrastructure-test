//
// Created by nagelkl on 20.10.2017.
//

#include <cstdio>


void printhelper(const char *text)
{
    fprintf(stdout, "%s", text);

}

int main (void)
{
    fprintf(stdout, "This is a test for integration of CLioin in GitHub");

    printhelper("This is an additional test for generating a new function \n");

    return 0;
}
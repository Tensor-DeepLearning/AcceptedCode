#include <iostream>
#include <fstream>

#include ".\CodingInterviews\16.h"
#include ".\CodingInterviews\2.h"
#include ".\2017ProgrammingTest\Alibaba.h"
#include ".\2017ProgrammingTest\Package.h"

int main(int argc, char **argv)
{
    //�����ض���;
    streambuf *backup;
    ifstream fin;
    fin.open("TestExample.txt");
    backup = cin.rdbuf();
    cin.rdbuf(fin.rdbuf());

    Chirl::Solution_Alibaba::test();

    cin.rdbuf(backup);
    return 0;
}


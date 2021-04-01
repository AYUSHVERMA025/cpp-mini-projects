//----------------------random word from a file------------------------
//---------------- ------Made By - vishal singh------------------------

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>   //to get random number
#include<time.h>

using namespace std;

int main()
{
    ifstream file;
    string word;
    int w_count = 0;
    char filename[20]="demo.txt";

    cout<<"Enter file name : ";
    //cin>>filename;

    file.open(filename);

    if(file)
        while(!file.eof())
        {
            file>>word;
            w_count++;
        }
    else
        {
            cout<<"\nFile not found.";
            exit(0);
        }

    srand(time(0));     //change random number with time

    int pos = 4;
    pos *= rand() % w_count;

    file.seekg(pos,ios::beg);

    file>>word;

    cout<<"\nRandom word : "<<word;

    file.close();

    return 0;
}

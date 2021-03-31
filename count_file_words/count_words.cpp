//-------------------Count total words of a file--------------------
//----------------------Made By - vishal singh--------------------

#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
    ifstream file;
    string word;
    int w_count = 0;

    file.open("demo.txt");
    if (file)
        while(!file.eof())
        {
            file>>word;
            cout<<word<<" ";
            w_count++;
        }
     else
        {
          cout<<"File not found";
          exit(0);
        }
    file.close();

    cout<<"\n\nTotal Words : "<<w_count;

    return 0;
}

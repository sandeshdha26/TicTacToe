#include<iostream>
using namespace std;

int printTable()
{
    int table[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[0][0]<<"  |  "<<table[0][1]<<"  |  "<<table[0][2]<<endl;
    cout<<"\t____|_____|____\n";
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[1][0]<<"  |  "<<table[1][1]<<"  |  "<<table[1][2]<<endl;
    cout<<"\t____|_____|____\n";
    cout<<"\t    |     |    \n";
    cout<<"\t "<<table[2][0]<<"  |  "<<table[2][1]<<"  |  "<<table[2][2]<<endl;
    cout<<"\t    |     |    \n";
}


    /*cout<<"\t    |    |    \n";
    cout<<"\t____|____|____\n";
    cout<<"\t    |    |    \n";
    cout<<"\t____|____|____\n";
    cout<<"\t    |    |    \n";
    cout<<"\t    |    |    \n";
}*/
#include <iostream>
using namespace std;

int main()
{
    int i;int j;

    int multi[3][2]={{1,2},{3,4},{5,6}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<multi[i][j]<<endl;
        }
    }

    return 0;
}
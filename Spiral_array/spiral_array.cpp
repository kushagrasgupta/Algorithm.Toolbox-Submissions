#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    if(nRows==0||nCols==0) return;

    int e=nRows*nCols;
    int rs=0;
    int cs=0;
    int c=0;
    while(c<e)
    {
     for(int i=cs;c<e&&i<nCols;++i)
     {
         cout<<input[rs][i]<<" ";
         c++;
     }  
     rs++;
     for(int i=rs;c<e&&i<nRows;++i)
     {
         cout<<input[i][nCols-1]<<" ";
         c++;
     }
     nCols--;
     for(int i=nCols-1;c<e&&i>=cs;--i)
     {
         cout<<input[nRows-1][i]<<" ";
         c++;
     } 
     nRows--;
     for(int i=nRows-1;c<e&&i>=rs;--i)
     {
         cout<<input[i][cs]<<" ";
         c++;
     }
     cs++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
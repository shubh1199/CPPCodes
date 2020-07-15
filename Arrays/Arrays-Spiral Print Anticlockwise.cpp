#include<iostream>
using namespace std;
void spiralPrintAntiClockwise(int mat[10][10], int r, int c) {
    int startRow = 0, startCol = 0, endCol = c - 1, endRow = r - 1;

    while (startRow <= endRow && startCol <= endCol) {
        
        //print startCol
        if(endCol>=startCol){
            int i=startCol;
            while (i <= endRow) {
                cout << mat[i][startCol] << ", ";
                i++;
            }
            startCol++;
        }
        
        //print endRow
        if(endRow >= startRow){
            int j = startRow+1;
            while (j <= endCol) {
                cout << mat[endRow][j] << ", ";
                j++;
            }
            endRow--;
        }
        
        //print endCol
        int k = endRow;
        while (k >= startRow) {
            cout << mat[k][endCol] << ", ";
            k--;
        }
        endCol--;

        //print StartRow
        int l = endCol;
        while (l >= startCol) {
            cout << mat[startRow][l] << ", ";
            l--;
        }
        startRow++;
        
    }

}

int main(){
    int r,c;
    cin>>r>>c;
    int mat[10][10];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat[i][j];
        }
    }
spiralPrintAntiClockwise(mat,r,c);
    cout<<"END";
}
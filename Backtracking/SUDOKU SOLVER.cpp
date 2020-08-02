#include <iostream>
#include<cmath>
using namespace std;

bool canPlace(int mat[][9],int i, int j,int n, int k){
    for(int x=0;x<n;x++){
        if(mat[x][j]==k || mat[i][x]==k){
            return false;
        }
    }
    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;
    for(int x=sx;x<sx+rn;x++){
        for(int y=sy;y<sy+rn;y++){
            if(mat[x][y]==k){
                return false;
            }
        }
    }
    return true;
}
bool solveSudoku(int mat[][9], int i, int j, int n){
    //Base Case
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n){
        return solveSudoku(mat,i+1,0,n);
    }
    //Skip Prefilled Cells
    if(mat[i][j]!=0){
        return solveSudoku(mat,i,j+1,n);
    }
    //Recurrsion
    //Fill The Cells
    for(int k=1;k<=n;k++){
        if(canPlace(mat,i,j,n,k)){
            mat[i][j]=k;
            bool couldSolve=solveSudoku(mat,i,j+1,n);
            if(couldSolve==true){
                return true;
            }
        }
    }
    //Backtracking
    mat[i][j]=0;
    return false;
}
int main() {
    int n;
    cin>>n;
    int mat[9][9];
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>mat[i][j];
            }
        }
        solveSudoku(mat,0,0,n);
}
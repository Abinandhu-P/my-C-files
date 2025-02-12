
void multiplymatric(int **arr, int row,int column,int **arr1,int row1,int column1,int** res)
{

    
    for(int i=0;i<row;i++)
    {
    for(int j=0;j<column1;j++)
    {
    for(int k=0;k<column;k++)
    {
      res[i][j] += arr[i][k] * arr1[k][j];
    }
    }
    }

    
     

} 

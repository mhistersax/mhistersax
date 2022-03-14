#include <stdio.h>
int main(){
    int i;
    int j;
    //int k;
    int size1;
    int size2;
    #define max 100
    #define low 100
    //int size3;
   int num1,num2,num3;
    int arr[max][low];

  /*  printf("%d\n",arr[1][0][4]);
    printf("%d\n",arr[0][1][2]);
    printf("%d\n",arr[0][2][2]);*/
    printf("THE FIRST SIZE FOR THE 3D ARRAY!\n");
    scanf("%d",&size1);
    printf("THE SECOUND SIZE FOR THE 3D ARRAY!!\n");
    scanf("%d",&size2);
     
     for(i=0;i<size1;i++)
     {
         for(j=0;j<size2;j++)
         {
             printf("ENTER ELEMENT %d-%d\n",i,j);
             scanf("%d",&arr[i][j]);
         }
     }
     for(i=0;i<size1;i++)
     {printf("\n");
         //printf("\n");
         //printf("\t");
         for(j=0;j<size2;j++)
         {
             
             //printf("\t");
             //printf("\n");
             printf("%d\t",arr[i][j]);
            // printf("\t\t");
         }
     }
     num1=0;

      for(i=0; i<size1; i++)
    {
        for(j=0;j<size2;j++)
        {
            num1 = num1 + arr[i][j];

        }
        
    }
    printf("\nSum of all rows of array = %d\n", num1);
num2=0;
    
        for(j=0;j<size2;j++)
        {
            for(i=0; i<size1; i++)
          {
              num2 = num2 + arr[j][i];

          } 
            

        }
        
    
    printf("Sum of all column of array = %d\n", num2);
      #include<iostream>

using namespace std;

void TwoDimToThree();

void ThreeDimToTwo();

main()
{

	cout<<"If u want to convert 2d array to 3d array enter 1 "<<endl;

	cout<<endl<<"If u want to convert 3d array to 2d array enter 2 "<<endl;

	int n;

	cin>>n;

	if(n==1)
		TwoDimToThree();

	else
		ThreeDimToTwo();

}
void TwoDimToThree()
{

	cout<<"Enter the no. of rows and column for 2d array "<<endl;

	int Row,Col;

	cin>>Row>>Col;

	cout<<"Enter "<<Row*Col<<" elements for the 2d array"<<endl;

	int i,j,k,a[Row][Col],b[Row][Row][Col];

	for(i=0;i<Row;i++)
		for(j=0;j<Col;j++)
			cin>>a[i][j];

	cout<<"The elements of 2d array are "<<endl;
	for(i=0;i<Row;i++)
		for(j=0;j<Col;j++)
			cout<<"a["<<i<<"]["<<j<<"] = "<<a[i][j]<<endl;

	cout<<"The elements of 3d array are "<<endl;
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Row;j++)
			for(j=0;j<Row;j++)
			{
				for(k=0;k<Col;k++)
				{
					b[i][j][k]=a[j][k];
					cout<<"b["<<i<<"]["<<j<<"]["<<k<<"] = "<<b[i][j][k]<<endl;
				}
			}
	}

}

void ThreeDimToTwo()
{

	cout<<"Enter the no. of rows , column , length of 3d array "<<endl;

	int Row,Col,Len;

	cin>>Row>>Col>>Len;

	cout<<"Enter "<<(Row*Col)*Len<<" elements"<<endl;

	int a[Row][Col][Len],b[Row][Row*Col];

	int i,j,k;
	for(i=0;i<Row;i++)
		for(j=0;j<Col;j++)
			for(k=0;k<Len;k++)
				cin>>a[i][j][k];

	int l=0,m=0,p;

	cout<<"Elements of the three dimensional array are "<<endl;
	for(i=0;i<Row;i++)
	{
		for(j=0;j<Col;j++)
		{
			for(k=0;k<Len;k++)
			{
				b[l][m]=a[i][j][k];
				cout<<"a["<<i<<"]["<<j<<"]["<<k<<"] = "<<a[i][j][k]<<endl;
				m++;
				p=m;
			}
		}
		m=0,l++;
	}

	cout<<endl<<"Elements of two dimensional array are "<<endl;

	for(i=0;i<l;i++)
	{
		for(j=0;j<p;j++)
			cout<<"b["<<i<<"]["<<j<<"] = "<<b[i][j]<<endl;
	}

}
      
     


    return 0;
}
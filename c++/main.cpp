#include "Header.h"

int main(int argc, const char * argv[])
{
	Matrix<double,5, 6> temp;
    Matrix<char,10, 15> temp1;
	double temp2[2][3]={{1.2,3.4,5.6},{2.1,2.4,4.2}};
	Matrix<double,2, 3> temp3(temp2);
	int temp4[2][2]={3,5,7,4};
	Matrix<int,2,2> temp5(temp4);
    char temp6[2][2]={'A','B','C','D'};
	Matrix<char,2,2> temp7(temp6);
    
    
    /////////////////////////////////////////////////////////////////////////////////////////////
    //   print the elements
    //
    ////////////////////////////////////////////////////////////////////////////////////////////
    cout<<"Creating a 5x6 double matrix with default constructor and print the elements."<<endl;
	temp.print();
    cout<<" Creating a 10x15 char matrix with default constructor and print the elements."<<endl;
	temp1.print();
    cout<<"Creating a 2x3 double matrix with values given below and print the elements."<<endl;
	cout<<"*1.2 3.4 5.6*"<<endl<<"*2.1 2.4 4.2*"<<endl;
	temp3.print();
    cout<<"Creating a 2 x 2 integer matrix with values given below and print the elements as well as the determinant."<<endl;
	cout<<"*3 5*"<<endl<<"*7 4*"<<endl;
    temp5.print();
    temp5.determinant();
    cout<<"Creating a 2 x 2 char matrix with values given below and print the elements and print determinant."<<endl;
	cout<<"*A B*"<<endl<<"*C D*"<<endl;
    temp7.print();
    temp7.determinant();
    
    ifstream outf("myMatrixInput.txt");
    if(!outf)
    {
        cout<<"unable to locate the file 'myMatrixInput.txt'! "<<endl;
    }else{
        cout<<"Reading data from the file......"<<endl;
        int read[4][5];
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<5;j++)
            {
                outf>>read[i][j];
            }
        }
        Matrix<int,4,5> test(read);
        test.print();
    }
    
    
	return 0;
}


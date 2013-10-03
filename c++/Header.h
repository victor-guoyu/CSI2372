#include <iostream>
#include <fstream>
#include <string>
using namespace std;

template <class T,int ROWNUM,int COLNUM>
class Matrix{
private:
    T matrix[ROWNUM][COLNUM];
public:
	//default constructor, the default values are set to be 0.
	Matrix()
	{
		for(int i=0;i<ROWNUM;i++)
        {
            for(int j=0;j<COLNUM;j++)
            {
				matrix[i][j]=0;
            }
            cout<<endl;
        }
	}
	Matrix(T (*arra)[COLNUM])
	{
		for(int i=0;i<ROWNUM;i++)
        {
            for(int j=0;j<COLNUM;j++)
            {
				matrix[i][j]=arra[i][j];
            }
            cout<<endl;
        }
	}
    void print()
    {
        for(int i=0;i<ROWNUM;i++)
        {
            for(int j=0;j<COLNUM;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
template <int ROWNUM,int COLNUM>
class Matrix<char,ROWNUM,COLNUM>
{
private:
    char matrix[ROWNUM][COLNUM];
public:
    //default constructor, the default values are set to be A.
    Matrix()
	{
		for(int i=0;i<ROWNUM;i++)
        {
            for(int j=0;j<COLNUM;j++)
            {
				matrix[i][j]='A';
            }
            cout<<endl;
        }
	}
    Matrix(char (*arra)[COLNUM])
	{
		for(int i=0;i<ROWNUM;i++)
        {
            for(int j=0;j<COLNUM;j++)
            {
				matrix[i][j]=arra[i][j];
            }
            cout<<endl;
        }
	}
    void print()
    {
        for(int i=0;i<ROWNUM;i++)
        {
            for(int j=0;j<COLNUM;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

/*
 ==========================================================================
 Specialization --> 2x2
 */
template <class T>
class Matrix<T,2,2>{
private:
    T matrix[2][2];
public:
	//default constructor, the default values are set to be 0.
	Matrix()
	{
		for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
				matrix[i][j]=0;
            }
            cout<<endl;
        }
	}
	Matrix(T (*arra)[2])
	{
		for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
				matrix[i][j]=arra[i][j];
            }
            cout<<endl;
        }
	}
    void print()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void determinant()
    {
        cout<<"the determinant is "<< matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0]<<endl;
    }
};
/*
 ==========================================================================
 Specialization --> char
 */
template <>
class Matrix<char,2,2>
{
private:
    char matrix[2][2];
public:
    //default constructor, the default values are set to be A.
    Matrix()
	{
		for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
				matrix[i][j]='A';
            }
            cout<<endl;
        }
	}
    Matrix(char (*arra)[2])
	{
		for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
				matrix[i][j]=arra[i][j];
            }
            cout<<endl;
        }
	}
    void print()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void determinant()
    {
        cout<<"No determinant exists for Char type matrix"<<endl;
    }
};

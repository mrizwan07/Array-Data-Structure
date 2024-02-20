#include <iostream>
using namespace std;
template <class T>
class Array
{
	T* data;
	int size;
	int col;
	int mapIndex(int i, int j)
	{
		int index = i * col + j - (col(col - 1) / 2);
		return index;
	}
public:
	Array()
	{
		int col = 0;
		istream in;
		in.open("matrix.txt");
		in >> col;
		this->col = col;
		int count = 0;
		for (int  i = 0; i < col; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (in>>!=0)
				{
					count++;
				}
			}
		}
		data = new T[count];
		column = col;
		int coun = 0;
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (in>>!=0)
				{
					in>> data[coun];
				}
			}
		}

	}
	void setElement(int i,int j,T val)
	{
		int index = mapIndex(i, j);
		data[index] = val;
	}
	T setElement(int i, int j)
	{
		int index = mapIndex(i, j);
		return data[index];
	}
	~Array()
	{
		delete[] data;
		data = nullptr;
	}
	Array(const Array& ref)
	{
		data = new int[ref.size];
		for (int i = 0; i < ref.size; i++)
		{
			data[i] = ref.data[i];
		}
		size = ref.size;
	}
	void printMatrix()
	{
		for (int i = 0; i < size; i++)
		{
			cout << data[i] << endl;
		}
	}
	void transpose()
	{
		istream in;
		in.open("matrix.txt");
		in >> col;
		this->col = col;
		int count = 0;
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (in>>!=0)
				{
					count++;
				}
			}
		}
		data = new T[count];
		column = col;
		int coun = 0;
		for (int j = 0; j < col; i++)
		{
			for (int i = 0; i < col; j++)
			{
				if (in>>!=0)
				{
					in >> data[coun];
				}
			}
		}

	}
	void printSubMatrix(int r1,int r2,int c1,int c2)
	{
		istream in;
		in.open("matrix.txt");
		in >> col;
		this->col = col;
		int count = 0;
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < col; j++)
			{
				if (in>>!=0)
				{
					count++;
				}
			}
		}
		data = new T[count];
		column = col;
		int coun = 0;
		for (int j = r1; j <= r2; i++)
		{
			for (int i = c1; i <= c2; j++)
			{
				if (in>>!=0)
				{
					in >> data[coun];
				}
			}
		}
	}
};


int main()
{

	Array<int> a1;
	a1.setElement(2,3,5);
	a1.transpose();
	a1.printMatrix();
	a1.transpose();
	a1.printMatrix();
	return 0;
}
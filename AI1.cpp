#include <iostream>
using namespace std;

class search
{
public:
	int ILS(int A[5], int key, int N=5);
	int RLS(int A[5], int key, int N=5);

};

int search::ILS(int A[], int key, int N)
{
	for(int i=0;i<=N;i++)
	{
		if(A[i]==key)
			return i;
	}
	return -1;
}

int search::RLS(int A[], int key, int N)
{
	if(N>0)
	{
		if (A[N]==key)
			return N;
		else
			return(ILS(A,N-1,key));
	}
	return -1;
}

int main()
{
	search s;
	int A[]={1,2,3,4,5};
	int r=s.ILS(A,6,5);
	int w=s.RLS(A,3,5);
	if(r==-1)
		cout<<"Search Failed\n";
	else
		cout<<"Position : "<<r+1<<endl;

	if(w==-1)
		cout<<"Search Failed\n";
	else
		cout<<"Position : "<<w+1<<endl;
	

	return 0;
}

#include<iostream>
using namespace std;

    int fib(int input)   // the point at which you want the fiboncci to exist 
    {
    	// base case , that is the point where the recurssion stops, And is really important
    	if(input==0  || input==1)
    	{
    		return 1;
		}
    	
    	int Final_answer;   // for which we have used the same function again and again
    Final_answer= fib(input-1)+fib(input-2);
    return Final_answer;
    
	}

int main()
{
	int input;
	cout<<"Enter the number you want to find the fiboncci series to: ";
	cin>>input;
	
	cout<<fib(input);
	
	return 0;
	
}
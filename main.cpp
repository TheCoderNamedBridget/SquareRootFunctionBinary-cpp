/******************************************************************************

Bridget Naylo
Lab 2 
*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int findSQRT( int num )
{
    bool squareFound= false;
    int firstSquare = 0;
    int lastSquare = num / 2;
    int middleSquare = (firstSquare + lastSquare) / 2;
    int middleSquarePlusOne = middleSquare + 1;
    
    while ( !squareFound )
    {
        if ( num == middleSquare * middleSquare )
        {
            return middleSquare;
        }
        else if ( num > middleSquare * middleSquare && num <= middleSquarePlusOne * middleSquarePlusOne )
        {
            return middleSquarePlusOne;
        }
        else if ( num > middleSquare * middleSquare )
        {
            firstSquare = middleSquare;
            //int lastSquare = lastSquare;
            
            middleSquare += (lastSquare - firstSquare);
            middleSquarePlusOne = middleSquare + 1;
        }
        else if ( num < middleSquare * middleSquare )
        {
            //int firstSquare = firstSquare;
            lastSquare = middleSquare;
            
            middleSquare = (firstSquare + lastSquare) / 2;
            middleSquarePlusOne = middleSquare + 1;
        }
    }
    
    return 0;
    
}

int main()
{
    cout<<"Enter an integer that you want the square of: "<<endl;
    int N;
    cin>>N;
    
    cout<<findSQRT( N );
    
    

    return 0;
}

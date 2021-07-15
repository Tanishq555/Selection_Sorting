#include <iostream>
using namespace std;
    
 

int main(){
int n;
cin>>n;
int array[n];

for (int i = 0; i <n; i++)
{
   cin>>array[i];
}

int Temp;
int min;
for (int i = 0; i <n-1; i++)
{   min=i;
    for (int j =i+1; j <n; j++)
    {
        if (array[min]>array[j])
        {
            min=j;
        }
        
    }
    if (min!=i)
    {
        swap(array[min],array[i]);
    }
    
    
}

for (int i = 0; i <n; i++)
{
  cout<<array[i]<<" ";
}




}
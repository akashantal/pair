
// Finding a pair which is equal to a sum using Array
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int n,sum,i,j,count,w=0;
cin>>n;
cin>>sum;
int arr[n];
for(i=0;i<n;i++)
        {
                cin>>arr[i];
        }
for(j=0;j<n;j++)
        {
                for(count=j+1;count<n;count++)
                        {
                                if(arr[j]+arr[count]==sum)
                                        {cout<<"pair found ("<<arr[j]<<" ,"<<arr[count]<<" )\n";
                                         w++;
                                        }


                        }
        }
if(w==0)
cout<<"Pair Not Found";
return 0;

}



//we are creating a new branch here
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

//using sorting
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
int n,i,j,sum,w=0;
cout<<"Enter the size of array:";
cin>>n;
cout<<"\nEnter the sum to be find:";
cin>>sum;
cout<<"\n Enter Array:\n";
int arr[n];
for(i=0;i<n;i++)
        {
                cin>>arr[i];
        }
sort(arr,arr+n);
cout<<"Sorted array is: ";
for(i=0;i<n;i++)
        {
                cout<<arr[i]<<" ";
        }

for(i=0;i<n && arr[i]<sum;i++)
        {
                for(j=i+i;j<n&&arr[j]<sum;j++)
                        {
                                if(arr[i]+arr[j]==sum)
                                        {
                                                cout<<"\nPair found: ("<<arr[i]<<" ,"<<arr[j]<<" ) \n";
                                                w++;
                                        }
                        }

        }
if(w==0)
cout<<"Pair Not Found";
return 0;
}

// Using unordered Map

#include<iostream>
#include<unordered_map>
using namespace std;

void find_pair(int arr[],int sum,int n)
{
        unordered_map<int,int>map; //to create an empty map
        for(int j=0;j<n;j++)
        {
                if(map.find(sum-arr[j])!=map.end())
                {
                        cout<<"\nPair Found ("<<arr[map[sum-arr[j]]]<<", "<<arr[j]<<") ";
                        return;
                }
                map[arr[j]]=j;
        }
cout<<"\nPair Not Found";

}

int main()
{
int i,n,sum;
cout<<"Enter size of array: ";
cin>>n;
int arr[n];
cout<<"\nEnter the sum: ";
cin>>sum;
cout<<"\nEnter array: ";
for(i=0;i<n;i++)
        cin>>arr[i];
find_pair(arr,sum,n);
return 0;
}


#include<iostream>
using namespace std;
int main()
{
        int large, arr[100], size, i;
        cout<<"Enter Size of Array :: ";
        cin>>size;

        cout<<"\n******Enter array elements******* \n";

        for(i=0; i<size; i++)
        {
            cout<<"\nEnter ["<<i+1<<"]"<<" Element :: ";
                cin>>arr[i];
        }

        cout<<"\nSearching for largest number ...\n\n";
        large=arr[0];
        for(i=0; i<size; i++)
        {
                if(large<arr[i])
                {
                        large=arr[i];
                }
        }
        cout<<"Largest Number in Array = "<<large<<"\n";

        return 0;
}

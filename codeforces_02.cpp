#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int max_position;
    int min_position;
    for (int i = 0; i < t; i++)
    {
        int temp ;
        cin>>temp;
        int arr[temp]={};
        for (int i = 0; i < temp; i++)
        {
            cin>>arr[i];
        }
        int max=arr[0];
        int min=arr[0];
        for (int i = 0; i < temp; i++)
            {
            if (max<=arr[i])
            {
                max=arr[i];
                max_position=i;
            }
            }
        for (int i = 0; i < temp; i++)
            {
                if (min>=arr[i])
            {
                min=arr[i];
                min_position=i;
            }
            }
        cout<<min_position+1<<' '<<max_position+1<<endl;
    }
    
    return 0;
}
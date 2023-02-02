#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int TEST;cin>>TEST;
    for (int i = 0; i < TEST; i++)
    {
        int no;
        cin>>no;
        int b[no];
        int array[no];
        int count=0;


        for (int j = 0; j < no; j++)
        {
            cin>>array[j];
            if (array[j]%2==0)
            {
                count++;
            }
        }




        if (count==0)
        {
            cout<<0<<endl;
        }






        else if (count<no)
        {
            cout<<count<<endl;
        }





        else if (count==no)
        {
            for (int j = 0; j < no; j++)
            {
                int counte=0;
                while(array[j]%2==0){
                    array[j]=array[j]/2;
                    counte++;
                    if (array[j]%2!=0)
                    {
                        b[j]=counte;
                    }
                    
                }
            }
            int min=*min_element(b,b+no);
            cout<<no-1+min<<endl;
            
        }

        
        
        

        
    }
    
    return 0;
}
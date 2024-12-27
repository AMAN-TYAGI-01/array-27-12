#include <iostream>
using namespace std;
int main() {
    // sum question=1
    int arr[]={12,32,243,2,4};
    int sum=0;
    for(int i=0;i<=5;++i){
        sum=sum+arr[i];
    }
    cout<<sum;

// max question=2
    
    int arr[]={12,34,32,43,54,324};
    int max=arr[0];
    for(int i=0;i<=6;++i){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
    
    
    // min question=3
    int arr[]={32,2,3,4,11,32};
    int min=arr[0];
    for(int i=0;i<=6;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        
    }cout<<min;
    
    
    //  duplicate value question=4
    int arr[]={12,32,44,12,53,44,64,32,34,53,1,1};
    for(int i=0;i<=12;++i){
        bool duplicate=false;
        for(int j=i+1;j<=12;j++){
            if(arr[i]==arr[j]&&arr[i]!=-1){
                arr[j]!=-1;
                duplicate=true;
          }
           
        }
        if(duplicate){
                cout<<arr[i]<<endl;
            } 
        
        }
        
        // unique value  question=5
        int arr[]={11,11,32,43,31,32};
        for(int i=0;i<=5;++i){
            bool dup=false;
            for(int j=i+1;j<=5;j++){
                if(arr[i]==arr[j]&&arr[i]!=-1){
                    arr[j]=-1;
                    dup=true;
                }
            }
            if(!dup&&arr[i]!=-1){
                cout<<arr[i]<<endl;
            } }
            
            // mising number  question=6
        int arr[]={12,14,15,20};
        for(int i=0;i<4;i++){
            if(arr[i+1]-arr[i]>1){
                cout<<arr[i]+1<<endl;
            }
        }
        
        // multiple missing number  question=7
        
        int arr[]={12,20,21,22,30};
        for(int i=0;i<5;++i){
            if(arr[i+1]-arr[i]>1){
                for(int j=arr[i]+1;j<arr[i+1];++j){
                    cout<<j<<endl;
                }
            }
        }
        
        // target  question=8
        int arr[]={12,32,12,43,22,34};
        int target=22;
        for(int i=0;i<6;i++){
            if(arr[i]==target){
                cout<<"yes";
                return 0;
            }
        }
        cout<<"no";
    
    // remove question=9
    
    int arr[]={12,32,132,32,43,23};
    int remove;
    cout<<"enter number";
    cin>>remove;
    for(int i=0;i<6;i++){
        if(arr[i]!=remove){
            cout<<arr[i]<<endl;
        }
    }
    
    // pallindrom question=10
    
    int arr[]={12,32,13,32,12};
    for(int i=0;i<5/2;i++){
        if(arr[i]!=arr[5-i-1]){
            cout<<"not a pallindrom";
            return 0;
        }
    }
    cout<<"palindrom";
    
}
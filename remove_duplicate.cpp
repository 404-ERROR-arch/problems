#include<iostream>
using namespace std;


int is_found(int* a,int value,int temp){

    for(int i=0;i<temp;i++){

        if((a[i])==value)
            return 0;

    }
    return 1;
}

int main(){
    
    int arr[10];
    int size =0;
    int temp=1;
    int value;

    for(int i=0 ; i<10;i++){
        cin>>value;
            

        while(temp){
            
            if(i==0){
                arr[i] = value;
                size++;
            }else{
                if(is_found(arr,value,size) ){
                    arr[i] = value;
                    size++;
                }else{
                    cout<<"duplicate value founded\n";
                    i--;
                }
            }
            
            temp--;

        }
        temp =1;


    }

    for(auto a:arr){
        cout<<a<<" ";
    }


}
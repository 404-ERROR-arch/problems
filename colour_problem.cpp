#include<iostream>
#include<time.h>
#include<vector>
#include<array>
#include<map>
using namespace std;

int random(){
    srand((unsigned)(time(0)));

    int random_number = rand()%6;

    return random_number;


    
}

int check_if_exist(int random_number,vector<int> num_list){
    for(auto a: num_list){
        if(a == random_number){
            return 1;
            
        }
               }
            return 0;

}
int main(){

    //initializing the variable

    vector<int> num_list;
    int random_number = random();
    int i =5;
    while(i){
    while(check_if_exist(random_number,num_list)){
        random_number = random();
        
    }

    num_list.push_back(random_number);
    i--;

    }

    


    
  
        array<string,6> color={"red","blue","green","yellow","black","white"};

        array<string,6> name ={"udit","mohit","nitin","anne","nikita","prateek"};

        map<string,string> result;
        for(int k=0;k<6;k++)
            result[name[k]] = color[num_list[k]];


        for(auto b:result){
            cout<<b.first<<" "<<b.second<<endl;

        }



        

        
}







    



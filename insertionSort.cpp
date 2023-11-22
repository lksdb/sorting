#include<iostream>
#include<vector>
#include<chrono>
#include<fstream>

using namespace std;

void insert(vector <int> &data, int index){
    
}

void insertSort(vector <int> &data){
    for(int i=0; i<data.size()-1; i++){
        if(data[i]>data[i+1]){
            insert(data, i+1);
            
        }
    }
}

int main(){


}

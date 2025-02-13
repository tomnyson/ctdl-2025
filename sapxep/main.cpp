#include <iostream>
using namespace std;

int tuyentinh(int a[10],int x){
    for (int i=0;i<sizeof(a);i++){
        if (x == a[i]){
            return 1;
        }   
     }
        return 0;
}

int nhiphan(int a[10],int x){
    for(int i = 0; i < sizeof(a); i++){
        if(x == a[i]){
            return 1;
        }
    }
    return 0;
}



int main() {
    int a[10] ={0,1,2,3,4,5,6};   
    cout << "Duyet thuan :";  
    int socantim;
    cout<<"nhap so can tim";
    cin>>socantim;
    if (tuyentinh(a,socantim)==1){
        cout<<"so can tim co trong mang";
    }
    else{
        cout<<"so can tim khong co trong mang";
    }  
    return 0;
}
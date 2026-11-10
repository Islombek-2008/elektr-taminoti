#include<iostream>
using namespace std;
#include<cmath>

int main(){
    
    int jihozSoni, quvvat, vaqti, oykun = 30;
    double jamiQuvvat=0, sarfi, tolov;
    cout << "Jihozlar sonini kiriting ";
    cin >> jihozSoni;  
    
    for(int i = 1; i <= jihozSoni; i++){
        cout << "Texnikaning quvvatini kiriting: ";
        cin >> quvvat;
        cout << "Texnikaning ishlash vaqtini kiriting: ";
        cin >> vaqti;
        sarfi = quvvat*vaqti/1000.0*oykun;
        
        jamiQuvvat += sarfi;
    }
    
    if(jamiQuvvat <= 200){
        tolov = jamiQuvvat * 650;
    }else if(jamiQuvvat > 200 && jamiQuvvat <= 300){
        tolov = jamiQuvvat*900;
    }else if(jamiQuvvat > 300 && jamiQuvvat <= 500){
        tolov = jamiQuvvat*1100;
    }else{
        tolov = jamiQuvvat * 1600;
    }
    cout << "summan" << tolov << endl;
    
}
    
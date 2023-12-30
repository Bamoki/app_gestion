#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
    string user;
    int options;
    string Namefile;
    string x;
    int i;
    cout<<"1 = crear archivo\n";
    cout<<"2 = leer archivo\n";
    
    cin>>options;

    cout<<"inserte nombre de archivo\n";
    cin>>Namefile;

    string uwu = Namefile + ".txt";
    
    
    if(options == 1){
        ofstream x(uwu);
        
    }

}
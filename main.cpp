#include <iostream>
#include <string>
using namespace std;

class DavidsClass{
public:
    DavidsClass(string z){
        setName(z);

    }
    void setName(string x){
        name = x;
    }
    string getName(){
    return name;
    }
private:
    string name;

};



int main(){
    DavidsClass davidsObject("Mcdonald David");
    cout <<davidsObject.getName();
return 0;
}

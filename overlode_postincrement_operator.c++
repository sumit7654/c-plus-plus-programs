#include <iostream>
using namespace std;
class counter{
    private:
    int count;
    public:
    counter(){
        count=0;
    }
    int displaydata(){
        cout<< count ;
    }
    counter operator ++(){
        counter temp;
        temp.count=++count;
        return temp;
        ++count;
    }
    // void operator ++(int){
    //     ++count;
    // }
    counter operator ++(int){
        counter temp;
        temp.count=++count;
        return temp;
        ++count;
    }
};
int main(){
    counter c1,c2,c3,c4;
    cout<<"Value of c1 count is "<<endl;
    c1.displaydata();
    cout<<endl<<"Value of c2 count is "<<endl;
    c2.displaydata();
    ++c1;
    ++c2;
    ++c2;
    cout<<endl<<"value of for ++c1 count is ";
    c1.displaydata();
    cout<<endl<<"Value of ++ c2 count is ";
    c2.displaydata();
    c1++;
    c2++;
    c2++;
    c3=++c2;
    c4=c1++;
    cout<<endl<<"value of for c1++ count is ";
    c1.displaydata();
    cout<<endl<<"Value of c2++  count is ";
    c2.displaydata();
    cout<<endl<<"Value of ++c3  count is ";
    c3.displaydata();
    cout<<endl<<"Value of c4++  count is ";
    c4.displaydata();
}
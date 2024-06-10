#include <iostream>

class vector{
    private:
        int size;
        int* array;
    public:
        void resize(int newsize){
            size=newsize;
            int *newarray=new int[size];
            for(int i=0;i<size;i++){
                cin>>newarray[i];
                }
            array= newarray;
            delete[] newarray;
        }
        void showarray(){
            cout<<size;
            for(int i=0;i<size;i++)
            cout<<array[i];}
        void swap(int value,int iindex){
            if (iindex>=size)
                cout<<"invalid index";
            else
            array[iindex]=value;
        }
        void popback(){
             size=size-1;
            int *newarray=new int[size];
            for(int i=0;i<size;i++){
            newarray[i]=array[i];
            delete[] newarray;
            array= newarray;
            }
        }
        
};

using namespace std;
int main() {
    
}
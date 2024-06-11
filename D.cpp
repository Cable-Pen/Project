#include <iostream>

class vector{
    private:
        int size;
        int* array;
    public:
        vector(){
            size=0;
            array= new int[size];
        }
        void resize(int newsize){
            size=newsize;
            int *newarray=new int[size];
            for(int i=0;i<size;i++){
                cin>>newarray[i];
                }
             delete[] array;
            array= newarray;
         
        }
        void showarray(){
            for(int i=0;i<size;i++)
                cout<<array[i];
            cout<<"size= "<<size<<endl;
            }
        void swap(int value,int iindex){
            if (iindex>=size)
                cout<<"invalid index";
            else
            array[iindex]=value;
        }
        void popback(){
             size=size-1;
            int *newarray=new int[size];
            for(int i=0;i<size;i++)
            {
            newarray[i]=array[i];
            }
            delete[] array;
            array= newarray;
        }
        void pushback(){
             size=size+1;
            int *newarray=new int[size];
            for(int i=0;i<size-1;i++)
            {
            newarray[i]=array[i];
            }
            cin>>newarray[size-1];
                delete[] array;
            array= newarray;

            
        }
};

using namespace std;
int main() {
    
}                                                                                                       

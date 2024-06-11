#include <iostream>

template<typename T>
class vector{
    private:
        int size;
        T* array;
    public:
        vector(){
            size=0;
            array= new T[size];
        }
        void resize(int newsize){
            size=newsize;
            T *newarray=new T[size];
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
        void swap(T value,int iindex){
            if (iindex>=size)
                cout<<"invalid index";
            else
            array[iindex]=value;
        }
        void getsize(){
            cout<<size;
        }
        T getindex(int ind){
            if(ind<0||ind>=size)
                cout<<"invalid index";
            else
                return array[ind];
        }
        void popback(){
             size=size-1;
            T *newarray=new T[size];
            for(int i=0;i<size;i++)
            {
            newarray[i]=array[i];
            }
            delete[] array;
            array= newarray;
        }
        void pushback(){
             size=size+1;
            T *newarray=new T[size];
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

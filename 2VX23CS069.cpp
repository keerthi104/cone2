#include <iostream>
using namespace std;

class Sorting{
private:
    int*arr;
    int size;

public:
    Sorting(int n){
    size=n;
    arr=new int[size];
    }
    void inputElements(){
    cout<<"Enter"<<size<<"elements:"<<endl;
    for (int i=0;i<size; ++i)
        {
            cin>>arr[i];
        }
    }
    void bubbleSortAsc(){
   for(int i=0;i<size-1; ++i){
    for (int j=0; j<size-i-1; ++j){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    }

    void bubbleSortDesc(){
    for(int i=0;i<size-1;++i){
        for(int j=0;j<size-i-1;++j){
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void display() {
cout<<"Sorted Elements:"<<endl;
for(int i=0; i<size; ++i){
    cout<<arr[i]<<"";
}
cout<<endl;
}
~Sorting(){
  delete[] arr;
  }
};
int main()
{

    int size;

    cout<<"Enter the number of elements:";
    cin>>size;

    Sorting sortingObject(size);

    sortingObject.inputElements();

    sortingObject.bubbleSortAsc();
    cout<<"Ascending Order:";
    sortingObject.display();

    sortingObject.bubbleSortDesc();
    cout<<"Descending Order:";
    sortingObject.display();

    return 0;
}

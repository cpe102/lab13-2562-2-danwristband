#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int i, key, j;  
    for (i = 1; i < N; i++) 
    {  
		for(int j=0;j<N;j++){
			if(i==j)
			cout<<"["<<d[j]<<"]"<<" ";
		else
			cout<<d[j]<<" ";
		}
		cout<<"=>";
        key = d[i];  
        j = i - 1;  
		T pos=i;
        while (j >= 0 && d[j] < key) 
        {  
            d[j + 1] = d[j];  
            j = j - 1;
			pos=j+1;  
        }  
        d[j + 1] = key;  

	for(int j=0;j<N;j++){
		if(j==pos)
			cout<<"["<<d[j]<<"]"<<" ";
		else
			cout<<d[j]<<" ";
		}
	cout<<endl;
    }  
//Write your code here.

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

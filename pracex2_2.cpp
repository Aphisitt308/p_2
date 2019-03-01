using namespace std;#include<iostream>
#include<fstream>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	
	//Write your code here
    
	ifstream source("C\\Users\\lab302-32\\Dowloads\\score1.txt");
	string line;
	while(getline(source,line)){
		cout << line << "\n";
	}
	int b;
	int a[]={b };
	sort(a,20);
	ofstream dest("rank.txt");
	
	dest.close();
	
	return 0;
}


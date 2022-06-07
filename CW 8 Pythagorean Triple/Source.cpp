#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

bool PythagoreanTriple(const int a, const int b, const int c){
	vector<int> temp = { a,b,c };
	sort(temp.begin(), temp.end());
	return (pow(temp[2],2)== pow(temp[1], 2)+ pow(temp[0], 2));
}
int main() {
	int a = 5;
	int b = 4;
	int c = 2;
	cout << PythagoreanTriple(a, b, c) << endl;
	return 0;
}
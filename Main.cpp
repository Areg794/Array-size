#include<iostream>
template<typename T,int n>
int getarrsize(T(&)[n]) {
return n;
}
int main() {
	int arr[7]{ 374,501,5,5,5,5,5 };
	std::cout<<getarrsize(arr)<<std::endl;
	return 0;
}
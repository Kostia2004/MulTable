#include <iostream>
#include <vector>

int numlen(int num){
	int result = 0;
	if(num==0)
		return 1;
	while(num!=0){
		num/=10;
		result++;
	}
	return result;
}

int main(){
	std::vector<std::vector<int>> matrix;
	int num = 0;
	std::cout << "Set len of string: ";
	std::cin >> num;
	std::cout << std::endl;
	for(int i = 1; i<num; i++){
		std::vector<int> buf;
		for(int j = 1; j<num; j++)
			buf.push_back(i*j);
		matrix.push_back(buf);
	}
	
	for(int i = 0; i<matrix.size(); i++){
		for(int j = 0; j<matrix.size(); j++)
			std::cout << matrix[i][j] << std::string(numlen((num-1)*(num-1))-numlen(matrix[i][j])+1, ' ');
		std::cout << std::endl;
	}
}
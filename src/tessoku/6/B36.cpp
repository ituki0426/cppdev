// N個の豆電球があり、i個目の豆電球農状態はSiです。二つの異なる電球のON/OFFを同時に切り替える。
// 上記の操作を何回か行うことで、ちょうどK個の電球をONにすることはできるか？
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int N, K;
    std::string S;
    cin >> N >> K;
    cin >> S;
    int on = std::count(S.cbegin(), S.cend(), '1');
	if((K - on)%2==0){
		cout << "Yes";
	}else{
		cout << "No";
	}
	return 0;
}
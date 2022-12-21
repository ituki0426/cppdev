#include <iostream>
using namespace std;
int main(void){
	int D;
	int N;
	int L;
	int R;
	int S[100008];
	int Answer[100008];
	cin >> D;
	cin >> N;
	for(int i = 1; i <= N; i++){
		cin >> L >> R;
		S[L] += 1;
		S[R + 1] -= 1;
	}
	Answer[0] = 0;
	for(int d = 1; d <= D; d++) Answer[d] = Answer[d - 1] + S[d];
	for(int d = 1; d <= D; d++) cout << Answer[d] << endl;
}
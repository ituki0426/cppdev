#include<iostream>
using namespace std;

int main(){
	int N;
	int Q;
	int A[100009];
	int L[100009];
	int R[100009];
	int S[100009]; //累積和
	cin >> N >> Q;
	for(int i = 1; i <= N; i++) cin >> A[i];
	for(int i = 1; i <= Q; i++) cin >> L[i] >> L[i];
	S[0] = 0;
	for(int i = 1; i <= N; i++) S[i] = S[i - 1] + A[i];
	for(int i = 1; i <= Q; i++){
		cout << S[R[i]] - S[L[i] - 1] << endl;
	}
} 
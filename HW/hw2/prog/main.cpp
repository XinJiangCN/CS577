#include <iostream>
using namespace std;

int insert_sort(int a[], int n){
  int count = 0;
  for (int i = 2; i <= n; i++){
    int j = i;
    while (j > 1 && a[j] < a[j-1]){
      int temp = a[j];
      a[j] = a[j -1 ];
      a[j - 1] = temp;
      count++;
      j = j -1;
    }

  }

  return count;
}
int merge_sort(int a[], int n){
    int count = 0;
        

    return merge_sort(int []);
}
int main() {
	
	int T;
	cin>>T;
	for (int t = 0; t < T; t++){
		int N;
		
        cin>>N;
        int array1[N];
		for (int n = 0; n < N; n++){
			cin>>array1[n];
		}
		int count;
    count = insert_sort(array1, N);
		cout<<count;
	}

	return 0;
}



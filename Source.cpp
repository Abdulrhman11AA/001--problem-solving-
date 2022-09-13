#include<iostream>
using namespace std;
#include<string.h>
int main() {

	int num = 0, xxx = 0;
	cin >> num;
	string words[100], ww;
	for (int i = 1; i <= num; i++) {
		cin >> words[i];
	}
	for (int i = 1; i <= num; i++) {
		if (words[i].size() > 10)
		{
			ww = words[i];
			int len = ww.size();
			char arr[100];
			for (int x = 0; x < len; x++) {
				arr[x] = '\0';
				arr[x] = ww[x];
				xxx++;
			}
			cout << arr[0] << len - 2 << arr[xxx - 1] << endl;
			ww = '\0'; len = 0;
			xxx = 0;
		}
		else
			cout << endl << words[i] << endl;
	} return 0;
}
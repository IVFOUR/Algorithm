#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int n;
vector <string> all_info;

int getSum(string a) {
	int len = a.length();
	int sum = 0;

	for (int i = 0; i < len; i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			sum += a[i] - '0';
		}
	}
	return sum;
}

bool compare(string a, string b) {
	
	if (a.length() != b.length()) {
		return a.length() < b.length();
	}
	else {
		int aSum = getSum(a);
		int bSum = getSum(b);
		if (aSum != bSum) {
			return aSum < bSum;
		}
		else {
			return a < b;
		}
	}


}

int main(void)
{
	int n;

	cin >> n;

	string temp;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		all_info.push_back(temp);
	}

	sort(all_info.begin(), all_info.end(), compare);

	for (int i = 0; i < n; i++) {
		cout << all_info[i]<<endl;
	}
}
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int num;
string words[20000];

bool compare(pair<string, int> a, pair<string, int> b) 
{
	if (a.second == b.second ) {
		return a.first < b.first;
	}
	else 
	{
		return a.second < b.second;
	}
}

int main(void)
{
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> words[i];
	}
	
	vector<pair<string, int>> dic;
	for (int i = 0; i < num; i++) {
		dic.push_back(pair<string, int>(words[i], words[i].size()));
	}

	sort(dic.begin(), dic.end(), compare);
	for (int i = 0; i < dic.size(); i++) {
		if (i>0&&dic[i].first == dic[i - 1].first) continue;
		cout << dic[i].first<<endl;
	}
	
}
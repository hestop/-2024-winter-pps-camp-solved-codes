#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	map<string, int> m;
	string str;

	for (int i = 0; i < N; i++)
	{
		cin >> str;
		m[str]++;
	}

	vector<pair<string, int>> map_vec(m.begin(), m.end());
	sort(map_vec.begin(), map_vec.end());

	int max = 0;
	string result;

	for (auto x : map_vec)
	{
		if (x.second > max)
		{
			max = x.second;
			result = x.first;
		}
	}
	cout << result;
}
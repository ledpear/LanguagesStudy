#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

//define

using ull = unsigned long long ;
using location =  pair<int, int> ;
using matrix = vector<vector<int>>;

//custum function

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	////////////////////////////////////
	//Declaration
	stack<int> stack_in;
	stack<int> stack_out;

	int commSize(0);
	//Solution
	cin >> commSize;

	for (int i = 0; i < commSize; ++i)
	{
		string comm("");
		cin >> comm;

		if (comm == "push")
		{
			int input(0);
			cin >> input;

			stack_in.push(input);
		}
		else if (comm == "pop")
		{
			if (stack_out.empty())
			{
				if (!stack_in.empty())
				{
					while (!stack_in.empty())
					{
						stack_out.push(stack_in.top());
						stack_in.pop();
					}
				}
				else
				{
					stack_out[0];
					cout << "-1\n";
				}
			}
		}
	}

	//Output


	////////////////////////////////////
	system("pause");
	return 0;
}
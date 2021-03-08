#include <vector>
#include <iostream>
#include <limits>
#include <algorithm>
#include <cmath>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <memory>

using namespace std;

//define
#define DEF_MIN -2147483648
#define DEF_MAX 2147483647

typedef unsigned long long ull;
typedef pair<ull, ull> p;
typedef vector<vector<int>> vmap;

//custum function
class SmartPointTest
{
public:
protected:
private:
	double dTest[200000000];
};

void TestSharedCount(shared_ptr<SmartPointTest> spt)
{
	cout << spt.use_count() << '\n';
	shared_ptr<SmartPointTest> temp(spt);
	cout << spt.use_count() << '\n';
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	////////////////////////////////////
	int nSize = 200000000;
	//SmartPointTest *spt = new SmartPointTest;
	//unique_ptr<SmartPointTest> spt = make_unique<SmartPointTest>();
	//shared_ptr<double> dTest(new double[nSize]);
	auto dTest =  make_shared<double>();
	shared_ptr<SmartPointTest> spt = make_shared<SmartPointTest>();
	cout << spt.use_count() << '\n';
	TestSharedCount(spt);
	cout << spt.use_count() << '\n';
	//delete(spt);

	////////////////////////////////////
	system("pause");
	return 0;
}
#include<iostream>
//#include"SOSO.h"
#include<vector>
#include<string> // to_string() a function to convert to a num to a string !!
#include<climits>
#include<cstdio>
//#include<iomanip>
#include<cmath>
#include<cctype>
////#include<array>
//#include <windows.h>
////#include<fstream>
#include<algorithm>  //sort .. lower and upper bounds
////#include<utility>
// //#include<memory>
//////#include<numeric>
#include <set>                                   
#include <map>
//#include <chrono>
//#include <thread>
//#include <sstream>
#include <deque>
#include <climits>
//#include<queue>
#include<stack>
#include <queue>
//#include<iomanip>
using namespace std;
#define PB push_back
#define Soso ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Skip continue


//#define sc1(a) scanf_s("%lld",&a)
//#define sc2(a,b) scanf_s("%lld %lld",&a,&b)
//#define pf1(a) printf("%lld\n", a)
//#define pf2(a,b) printf("%lld %lld\n",a,b)

typedef long long ll;
typedef vector<int> vi;

bool compare(char a, char b) {
	return a > b;
}

//void nLength(ll n, int& cnt) { //calculate the length of a number
//
//	do {
//		++cnt;
//		n /= 10;
//	} while (n);
//}
void nLength(ll n, int& cnt) { //updated better version :)
	cnt = 1 + floor(log10(n));
}


//bool isPalindrome(int x) {
//	if (x < 0) return false;
//	int xR = 0;
//	int xx = x;
//	while (x) {
//		xR += x % 10;
//		xR *= 10;
//		x /= 10;
//	}
//	xR = xR / 10;
//	if (xx == xR)
//		return true;
//	else
//		return false;
//}


//bool scmp(const vector<int>& v1,
//	const vector<int>& v2) {
//	return v1[1] > v2[1];
//}

//n * (n + 1) / 2

bool isSorted(vector<int>& arr) {
	for (size_t i = 1; i < arr.size(); i++)
	{
		if (arr[i - 1] > arr[i]) return false;
	}
	return true;
}


//bool cmp(pair<int, int>& a,
//	pair<int, int>& b)
//{
//	return a.second > b.second;
//}

bool cmp(const int& a, const int& b) {
	return a > b;
}





//      ( (
//    ( (
//      ) )
//    ........
//    |      |]	  NESCAFÉ
//    \      /    Rashed Maaitah
//     `----'


//      ( (
//    ( (
//      ) )
//    ........
//    |      |]	  NESCAFÉ
//    \      /    Salsabeel Musa
//     `----'
void solve() {

	

}




int main() {


	Soso;
	int t = 1;
	//cin >> t;
	while (t--)
	{
		solve();
	}

	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // to flush the cin


//}
	//printf("This is %d huge", 5);
	//int c = 0;
	//scanf_s("%d", &c);
	//printf("%i",c);


	return 0;
}


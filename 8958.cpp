//#pragma region include
//#include <cassert>
//#include <cctype>
//#include <cerrno>
//#include <cfloat>
//#include <ciso646>
//#include <climits>
//#include <clocale>
//#include <cmath>
//#include <csetjmp>
//#include <csignal>
//#include <cstdarg>
//#include <cstddef>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <ctime>
//#include <algorithm>
//#include <bitset>
//#include <complex>
//#include <deque>
//#include <exception>
//#include <fstream>
//#include <functional>
//#include <iomanip>
//#include <ios>
//#include <iosfwd>
//#include <iostream>
//#include <istream>
//#include <iterator>
//#include <limits>
//#include <list>
//#include <locale>
//#include <map>
//#include <memory>
//#include <new>
//#include <numeric>
//#include <ostream>
//#include <queue>
//#include <set>
//#include <sstream>
//#include <stack>
//#include <stdexcept>
//#include <streambuf>
//#include <string>
//#include <typeinfo>
//#include <utility>
//#include <valarray>
//#include <vector>
//#pragma endregion
//
//using namespace std;
//
//#pragma warning(disable : 4996)
//
//int32_t main(const int argc, const char** argv, const char** env) {
//	std::ios::sync_with_stdio(false);
//	std::cin.tie(nullptr);
//	std::cout.tie(nullptr);
//
//	int n;
//	std::cin >> n;
//	for (size_t i = 0; i < n; ++i) {
//		int t = 0, c = 1;
//		std::string ox;
//		std::cin >> ox;
//		for (int j = 0; j < ox.size( ); ++j) {
//			if (ox[j] == 'O') {
//				t += c; ++c;
//			} else if(ox[j] == 'X')
//				c = 1;
//		}
//		std::cout << t << std::endl;
//	}
//
//	return EXIT_SUCCESS;
//}

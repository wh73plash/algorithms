//#pragma region include
//#pragma warning(disable : 4996)
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
//inline std::string& ltrim(std::string& s, const char* t = " \t\n\r\f\v") {
//    s.erase(0, s.find_first_not_of(t));
//    return s;
//}
//
//inline std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v") {
//    s.erase(s.find_last_not_of(t) + 1);
//    return s;
//}
//
//inline std::string& trim(std::string& s, const char* t = " \t\n\r\f\v") {
//    return ltrim(rtrim(s, t), t);
//}
//
//int32_t main(const int argc, const char** argv, const char** env) {
//    std::ios::sync_with_stdio(false);
//    std::cin.tie(nullptr);
//    std::cout.tie(nullptr);
//
//    int n;
//    std::cin >> n;
//    do{
//        std::vector<int> arr;
//        std::string x, y;
//        std::cin >> x >> y;
//        for(int i = 0; i < x.size(); ++i){
//            if(y[i] >= x[i]){
//                arr.push_back(y[i] - x[i]);
//            }else if(y[i] < x[i]){
//                arr.push_back((y[i] + 26) - x[i]);
//            }
//        }
//        std::cout << "Distances: ";
//        for(const auto& i : arr){
//            std::cout << i << ' ';
//        }
//        std::cout << '\n';
//    }while(--n);
//    
//    return EXIT_SUCCESS;
//}
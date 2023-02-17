#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s; cin >> s;
	auto ans1 = int{ 0 };
	auto ans2 = int{ 0 };
	const auto& n = s.length();

	for (auto i = decltype(n){ 2 }; i < n; ++i) {
		if ("JOI" == s.substr(i - 2, 3)) {
			++ans1;
		}
		else if ("IOI" == s.substr(i - 2, 3)) {
			++ans2;
		}
	}

	cout << ans1 << '\n' << ans2;

	return 0;
}
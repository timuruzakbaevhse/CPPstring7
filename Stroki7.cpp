﻿// Stroki7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

// C++ program for the above approach

using namespace std;

// Function to replace all the occurrences
// of the substring S1 to S2 in string S
void modifyString(string s, string s1,
	string s2)
{
	// Stores the resultant string
	string ans = "";

	// Traverse the string s
	for (int i = 0; i < s.length(); i++) {

		int k = 0;

		// If the first character of
		// string s1 matches with the
		// current character in string s
		if (s[i] == s1[k]
			&& i + s1.length()
			<= s.length()) {

			int j;

			// If the complete string
			// matches or not
			for (j = i; j < i + s1.length(); j++) {

				if (s[j] != s1[k]) {
					break;
				}
				else {
					k = k + 1;
				}
			}

			// If complete string matches
			// then replace it with the
			// string s2
			if (j == i + s1.length()) {
				ans.append(s2);
				i = j - 1;
			}

			// Otherwise
			else {
				ans.push_back(s[i]);
			}
		}

		// Otherwise
		else {
			ans.push_back(s[i]);
		}
	}

	// Print the resultant string
	cout << ans;
}

// Driver Code
int main()
{
	string S;
	getline(cin, S);
	string S1;
	getline(cin, S1);
	string S2;
	getline(cin, S2);

	modifyString(S, S1, S2);


	return 0;
}

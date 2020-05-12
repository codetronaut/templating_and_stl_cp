/*
Input:

3 3
kim trump 100
trump Alonemusk 50
Alonemusk kim 50

Output:

kim will pay 50 to trump

*/
#include <bits/stdc++.h>
using namespace std;

class person_compare{
public:

	bool operator()(pair<string, int> p1, pair<string, int> p2){
		return p1.second < p2.second;
	}
};

int main() {

	int no_of_transactions, friends;
	cin >> no_of_transactions >> friends;

	string x, y;
	int amount;

	// make a map, person getting how much net profit or loss
	map<string, int> netAmount;

	while (no_of_transactions--) {

		cin >> x >> y >> amount;

		// check if person is not added in the map or not
		if (netAmount.count(x) == 0) {
			netAmount[x] = 0;
		}

		if (netAmount.count(y) == 0) {
			netAmount[y] = 0;
		}

		netAmount[x] -= amount;
		netAmount[y] += amount;

	}

	// iterate over this net amount and insert person in multiset

	multiset< pair<string, int> , person_compare> m;

	for (auto p : netAmount) {
		string person = p.first;
		int amount = p.second;

		if (netAmount[person] != 0) {
			m.insert(make_pair(person, amount));
		}
	}
	
	// Make the settlements
	// start - low of multiset
	// end - high of multiset
	
	int count = 0;
	while(!m.empty()){
		
		auto low = m.begin();
		auto high = prev(m.end());
		
		int debit = low->second;
		string debit_person = low->first;
		
		int credit = high->second;
		string credit_person = high->first;
		
		int settled_amount = min(abs(debit), credit);
		debit += settled_amount;
		credit -= settled_amount;
		
		// print the transaction between the people
		cout << debit_person << " will pay " << settled_amount << " to " << credit_person << endl;
		
		m.erase(low);
		m.erase(high);
		
		if(debit !=0){
			m.insert(make_pair(debit_person, debit));
		}
		
		if(credit != 0){
			m.insert(make_pair(credit_person, credit));
		}
		
		count +=1;
	}





} 

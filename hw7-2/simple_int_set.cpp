#include "simple_int_set.h"


set<int> SetIntersection(const set<int>& set0, const set<int>& set1){
	//합집합
	set<int> s;


	for (set<int>::const_iterator it1 = set0.begin(); it1 != set0.end(); ++it1) {
		s.insert(*it1);

	}
	for (set<int>::const_iterator it2 = set1.begin(); it2 != set1.end(); ++it2) {
		
		if (s.find(*it2) == s.end()) {
			s.insert(*it2);		
		}
			
	}
	return s;


	
}
set<int> SetUnion(const set<int>& set0, const set<int>& set1){

	set<int> s;
	for (set<int>::const_iterator it1 = set0.begin(); it1 != set0.end(); ++it1) {
		for (set<int>::const_iterator it2 = set1.begin(); it2 != set1.end(); ++it2) {
			if (*it1 == *it2)
				s.insert(*it1);
	

		}
	}
	return s;
	
}
set<int> SetDifference(const set<int>& set0, const set<int>& set1){
	set<int> s;
	for (set<int>::const_iterator it1 = set0.begin(); it1 != set0.end(); ++it1) {
		s.insert(*it1);

	}
	for (set<int>::const_iterator it2 = set1.begin(); it2 != set1.end(); ++it2) {
		if (s.find(*it2) != s.end()) {
			s.erase(*it2);
		}


	}

	return s;
}

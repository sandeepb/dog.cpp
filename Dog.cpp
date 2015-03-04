
#include <iostream>
#include "Dog.h"

Dog::Dog(const string &name, unsigned int birthyear)
	: m_name(name), m_birthyear(birthyear),
	m_owner("I'm an orphan"), m_happiness(0)
{ }
	
string Dog::GetOwner() const {
	return m_owner;
}

void Dog::SetOwner(const string &owner) {
	m_owner = owner;
}

unsigned int Dog::GetAge(unsigned int current_year) const {
	return current_year - m_birthyear;
}
		
void Dog::Abuse() {
	m_happiness--;
}

void Dog::Pat() {
	m_happiness++;
}

string Dog::GetHappiness() const {
	if(m_happiness > 1) {
		return "happy";
	}

	else if(m_happiness < 1) {
		return "sad";
	}
	
	else {
		return "ok";
	}
}
		
void Dog::Talk() const {
	cout << "woof" << endl;
}
//Gór Ádám | F7GFYG
#ifndef NAPLO_H
#define NAPLO_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

class Naplo{
	private:
	    struct Data{
	        std::string subject;
	        int grade;
	    };
		struct ListElem{
			int NumberofGrades;
			std::string azon;
			std::vector<Data> grades;
			ListElem* next;
			ListElem(std::string s, std::vector<Data> dat, ListElem* p){
				NumberofGrades = k;
				azon = s;
				grades = dat;
				p = NULL;
				
			}
		};
		ListElem *head;
	
	public:
	Naplo(const std::string& osztnev);
	~Naplo();

	friend std::ostream& operator<<(std::ostream &o, const Naplo& n);
    friend std::ifstream& operator>>(std::ifstream &i, const Naplo& n);



};
#endif

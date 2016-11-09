#include "naplo.h"
#include <vector>
#include <iostream>
#include <fstream>

Naplo::Naplo(const std::string& osztnev){
    head = 0;
    head->azon = osztnev;
}

Naplo::~Naplo(){
    ListElem* p = head;
    ListElem* act = head;
    while (act != NULL){
        p = act;
        act = act->next;
        delete p;
    }
    head = 0;
}

std::ostream& operator<<(std::ostream& o, const Naplo& n){
    if (n.head == 0) {o << "Ures naplo";}
    else{
        Naplo::ListElem *p;
        o << n.head->azon << " naplo tartalma";
        for (p = n.head->next; p->next != 0; p=p->next){
                o << "Tanulo: " << p->azon << std::endl;
                for (int i = 0 ; i < p->NumberofGrades; ++i)
                    o << "\t\t" << p->grades[i].subject << p->grades[i].grade << std::endl;
                }
            }
         return o;
        }
std::ifstream& operator>>(std::ifstream& i, const Naplo& n){
	Naplo::Data gradesHelper;
	Naplo::ListElem *p = n.head;
    while (!i.fail()){
		p->next = new Naplo::ListElem(NumberofGrades,azon, d)
				
		i >> p->azon >> p->NumberofGrades;
        for (int k = 0; k<NumberofGrades, ++k){
            i >> gradesHelper.subject >> gradesHelper.grade;
			p->grades.push_back(gradesHelper);
        }
    }
    return i;
    
}

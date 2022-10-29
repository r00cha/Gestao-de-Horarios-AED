
#ifndef AED_SLOT_H
#define AED_SLOT_H
#include <iostream>
#include "Turma.h"
using namespace std;

class Slot {
public:

    Slot(const Turma &turma, const string &type, const string &weekday, float startHour, float duration);

    const string &getType() const;

    void setType(const string &type);

    const string &getWeekday() const;

    void setWeekday(const string &weekday);

    float getStartHour() const;

    void setStartHour(float startHour);

    float getDuration() const;

    void setDuration(float duration);

    friend ostream& operator<<(ostream& os, const Slot& slot);

    const Turma &getTurma() const;

    void setTurma(const Turma &turma);


private:
    Turma turma; //CADA AULA (SLOT) TEM DE TER UMA TURMA ASSOCIADA, CASO CONTRARIO, NAO PODERIAM HAVER AULAS SIMULTANEAS, POIS SERIAM A MESMA AULA (EX FISICA ÀS 10 E AED ÀS 10 NAO SÃO O MESMO SLOT)
    string type;
    string weekday;
    float startHour;
    float duration;

};


#endif //AED_SLOT_H

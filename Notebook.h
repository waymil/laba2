#ifndef NOTEBOOK_H_INCLUDED
#define NOTEBOOK_H_INCLUDED

#include <iostream>
#include <cstring>

using namespace std;

class Notebook
{
    char* model;
    char* cpu;
    int memory;

public:
    Notebook();
    Notebook(const char* mod, const char* cpu, int mem);
    Notebook(Notebook &one);
    ~Notebook();

    void print();
    void setModel(const char* mod);
    void setMemory(int mem);
    void setCPU(const char* cpu);

    int getMemory();
    char* getModel(char * mod) const;
    char* getCPU(char * cpu) const;

    Notebook& operator=(const Notebook &a);
    bool operator== (const Notebook &a) const;
    bool operator< (const Notebook &a) const;
    bool operator> (const Notebook &a) const;
    bool operator<= (const Notebook &a) const;
    bool operator>= (const Notebook &a) const;
    bool operator!= (const Notebook &a) const;

    friend ostream& operator<< (ostream &out, const Notebook &a);
    friend istream& operator>> (istream &in, Notebook &a);

    void operator++();
    void operator--();
};

#endif // NOTEBOOK_H_INCLUDED

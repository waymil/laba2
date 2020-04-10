#include "Notebook.h"

Notebook::Notebook():Notebook("Asus","Intel",6){}

Notebook::Notebook(const char* mod, const char* cpu, int mem)
{
    Notebook::setModel(mod);
    Notebook::setCPU(cpu);
    Notebook::setMemory(mem);
}

Notebook::Notebook(Notebook &two):Notebook(two.model, two.cpu, two.memory){}

Notebook::~Notebook()
{
    delete [] model;
    delete [] cpu;
}

void Notebook::print()
{
    cout << "Model: " << model;
    cout << "\nMemory: " << memory;
    cout << "\nCPU: " << cpu << "\n\n";
}

void Notebook::setModel(const char* mod)
{
    delete [] this ->model;
    int len = strlen(mod);
    this ->model = new char[len];
    strcpy(this ->model, mod);
}

void Notebook::setCPU(const char* cpu)
{
    delete [] this ->cpu;
    int len = strlen(cpu);
    this->cpu = new char[len];
    strcpy(this ->cpu, cpu);
}

void Notebook::setMemory(int mem)
{
    this->memory = mem;
}

char* Notebook::getModel(char * mod) const
{
    strcpy(mod, this->model);
    return mod;
}

int Notebook::getMemory()
{
    return memory;
}

char* Notebook::getCPU(char * cpu) const
{
    strcpy(cpu, this->cpu);
    return cpu;
}

Notebook&Notebook::operator=(const Notebook &a)
{
    this ->model = NULL;
    this ->cpu = NULL;
    setModel(a.model);
    setCPU(a.cpu);
    this-> memory = a.memory;
    return *this;
}

bool Notebook::operator== (const Notebook &a) const 
{ 
    if (this->memory == a.memory) 
        return true; 
    else return false; 
}

bool Notebook::operator< (const Notebook &a) const
{
    return(memory < a.memory);
}

bool Notebook::operator> (const Notebook &a) const
{
    return(memory > a.memory);
}

bool Notebook::operator<= (const Notebook &a) const
{
   return !(*this > a);
}

bool Notebook::operator>= (const Notebook &a) const
{
    return !(*this < a);
}

bool Notebook::operator!= (const Notebook &a) const
{
    return !(*this == a);
}

ostream& operator<< (ostream &out, const Notebook &a)
{
    out << a.model << ", " << a.memory << ", " << a.cpu << "\n";
    return out;
}

istream& operator>> (istream &in, Notebook &a)
{
    in >> a.model;
    in >> a.cpu;
    in >> a.memory;
    return in;
}

void Notebook::operator++()
{
    this->memory +=2;
}
void Notebook::operator--()
{
    this->memory -=2;
}

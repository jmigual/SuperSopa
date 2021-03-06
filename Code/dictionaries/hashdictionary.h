#ifndef HASHDICTIONARY_H
#define HASHDICTIONARY_H
#include <string>
#include <unordered_set>
#include <unordered_map>

#include "dictionary.h"

class HashDictionary : public Dictionary
{
public:
    HashDictionary();

    void insertElement(const string &);

    bool contains(const string &);

    void reset();

    pair<bool, bool> stepForwards(char c);

    void stepBackwards();

    string popWord();

    bool isEmpty();

private:
    unordered_set<string> m_dict;
    string m_sCurrent;
    unordered_map<string,pair<bool,bool> > m_dynamic;
};

#endif // HASHDICTIONARY_H

#ifndef TREEDICTIONARY_H
#define TREEDICTIONARY_H
#include <unordered_map>
#include <string>
using namespace std;

class TreeDictionaryNode
{
    typedef unordered_map<char, TreeDictionaryNode *>::iterator ucTit;

public:

    ~TreeDictionaryNode();

    void insertElement(const string &element, uint index);

    bool contains(const string &element, uint index);

    TreeDictionaryNode *getNode(char c);

private:

    unordered_map<char, TreeDictionaryNode *> m_nodes;
};

class TreeDictionary
{
public:

    TreeDictionary();

    inline void insertElement(const string &element) {
        if (element.length() == 0) return;
        m_rootNode->insertElement(element, 0);
    }

    inline bool contains(const string &element) {
        if (element.length() == 0) return false;
        m_rootNode->contains(element, 0);
    }

    inline TreeDictionaryNode *getNode(char c) {
        return m_rootNode->getNode(c);
    }

private:

    TreeDictionaryNode *m_rootNode;
};

#endif // TREEDICTIONARY_H
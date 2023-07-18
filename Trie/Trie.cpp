#include <bits/stdc++.h>
using namespace std;

class trienode
{
public:
    char data;
    trienode *child[26];
    bool isterminate;

    trienode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
        isterminate = false;
    }
};

class trie
{
public:
    trienode *root;

    trie()
    {
        root = new trienode('\0');
    }
    void insertUil(trienode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isterminate = true;
            return;
        }
        int index = word[0] - 'A';
        trienode *child1;

        if (root->child[index] != NULL)
        {
            child1 = root->child[index];
        }
        else
        {
            child1 - new trienode(word[0]);
            root->child[index] = child1;
        }
        insertUil(child1, word.substr(1));
    }

    void insertword(string word)
    {
        insertUil(root, word);
    }

    bool searchUtil(trienode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isterminate;
        }

        int index = word[0] - 'A';
        trienode *child2;

        if (root->child[index] != NULL)
        {
            child2 = root->child[index];
        }
        else
        {
            return false;
        }
        return searchUtil(child2, word.substr(1));
    }
    bool search(string word)
    {
        return searchUtil(root, word);
    }
};

int main()
{
    trie *t = new trie();
    t->insertword("abcd");

    cout << "Present or not " << t->search("abcd") << endl;
}
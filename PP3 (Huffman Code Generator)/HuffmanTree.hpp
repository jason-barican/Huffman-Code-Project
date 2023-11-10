#ifndef HUFFMANTREE_HPP
#define HUFFMANTREE_HPP

#include "HuffmanBase.cpp"
#include "HuffmanBase.hpp"
#include "HeapQueue.hpp"
#include <map>
#include <string>

class HuffmanTree : HuffmanTreeBase{
    private:
        
        HuffmanNode* v;

    public:

        HuffmanTree(HuffmanNode* _v = NULL) : v(_v) { }

        /*
        HuffmanTree left() const { return HuffmanTree(v->left); }
        HuffmanTree right() const { return HuffmanTree(v->right); }
        HuffmanTree parent() const { return HuffmanTree(v->parent); }
        */

        std::string compress(const std::string inputStr)

        std::string serializeTree() const

        std::string decompress(const std::string inputCode, const std::string serializedTree)

        //definitely more methods

        //map -> put into HuffmanTree.cpp in compress method
        std::map<char, int> frequency;

        for(int i = 0; inputStr[i] != '\0'; i++) {
            char letter = inputStr[i];

            if (frequency.find(letter) == frequency(end) {
                frequency[letter] == 0;
            frequency[letter]++;
        }
        //HeapQueue<typename E, typename C> queue; 
        //queue
        while (!frequency.empty()){
            
            T.insert(frequency.begin());
            frequency.erase(frequency.begin());

        }

        //somehow implement tree - priority queue i guess



};

#endif /*HUFFMANTREE_HPP*/

















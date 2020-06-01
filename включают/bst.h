#include  "bst.h"
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>

BST<std::string> makeTree(char* filename)
{
std::string word;
	std::ifstream F(filename);
	BST<std::string> *tree = new BST<std::string>;
  std::string w;
	std::ifstream file(filename);
	BST<std::string>* tree = new BST<std::string>;
	char str = ' ';
	while (!F.eof()) {

	while (!file.eof()) {
		while (str < 'A' && (!file.eof()))
		{
			file.get(str);
		}
		while (str >= 'A' && (!file.eof()))
		{
			if (str >= 'A' && str <= 'Z')
			{
				word += str;
				w += str;
			}
			if (str >= 'a' && str <= 'z')
			{
				word += str;
				w += str;
			}

			file.get(str);
		}
		for (int i = 0; i < word.length(); i++)
		for (int i = 0; i < w.length(); i++)
		{
			if (word[i] >= 'A' && word[i] <= 'Z')
				word[i] += 32;
			if (w[i] >= 'A' && w[i] <= 'Z')
				w[i] += 32;
		}

		(*tree).add(word);
		word = "";
		(*tree).add(w);
		w = "";
	}

	return *tree;
}

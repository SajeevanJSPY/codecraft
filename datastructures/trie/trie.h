#ifndef TRIE_IMPL_H
#define TRIE_IMPL_H

/*
	Trie

	operations:
		insertion
		deletion
		lookup (search)
*/

#define ALPHABET_SIZE 26

typedef struct TrieNode {
	struct TrieNode* children[ALPHABET_SIZE];
	bool isTerminated;
} TrieNode;

TrieNode* trieCreateNode();
void trieInsert(TrieNode *root, char *word, int wordLen);
bool trieSearch(TrieNode *root, char* word, int wordLen);
void trieFree(TrieNode* root);

#endif // TRIE_IMPL_H

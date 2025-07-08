#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "trie.h"

TrieNode* trieCreateNode() {
	TrieNode* root = (TrieNode*)malloc(sizeof(TrieNode));
	root->isTerminated = false;

	for (int i = 0; i < ALPHABET_SIZE; ++i) {
		root->children[i] = NULL;
	}

	return root;
}

void trieInsert(TrieNode *root, char *word, int wordLen) {
	TrieNode *currentNode = root;

	for (int i = 0; i < wordLen; ++i) {
		int index = word[i] - 'a';

		if (!currentNode->children[index]) {
			currentNode->children[index] = trieCreateNode();
		}
		currentNode = currentNode->children[index];
	}
	currentNode->isTerminated = true;
}

bool trieSearch(TrieNode *root, char *word, int wordLen) {
	TrieNode* currentNode = root;

	for (int i = 0; i < wordLen; ++i) {
		int index = word[i] - 'a';
		if (!currentNode->children[index]) {
			return false;
		}
		currentNode = currentNode->children[index];
	}

	return currentNode && currentNode->isTerminated;
}

void trieFree(TrieNode* node) {
	if (!node) return;
	for (int i = 0; i < ALPHABET_SIZE; ++i) {
		trieFree(node->children[i]);
	}
	free(node);
}

int main() {
	TrieNode *root = trieCreateNode();

	trieInsert(root, "hi", 2);
	trieInsert(root, "hello", 5);

	assert(trieSearch(root, "hi", 2));
	assert(!trieSearch(root, "hihi", 4));

	trieFree(root);
	return 0;
}


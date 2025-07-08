file = datastructures/trie/impl.c

run: compile
	@./main

compile: $(file)
	@gcc $(file) -o main -std=c99


/*
	LeetCode 1957. Delete Characters to Make Fancy String
	https://leetcode.com/problems/delete-characters-to-make-fancy-string/description/

	first submission: 21/07/2025
		Runtime: 11 ms
		Memory: 22.21 MB
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* makeFancyString(char* s) {
	int input_len = strlen(s);

	char* buffer = malloc(sizeof(char) * input_len + 1);
	if (!buffer) {
		perror("malloc failed");
		exit(EXIT_FAILURE);
	}

	int write_index = 0;
	char current_char = s[0];
	int repeat_count = 1;

	buffer[write_index++] = current_char;

	for (int i = 1; i < input_len; ++i) {
		char c = s[i];

		if (c == current_char) {
			if (repeat_count == 2) {
				continue;
			}
			repeat_count += 1;
		} else {
			current_char = c;
			repeat_count = 1;
		}

		buffer[write_index++] = c;
	}

	buffer[write_index] = '\0';

	char* result = realloc(buffer, write_index + 1);
	if (!result) {
		result = buffer;
	}

	return result;
}

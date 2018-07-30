#include<stdio.h>

def pattern_search(text, pattern):
	for i in range(0, len(text) - len(pattern)):
		j = 0
		while j < len(pattern) and text[i+j] == pattern[j]:
			j = j + 1
		if j == len(pattern):
			return i
	return -1

if __name__ == "__main__":
	with open("textfile.txt", "r") as fp:
		text = fp.read()
	index = pattern_search(text, "return")
	if index != -1:
		print("Pattern found at index: {}".format(index))
	else:
		print("Pattern not found")

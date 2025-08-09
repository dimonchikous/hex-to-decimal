#include <stdio.h>
#include <ctype.h>

int htoi(char pingvin320kg[]);

int main(int argc, char** argv) {
	int shefos = htoi("1f"); //put here ur fucking number
	printf("*put here ur number lol* = %d\n", shefos);
	return 0;
}
int htoi(char pi[]){
	int i, n;
	if (pi[0] == '0' && (pi[1] == 'x' || pi[1] == 'X'))
		i = 2;
	else
		i = 0;
	for (n=0; isxdigit(pi[i]); ++i) {
		if (isalpha(pi[i]))
			n=16*n+(tolower(pi[i]) - 'a' + 10);
		else
			n=16*n+(pi[i]-'0');
	}
	return n;
}

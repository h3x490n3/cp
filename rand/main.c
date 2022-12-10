#include <stdio.h>

int		main()
{
	int N;
	scanf("%d\n", &N);
	for (int i=0; i<N; i++){
		char word[1024];
		scanf("%s", word);
		int len=0;
		while(word[len])
			len++;
		if (len>10)
			printf("%c%d%c\n",word[0],len-2,word[len-1]);
		else
			printf("%s\n",word);
	}

}

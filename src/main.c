/*
 * Орёл Елизавета, группа 13
 * Основная программа. Принимает из командной строки букву и три предложения,
 * выводит общее количество вхождений этой буквы во всех трёх предложениях.
 */

#include <stdio.h>
#include <stdlib.h>
#include "charcount.h"

int main(int argc, char *argv[]) {
		if (argc != 5) {
				fprintf(stderr, "Ошибка: неверное количество аргументов.\n");
				fprintf(stderr, "Использование: %s <буква> \"<предложение1>\" \"<предложение2>\" \"<предложение3>\"\n", argv[0]);
				return 1;
		}

		char letter = argv[1][0];
		if (argv[1][1] != '\0') {
				fprintf(stderr, "Предупреждение: используется только первый символ '%c'.\n", letter);
		}

		const char *sentences[3] = {argv[2], argv[3], argv[4]};
		int total = 0;

		printf("Искомая буква: '%c'\n", letter);
		printf("Предложения:\n");
		for (int i = 0; i < 3; i++) {
				printf("%d: \"%s\"\n", i + 1, sentences[i]);
				int cnt = count_char(sentences[i], letter);
				total += cnt;
		}

		printf("Общее количество вхождений буквы '%c' во всех трёх предложениях: %d\n", letter, total);
		return 0;
}
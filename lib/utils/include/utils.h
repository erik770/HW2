#pragma once

#if defined(__cplusplus)
extern "C" {
#endif

#include "stdio.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <unistd.h>

#define SYMBOLS "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm     "
#define NUMB_OF_SPACES 5

#define MIN_SIZE 1048576      // 1МБайт
#define MAX_SIZE 10485760     // 10Мбайт 10 а не 100 чтобы тесты не долго крутились

#define BUFF_SIZE 1024

char *create_words();

size_t word_counter(char *string_of_words);

char **create_array_of_words(char *string_of_words);


#if defined(__cplusplus)
}
#endif

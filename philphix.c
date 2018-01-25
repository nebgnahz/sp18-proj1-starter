
#include "hashtable.h"
#include "philphix.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

HashTable *dictionary;

int main(int argc, char **argv){
  if(argc != 2){
    /* Note, you can print everything you want to standard error, it will be
       ignored by the autograder */
    fprintf(stderr, "Specify a dictionary\n");
    return 0;
  }
  fprintf(stderr, "Creating hashtable\n");
  dictionary = createHashTable(2255, &stringHash, &stringEquals);
  fprintf(stderr, "Loading dictionary %s\n", argv[1]);
  readDictionary(argv[1]);
  fprintf(stderr, "Dictionary loaded\n");
  fprintf(stderr, "Processing stdin\n");
  processInput();
  return 0;
}

/*
 * You need to implement this string hash function.
 *
 * void *s can be safely casted to a char * (null terminated string) which is
 * done for you here for convenience.
 */
unsigned int stringHash(void *s){
  char *string = (void *) s;
  /* Printing string is to prevent a compiler warning until you
     actually implement this function */
  fprintf(stderr, "need to implement stringHash%s\n", string);

  /* To suppress compiler warning until you implement this function, */
  return 0;
}

/*
 * You need to implement this function.
 *
 * It should return a nonzero value if the two strings are identical (case
 * sensitive comparison) and 0 otherwise.
 */
int stringEquals(void *s1, void *s2){
  fprintf(stderr, "You need to implement stringEquals");
  /* To suppress compiler warning until you implement this function */
  return 0;
}

/*
 * You need to implement this function.
 *
 * This function should read in every word in the dictionary and store it in the
 * dictionary. You should first open the file specified, then read the content
 * and insert them into the dictionary (use `insertData` function defined in
 * `hashtable.h`). As described in the specs, you can initially assume that no
 * word is longer than 60 characters.  However, for the final 30% of your grade,
 * you cannot assumed that words have a bounded length.
 */
void readDictionary(char *name){
  FILE *inputFile = fopen(name, "r");

  /* Printing the address of inputFile is to suppress compiler warning
     until you implement this function */
  fprintf(stderr, "You need to implement readDictionary %x\n", (unsigned int) inputFile);
}

/*
 * You need to implement this function.
 *
 * The input will be provided as standard input (stdin), and you can print the
 * processed results as standard output (stdout). You can print everything you
 * want to standard error, it will be ignored by the autograder. You can use
 * `findData` function defined in `hashtable.h`.
 */
void processInput(){
  fprintf(stderr, "You need to implement processInput\n");
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main()
{
  int n_rows = 4;
  int n_skip_rows = 2;
  int hour, minute, second;
  char ampm[4];
  char buffer[100];
  FILE *fp = fopen("SAMPLE.TXT", "r");
  if (fp == NULL)
  {
    printf("Failed to open file\n");
    return 1;
  }
  int i = 0;
  while (i < n_skip_rows)
  {
    fscanf(fp, "%*[^\n]\n"); // https://stackoverflow.com/a/16108311/13305144
    i++;
  }
  while (fscanf(fp, "%d %d %d %s\n", &hour, &minute, &second, ampm) > 0)
  {
    printf("%d %d %d %s\n", hour, minute, second, ampm);
  }
  // getchar();
}
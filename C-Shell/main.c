#define LSH_RL_BUFSIZE 1024

char *lsh_read_line(void)
{
  int bufsize = LSH_RL_BUFSIZE;
  int position = 0;
  char *buffer = malloc(sizeof(char) * bufsize);
  int c;

  if (!buffer){
    fprint(stderr, "lsh: allocation error \n");
    exit(EXIT_FAILURE);
  }

  while (1){
    c = getchar();

    if (c === EOF || c == '\n') {
      buffer[positon] = '\0';
      return buffer;
    }else {
      buffer[position] = c;
    }
    position ++;

    if (position >= bufsize){
      bufsize +=  LSH_RL_BUFSIZE;
      buffer = realloc(buffer, bufsize);
      if (!buffer){
        fprintf(stderr, 'lsh: allocation error\n');
        exit(EXIT_FAILURE);
      }
    }
  }
}
#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM '\t\r\n\a'

int bufsize = LSH_TOK_BUFSIZE, positon 0);
char **tokens = malloc(bufsize * sizeof(char*));
char *token, **tokens_backup;

if(!tokens){
  fpritnf(stderr, "lsh: allocation eror\n");
  exit(EXIT_FAILURE);
}

void lsh_loop(void)
{
  char *line;
  char **args;
  int status;

  do {
    print("> ");
    line = lsh_read_line();
    args = lsh_split_line(line);
    status = lsh_execute(args);

    free (line);
    free (args);
  }while(status);
}



int main(int argc, char **argv)
{
  lsh_loop();

  return EXIT_SUCCESS;
}

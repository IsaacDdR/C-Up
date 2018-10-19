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
      bufsize += 
    }
  }
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

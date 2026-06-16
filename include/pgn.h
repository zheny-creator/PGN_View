#include <unistd.h>
#include <stdio.h>
#include <sys/resource.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

void parse_name(char *buffer, char *name_1[], char *name_2[]) {
    const char *line = buffer;
    while (*line)
    {
       if (strncmp(line, "[Black ", 7) == 0)
        {
            sscanf(line, "[Black \"%63[^\"]\"]", name_1);
        }
        else if (strncmp(line, "[White ", 7) == 0)
        {
            sscanf(line, "[White \"%63[^\"]\"]", name_2);
        }

        while (*line && *line != '\n')
            line++;

        if (*line == '\n')
            line++;
    }
    
}
    void parse_date(char *buffer, char data[]) {
    const char *line = buffer;
    while (*line) {
        if (strncmp(line, "[Date ", 5) == 0)
        {
            sscanf(line, "[Date \"%63[^\"]\"]", data);
        }
       while (*line && *line != '\n')
            line++;

        if (*line == '\n')
            line++;
    }
}

void parse_players() {

}

void parse_elo() {
    
}
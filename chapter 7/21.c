#include <stdio.h>

int my_strlen(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;
    while ((dest[i] = src[i]) != '\0')
    {
        i++;
    }
    return dest;
}

char *my_strncpy(char *dest, const char *src, int n)
{
    int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }
    return dest;
}

int my_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i] == s2[i])
    {
        if (s1[i] == '\0')
        {
            return 0;
        }
        i++;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;
    while (i < n && s1[i] == s2[i])
    {
        if (s1[i] == '\0' || i == n - 1)
        {
            return 0;
        }
        i++;
    }
    if (i == n)
    {
        return 0;
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}

char *my_strcat(char *dest, const char *src)
{
    int dest_len = my_strlen(dest);
    int i = 0;
    while (src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}

char *my_strncat(char *dest, const char *src, int n)
{
    int dest_len = my_strlen(dest);
    int i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}

char *my_strchr(const char *str, int c)
{
    while (*str != '\0')
    {
        if (*str == c)
        {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

char *my_strstr(const char *str, const char *substr)
{
    int substr_len = my_strlen(substr);
    while (*str != '\0')
    {
        const char *ptr = str;
        const char *subptr = substr;
        while (*ptr == *subptr && *subptr != '\0')
        {
            ptr++;
            subptr++;
        }
        if (*subptr == '\0')
        {
            return (char *)str;
        }
        str++;
    }
    return NULL;
}

char *my_strtok(char *str, const char *delim)
{
    static char *saved_token = NULL;
    if (str != NULL)
    {
        saved_token = str;
    }
    else if (saved_token == NULL)
    {
        return NULL;
    }
    char *start = saved_token;
    char *end = saved_token;
    while (*end != '\0' && my_strchr(delim, *end) == NULL)
    {
        end++;
    }
    if (*end == '\0')
    {
        saved_token = NULL;
    }
    else
    {
        *end = '\0';
        saved_token = end + 1;
    }
    return start;
}

int main()
{
    ///grrrrrrrrrrrrooooot
    return 0;
}

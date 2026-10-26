#ifndef CU_CSTRING_H_
#define CU_CSTRING_H_

#include <stdlib.h>

#define CU_INTERNAL static

CU_INTERNAL size_t    cu_cstring_length                  (const char  *cstring);
// copy
CU_INTERNAL size_t    cu_cstring_copy                    (const char  *cstring_source,       char   *cstring_destination);
CU_INTERNAL size_t    cu_cstring_copy_length             (const char  *cstring_source,       char   *cstring_destination,      size_t  length);
// index of
CU_INTERNAL long long cu_cstring_first_index_of          (const char  *cstring,        const char   *csubstring);
CU_INTERNAL long long cu_cstring_last_index_of           (const char  *cstring,        const char   *csubstring);
CU_INTERNAL size_t    cu_cstring_indices_of              (const char  *cstring,        const char   *csubstring,               size_t *indices,            size_t  indices_capacity);
CU_INTERNAL long long cu_cstring_first_index_of_length   (const char  *cstring,              size_t  cstring_length,     const char   *csubstring,         size_t  csubstring_length);
CU_INTERNAL long long cu_cstring_last_index_of_length    (const char  *cstring,              size_t  cstring_length,     const char   *csubstring,         size_t  csubstring_length);
CU_INTERNAL size_t    cu_cstring_indices_of_length       (const char  *cstring,              size_t  cstring_length,     const char   *csubstring,         size_t  csubstring_length,           size_t *indices,           size_t indices_capacity);
// chop
CU_INTERNAL size_t    cu_cstring_chop_left               (const char **cstring,              size_t  chop_count);
CU_INTERNAL size_t    cu_cstring_chop_right              (      char  *cstring,              size_t  chop_count);
CU_INTERNAL size_t    cu_cstring_chop                    (      char **cstring,              size_t  chop_count);
CU_INTERNAL size_t    cu_cstring_chop_left_length        (const char **cstring,              size_t  cstring_length,           size_t  chop_count);
CU_INTERNAL size_t    cu_cstring_chop_right_length       (      char **cstring,              size_t  cstring_length,           size_t  chop_count);
CU_INTERNAL size_t    cu_cstring_chop_length             (      char **cstring,              size_t  cstring_length,           size_t  chop_count);
CU_INTERNAL size_t    cu_cstring_chop_left_copy          (const char  *cstring,              size_t  chop_count,               char   *cstring_choped);
CU_INTERNAL size_t    cu_cstring_chop_right_copy         (const char  *cstring,              size_t  chop_count,               char   *cstring_choped);
CU_INTERNAL size_t    cu_cstring_chop_copy               (const char  *cstring,              size_t  chop_count,               char   *cstring_choped);
CU_INTERNAL size_t    cu_cstring_chop_left_length_copy   (const char  *cstring,              size_t  cstring_length,           size_t  chop_count,         char   *cstring_choped);
CU_INTERNAL size_t    cu_cstring_chop_right_length_copy  (const char  *cstring,              size_t  cstring_length,           size_t  chop_count,         char   *cstring_choped);
CU_INTERNAL size_t    cu_cstring_chop_length_copy        (const char  *cstring,              size_t  cstring_length,           size_t  chop_count,         char   *cstring_choped);
// trim
CU_INTERNAL size_t    cu_cstring_trim_left               (const char **cstring,        const char   *trim_cstring);
CU_INTERNAL size_t    cu_cstring_trim_right              (      char **cstring,        const char   *trim_cstring);
CU_INTERNAL size_t    cu_cstring_trim                    (      char **cstring,        const char   *trim_cstring);
CU_INTERNAL size_t    cu_cstring_trim_left_length        (const char **cstring,              size_t  cstring_length,     const char   *trim_cstring,       size_t  trim_cstring_length);
CU_INTERNAL size_t    cu_cstring_trim_right_length       (      char **cstring,              size_t  cstring_length,     const char   *trim_cstring,       size_t  trim_cstring_length);
CU_INTERNAL size_t    cu_cstring_trim_length             (      char **cstring,              size_t  cstring_length,     const char   *trim_cstring,       size_t  trim_cstring_length);
CU_INTERNAL size_t    cu_cstring_trim_left_copy          (const char  *cstring,        const char   *trim_cstring,             char   *trimmed_cstring);
CU_INTERNAL size_t    cu_cstring_trim_right_copy         (const char  *cstring,        const char   *trim_cstring,             char   *trimmed_cstring);
CU_INTERNAL size_t    cu_cstring_trim_copy               (const char  *cstring,        const char   *trim_cstring,             char   *trimmed_cstring);
CU_INTERNAL size_t    cu_cstring_trim_left_length_copy   (const char  *cstring,              size_t  cstring_length,     const char   *trim_cstring,       size_t  trim_cstring_length,         char   *trimmed_cstring);
CU_INTERNAL size_t    cu_cstring_trim_right_length_copy  (const char  *cstring,              size_t  cstring_length,     const char   *trim_cstring,       size_t  trim_cstring_length,         char   *trimmed_cstring);
CU_INTERNAL size_t    cu_cstring_trim_length_copy        (const char  *cstring,              size_t  cstring_length,     const char   *trim_cstring,       size_t  trim_cstring_length,         char   *trimmed_cstring);
// compare
CU_INTERNAL int       cu_cstring_compare                 (const char  *cstring_1,      const char   *cstring_2);
CU_INTERNAL int       cu_cstring_compare_length          (const char  *cstring_1,      const char   *cstring_2,                size_t  length);
// case
CU_INTERNAL int       cu_cstring_is_lowercase            (const char  *cstring);
CU_INTERNAL int       cu_cstring_is_uppercase            (const char  *cstring);
CU_INTERNAL int       cu_cstring_is_lowercase_length     (const char  *cstring,              size_t  length);
CU_INTERNAL int       cu_cstring_is_uppercase_length     (const char  *cstring,              size_t  length);
CU_INTERNAL size_t    cu_cstring_to_lowercase            (      char **cstring);
CU_INTERNAL size_t    cu_cstring_to_uppercase            (      char **cstring);
CU_INTERNAL size_t    cu_cstring_to_lowercase_length     (      char **cstring,              size_t  length);
CU_INTERNAL size_t    cu_cstring_to_uppercase_length     (      char **cstring,              size_t  length);
CU_INTERNAL size_t    cu_cstring_to_lowercase_copy       (const char  *cstring,              char   *lowercase_cstring);
CU_INTERNAL size_t    cu_cstring_to_uppercase_copy       (const char  *cstring,              char   *uppercase_cstring);
CU_INTERNAL size_t    cu_cstring_to_lowercase_length_copy(const char  *cstring,              size_t  length,                   char   *lowercase_cstring);
CU_INTERNAL size_t    cu_cstring_to_uppercase_length_copy(const char  *cstring,              size_t  length,                   char   *uppercase_cstring);
// split
CU_INTERNAL size_t    cu_cstring_split                   (const char  *cstring,        const char   *split_by_cstring,         char  **splitted_cstrings,  size_t  splitted_cstrings_capacity);
CU_INTERNAL size_t    cu_cstring_split_length            (const char  *cstring,              size_t  cstring_length,     const char   *split_by_cstring,   size_t  split_by_cstring_length,     char  **splitted_cstrings, size_t splitted_cstrings_capacity);

#define CU_CSTRING_IMPLEMENTATION
#ifdef CU_CSTRING_IMPLEMENTATION

size_t cu_cstring_length(const char *cstring)
{
    if (cstring == NULL) return 0;

    size_t cstring_length = 0;
    while (*cstring++ != 0) cstring_length++;
    return cstring_length;
}

size_t cu_cstring_copy(const char *cstring_source, char *cstring_destination)
{
    if (cstring_source == NULL || cstring_destination == NULL) return 0;

    size_t copied_characters = 0;
    while (*cstring_source != 0)
    {
        *cstring_destination++ = *cstring_source++;
        copied_characters++;
    }
    *cstring_destination = 0;

    return copied_characters;
}

size_t cu_cstring_copy_length(const char *cstring_source, char *cstring_destination, size_t length)
{
    if (cstring_source == NULL || cstring_destination == NULL) return 0;

    size_t copied_characters = 0;
    while (cstring_source[copied_characters] != 0 && copied_characters < length)
    {
        cstring_destination[copied_characters] = cstring_source[copied_characters];
        copied_characters++;
    }
    cstring_destination[copied_characters] = 0;

    return copied_characters;
}

long long cu_cstring_first_index_of(const char *cstring, const char *csubstring)
{
    if (cstring == NULL || csubstring == NULL || *cstring == 0 || *csubstring == 0) return -1;

    const char *cstring_temp = cstring;
    const char *csubstring_temp = csubstring;
    long long potential_index = 0;
    size_t hit_count = 0;
    while (*cstring_temp != 0 && *csubstring_temp != 0)
    {
        if (*cstring_temp == *csubstring_temp)
        {
            cstring_temp++;
            csubstring_temp++;
            hit_count++;
        }
        else
        {
            potential_index++;
            cstring_temp = cstring + potential_index;
            csubstring_temp = csubstring;
            hit_count = 0;
        }
    } 

    if (*(csubstring + hit_count) == 0) return potential_index;
    
    return -1;
}

long long cu_cstring_last_index_of(const char *cstring, const char *csubstring)
{
    long long current_index = -1;
    long long last_index = -1;
    while ((current_index = cu_cstring_first_index_of(cstring + last_index + 1, csubstring)) != -1)
    {
        last_index += current_index + 1;
    }

    return last_index;
}

size_t cu_cstring_indices_of(const char *cstring, const char *csubstring, size_t *indices, size_t indices_capacity)
{
    if (indices == NULL || indices_capacity == 0) return 0;

    size_t indices_size = 0;
    long long current_index = -1;
    long long previous_index = -1;
    while ((current_index = cu_cstring_first_index_of(cstring + previous_index + 1, csubstring)) != -1)
    {
        previous_index += current_index + 1;
        indices[indices_size++] = previous_index;
        if (indices_size == indices_capacity) break;
    }

    return indices_size;
}

long long cu_cstring_first_index_of_length(const char *cstring, size_t cstring_length, const char *csubstring, size_t csubstring_length)
{
    if (cstring == NULL || csubstring == NULL || csubstring_length == 0 || (cstring_length < csubstring_length)) return -1;
    
    size_t length_difference = cstring_length - csubstring_length;
    size_t j;
    for (size_t i = 0; i <= length_difference; i++)
    {
        for (j = 0; j < csubstring_length; j++)
        {
            if (cstring[i + j] != csubstring[j]) break;
        }

        if (csubstring_length == j) return i;
    }

    return -1;
}

long long cu_cstring_last_index_of_length(const char *const cstring, const size_t cstring_length, const char *const csubstring, const size_t csubstring_length)
{
    if (cstring == NULL || csubstring == NULL || (cstring_length < csubstring_length)) return -1;

    const size_t length_difference = cstring_length - csubstring_length;
    size_t j;
    for (long long i = length_difference; i >= 0; i--)
    {
        for (j = 0; j < csubstring_length; j++)
        {
            if (cstring[i + j] != csubstring[j]) break;
        }

        if (csubstring_length == j) return i;
    }

    return -1;
}

size_t cu_cstring_indices_of_length(const char *cstring, size_t cstring_length, const char *csubstring, size_t csubstring_length, size_t *indices, size_t indices_capacity)
{
    if (indices == NULL || indices_capacity == 0) return 0;

    size_t indices_size = 0;
    long long current_index = -1;
    long long previous_index = -1;
    while ((current_index = cu_cstring_first_index_of_length(cstring + previous_index + 1, cstring_length - (previous_index + 1), csubstring, csubstring_length)) != -1)
    {
        previous_index += current_index + 1;
        indices[indices_size++] = previous_index;
        if (indices_size == indices_capacity) break;
    }

    return indices_size;
}

size_t cu_cstring_chop_left(const char **const cstring, size_t chop_count)
{
    if (cstring == NULL) return 0;

    size_t cstring_length = cu_cstring_length(*cstring);
    if (cstring_length < chop_count) chop_count = cstring_length;

    size_t cstring_new_length = cstring_length - chop_count;
    *cstring += chop_count;
    return cstring_new_length;
}

size_t cu_cstring_chop_right(char *const cstring, size_t chop_count)
{
    if (cstring == NULL) return 0;

    size_t cstring_length = cu_cstring_length(cstring);
    if (cstring_length < chop_count) chop_count = cstring_length;

    size_t cstring_new_length = cstring_length - chop_count;
    cstring[cstring_new_length] = 0;
    return cstring_new_length;
}

size_t cu_cstring_chop(char **const cstring, const size_t chop_count)
{
    if (cstring == NULL) return 0;

    size_t cstring_length = cu_cstring_length(*cstring);
    if (cstring_length < chop_count * 2)
    {
        *cstring += cstring_length;
        return 0;
    }

    *cstring += chop_count;
    size_t cstring_new_length = cstring_length - chop_count * 2;
    (*cstring)[cstring_new_length] = 0;
    return cstring_new_length;
}

size_t cu_cstring_chop_left_length(const char **const cstring, const size_t cstring_length, size_t chop_count)
{
    if (cstring == NULL || *cstring == NULL) return 0;
    if (cstring_length < chop_count) chop_count = cstring_length;

    *cstring += chop_count;
    size_t cstring_new_length = cstring_length - chop_count;
    return cstring_new_length;
}

size_t cu_cstring_chop_right_length(char **const cstring, const size_t cstring_length, size_t chop_count)
{
    if (cstring == NULL || *cstring == NULL) return 0;
    if (cstring_length < chop_count) chop_count = cstring_length;

    size_t cstring_new_length = cstring_length - chop_count;
    (*cstring)[cstring_new_length] = 0;
    return cstring_new_length;
}

size_t cu_cstring_chop_length(char **const cstring, const size_t cstring_length, const size_t chop_count)
{
    if (cstring == NULL || *cstring == NULL) return 0;
    if (cstring_length < chop_count * 2)
    {
        *cstring += cstring_length;
        return 0;
    }

    *cstring += chop_count;
    size_t cstring_new_length = cstring_length - chop_count * 2;
    (*cstring)[cstring_new_length] = 0;
    return cstring_new_length;
}

size_t cu_cstring_chop_left_copy(const char *const cstring, size_t chop_count, char *const cstring_choped)
{   
    size_t cstring_length = cu_cstring_length(cstring);
    if (cstring_length < chop_count) chop_count = cstring_length;

    size_t cstring_choped_length = cu_cstring_copy(cstring + chop_count, cstring_choped);
    return cstring_choped_length;
}

size_t cu_cstring_chop_right_copy(const char *const cstring, size_t chop_count, char *const cstring_choped)
{
    size_t cstring_length = cu_cstring_length(cstring);
    if (cstring_length < chop_count) chop_count = cstring_length;

    size_t cstring_choped_length = cu_cstring_copy_length(cstring, cstring_choped, cstring_length - chop_count);
    return cstring_choped_length;
}

size_t cu_cstring_chop_copy(const char *const cstring, const size_t chop_count, char *const cstring_choped)
{
    size_t cstring_length = cu_cstring_length(cstring);
    if (cstring_length < chop_count * 2)
    {
        if (cstring_choped != NULL)
        {
            cstring_choped[0] = 0;
        }
        return 0;
    }

    size_t cstring_choped_length = cu_cstring_copy_length(cstring + chop_count, cstring_choped, cstring_length - chop_count * 2);
    return cstring_choped_length;
}

size_t cu_cstring_chop_left_length_copy(const char *const cstring, const size_t cstring_length, size_t chop_count, char *const cstring_choped)
{
    if (cstring_length < chop_count) chop_count = cstring_length;

    size_t cstring_choped_length = cu_cstring_copy_length(cstring + chop_count, cstring_choped, cstring_length);
    return cstring_choped_length;
}

size_t cu_cstring_chop_right_length_copy(const char *const cstring, const size_t cstring_length, size_t chop_count, char *const cstring_choped)
{
    if (cstring_length < chop_count) chop_count = cstring_length;

    size_t cstring_choped_length = cu_cstring_copy_length(cstring, cstring_choped, cstring_length - chop_count);
    return cstring_choped_length;
}

size_t cu_cstring_chop_length_copy(const char *const cstring, const size_t cstring_length, const size_t chop_count, char *const cstring_choped)
{
    if (cstring_length < chop_count * 2)
    {
        if (cstring_choped != NULL)
        {
            cstring_choped[0] = 0;
        }
        return 0;
    }

    size_t cstring_choped_length = cu_cstring_copy_length(cstring + chop_count, cstring_choped, cstring_length - chop_count * 2);
    return cstring_choped_length;
}

size_t cu_cstring_trim_left(const char **const cstring, const char *const trim_cstring)
{
    if (cstring == NULL || *cstring == NULL || trim_cstring == NULL) return 0;

    size_t characters_trimmed = 0;
    size_t hit_count;
    do
    {
        hit_count = 0;
        const char *cstring_ptr = *cstring;
        const char *trim_cstring_ptr = trim_cstring;
        while (*trim_cstring_ptr != 0 && *cstring_ptr == *trim_cstring_ptr)
        {
            trim_cstring_ptr++;
            cstring_ptr++;
            hit_count++;
        }

        if (*trim_cstring_ptr == 0)
        {
            *cstring = cstring_ptr;
            characters_trimmed += hit_count;
        }
        else break;
    } while (hit_count != 0);

    return characters_trimmed;
}

size_t cu_cstring_trim_right(char **const cstring, const char *const trim_cstring)
{
    if (cstring == NULL || *cstring == NULL || trim_cstring == NULL) return 0;
    
    const size_t cstring_length = cu_cstring_length(*cstring);
    const size_t trim_cstring_length = cu_cstring_length(trim_cstring);
    if (cstring_length < trim_cstring_length) return 0;

    const size_t length_difference = cstring_length - trim_cstring_length;
    size_t characters_trimmed = 0;
    size_t j;
    for (long long i = length_difference; i >= 0; i -= trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if ((*cstring)[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed += trim_cstring_length;
        }
        else break;
    }
    (*cstring)[cstring_length - characters_trimmed] = 0;

    return characters_trimmed;
}

size_t cu_cstring_trim(char **const cstring, const char *const trim_cstring)
{
    if (cstring == NULL || *cstring == NULL || trim_cstring == NULL) return 0;

    const size_t cstring_length = cu_cstring_length(*cstring);
    const size_t trim_cstring_length = cu_cstring_length(trim_cstring);
    if (cstring_length < trim_cstring_length) return 0;

    size_t characters_trimmed_left = 0;
    size_t length_difference = cstring_length - trim_cstring_length;
    size_t j;
    for (size_t i = 0; i <= length_difference; i += trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if ((*cstring)[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed_left += trim_cstring_length;
        }
        else break;
    }
    *cstring += characters_trimmed_left;

    length_difference -= characters_trimmed_left;
    size_t characters_trimmed_right = 0;
    for (long long i = length_difference; i >= 0; i -= trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if ((*cstring)[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed_right += trim_cstring_length;
        }
        else break;
    }
    (*cstring)[cstring_length - characters_trimmed_left - characters_trimmed_right] = 0;

    return characters_trimmed_left + characters_trimmed_right;
}

size_t cu_cstring_trim_left_length(const char **const cstring, const size_t cstring_length, const char *const trim_cstring, const size_t trim_cstring_length)
{
    if (cstring == NULL || *cstring == NULL || trim_cstring == NULL || (cstring_length < trim_cstring_length)) return 0;

    size_t characters_trimmed = 0;
    const size_t length_difference = cstring_length - trim_cstring_length;
    size_t j;
    for (size_t i = 0; i <= length_difference; i += trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if ((*cstring)[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed += trim_cstring_length;
        }
        else break;
    }
    *cstring += characters_trimmed;

    const size_t cstring_trimmed_length = cstring_length - characters_trimmed;
    return cstring_trimmed_length;
}

size_t cu_cstring_trim_right_length(char **const cstring, const size_t cstring_length, const char *const trim_cstring, const size_t trim_cstring_length)
{
    if (cstring == NULL || *cstring == NULL || trim_cstring == NULL || (cstring_length < trim_cstring_length)) return 0;

    const size_t length_difference = cstring_length - trim_cstring_length;
    size_t characters_trimmed = 0;
    size_t j;
    for (long long i = length_difference; i >= 0; i -= trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if ((*cstring)[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed += trim_cstring_length;
        }
        else break;
    }
    const size_t cstring_trimmed_length = cstring_length - characters_trimmed;
    (*cstring)[cstring_trimmed_length] = 0;

    return cstring_trimmed_length;
}

size_t cu_cstring_trim_length(char **const cstring, const size_t cstring_length, const char *const trim_cstring, const size_t trim_cstring_length)
{
    if (cstring == NULL || *cstring == NULL || trim_cstring == NULL || (cstring_length < trim_cstring_length)) return 0;

    size_t characters_trimmed_left = 0;
    size_t length_difference = cstring_length - trim_cstring_length;
    size_t j;
    for (size_t i = 0; i <= length_difference; i += trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if ((*cstring)[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed_left += trim_cstring_length;
        }
        else break;
    }
    *cstring += characters_trimmed_left;

    length_difference -= characters_trimmed_left;
    size_t characters_trimmed_right = 0;
    for (long long i = length_difference; i >= 0; i -= trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if ((*cstring)[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed_right += trim_cstring_length;
        }
        else break;
    }
    const size_t trimmed_cstring_length = cstring_length - characters_trimmed_left - characters_trimmed_right;
    (*cstring)[trimmed_cstring_length] = 0;

    return trimmed_cstring_length;
}

size_t cu_cstring_trim_left_copy(const char *cstring, const char *const trim_cstring, char *const trimmed_cstring)
{
    if (cstring == NULL || trim_cstring == NULL || trimmed_cstring == NULL) return 0;

    size_t hit_count;
    do
    {
        hit_count = 0;
        const char *cstring_ptr = cstring;
        const char *trim_cstring_ptr = trim_cstring;
        while (*trim_cstring_ptr != 0 && *cstring_ptr == *trim_cstring_ptr)
        {
            trim_cstring_ptr++;
            cstring_ptr++;
            hit_count++;
        }

        if (*trim_cstring_ptr == 0)
        {
            cstring = cstring_ptr;
        }
        else break;
    } while (hit_count != 0);

    const size_t trimmed_cstring_length = cu_cstring_copy(cstring, trimmed_cstring);
    return trimmed_cstring_length;
}

size_t cu_cstring_trim_right_copy(const char *const cstring, const char *const trim_cstring, char *const trimmed_cstring)
{
    if (cstring == NULL || trim_cstring == NULL || trimmed_cstring == NULL) return 0;
    
    const size_t cstring_length = cu_cstring_length(cstring);
    const size_t trim_cstring_length = cu_cstring_length(trim_cstring);
    if (cstring_length < trim_cstring_length) return 0;

    const size_t length_difference = cstring_length - trim_cstring_length;
    size_t characters_trimmed = 0;
    size_t j;
    for (long long i = length_difference; i >= 0; i -= trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if (cstring[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed += trim_cstring_length;
        }
        else break;
    }

    const size_t trimmed_cstring_length = cu_cstring_copy_length(cstring, trimmed_cstring, cstring_length - characters_trimmed);
    return trimmed_cstring_length;
}

size_t cu_cstring_trim_copy(const char *cstring, const char *const trim_cstring, char *const trimmed_cstring)
{
    if (cstring == NULL || trim_cstring == NULL || trimmed_cstring == NULL) return 0;

    const size_t cstring_length = cu_cstring_length(cstring);
    const size_t trim_cstring_length = cu_cstring_length(trim_cstring);
    if (trim_cstring_length == 0 || cstring_length < trim_cstring_length) return 0;

    size_t characters_trimmed_left = 0;
    size_t length_difference = cstring_length - trim_cstring_length;
    size_t j;
    for (size_t i = 0; i <= length_difference; i += trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if (cstring[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed_left += trim_cstring_length;
        }
        else break;
    }
    cstring += characters_trimmed_left;

    length_difference -= characters_trimmed_left;
    size_t characters_trimmed_right = 0;
    for (long long i = length_difference; i >= 0; i -= trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if (cstring[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed_right += trim_cstring_length;
        }
        else break;
    }

    const size_t trimmed_cstring_length = cu_cstring_copy_length(cstring, trimmed_cstring, cstring_length - characters_trimmed_left - characters_trimmed_right);
    return trimmed_cstring_length;
}

size_t cu_cstring_trim_left_length_copy(const char *const cstring, const size_t cstring_length, const char *const trim_cstring, const size_t trim_cstring_length, char *const trimmed_cstring)
{
    if (cstring == NULL || trim_cstring == NULL || trim_cstring_length == 0 || (cstring_length < trim_cstring_length) || trimmed_cstring == NULL) return 0;

    size_t characters_trimmed = 0;
    const size_t length_difference = cstring_length - trim_cstring_length;
    size_t j;
    for (size_t i = 0; i <= length_difference; i += trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if (cstring[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed += trim_cstring_length;
        }
        else break;
    }

    const size_t cstring_trimmed_length = cu_cstring_copy_length(cstring + characters_trimmed, trimmed_cstring, cstring_length - characters_trimmed);
    return cstring_trimmed_length;
}

size_t cu_cstring_trim_right_length_copy(const char *const cstring, const size_t cstring_length, const char *const trim_cstring, const size_t trim_cstring_length, char *const trimmed_cstring)
{
    if (cstring == NULL || trim_cstring == NULL || trim_cstring_length == 0 || (cstring_length < trim_cstring_length) || trimmed_cstring == NULL) return 0;

    const size_t length_difference = cstring_length - trim_cstring_length;
    size_t characters_trimmed = 0;
    size_t j;
    for (long long i = length_difference; i >= 0; i -= trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if (cstring[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed += trim_cstring_length;
        }
        else break;
    }

    const size_t trimmed_cstring_length = cu_cstring_copy_length(cstring, trimmed_cstring, cstring_length - characters_trimmed);
    return trimmed_cstring_length;
}

size_t cu_cstring_trim_length_copy(const char *cstring, const size_t cstring_length, const char *const trim_cstring, const size_t trim_cstring_length, char *const trimmed_cstring)
{
    if (cstring == NULL || trim_cstring == NULL || trim_cstring_length == 0 || (cstring_length < trim_cstring_length) || trimmed_cstring == NULL) return 0;

    size_t characters_trimmed_left = 0;
    size_t length_difference = cstring_length - trim_cstring_length;
    size_t j;
    for (size_t i = 0; i <= length_difference; i += trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if (cstring[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed_left += trim_cstring_length;
        }
        else break;
    }
    cstring += characters_trimmed_left;

    length_difference -= characters_trimmed_left;
    size_t characters_trimmed_right = 0;
    for (long long i = length_difference; i >= 0; i -= trim_cstring_length)
    {
        for (j = 0; j < trim_cstring_length; j++)
        {
            if (cstring[i + j] != trim_cstring[j]) break;
        }

        if (j == trim_cstring_length)
        {
            characters_trimmed_right += trim_cstring_length;
        }
        else break;
    }

    const size_t trimmed_cstring_length = cu_cstring_copy_length(cstring, trimmed_cstring, cstring_length - characters_trimmed_left - characters_trimmed_right);
    return trimmed_cstring_length;
}

int cu_cstring_compare(const char *cstring_1, const char *cstring_2)
{
    if (cstring_1 == NULL && cstring_2 == NULL) return 0;
    if (cstring_1 == NULL) return -1;
    if (cstring_2 == NULL) return 1;

    do
    {
        unsigned char char_1 = (unsigned char)(*cstring_1);
        unsigned char char_2 = (unsigned char)(*cstring_2);
        if (char_1 != char_2) return char_1 - char_2;
    } while(*cstring_1++ != 0 && *cstring_2++ != 0);

    return 0;
}

int cu_cstring_compare_length(const char *cstring_1, const char *cstring_2, size_t length)
{
    if (cstring_1 == NULL && cstring_2 == NULL) return 0;
    if (cstring_1 == NULL) return -1;
    if (cstring_2 == NULL) return 1;

    size_t cstring_1_length = cu_cstring_length(cstring_1);
    size_t cstring_2_length = cu_cstring_length(cstring_2);
    size_t smaller_length = cstring_1_length;
    if (cstring_1_length > cstring_2_length) smaller_length = cstring_2_length;
    if (length > smaller_length) length = smaller_length;

    for (size_t i = 0; i < length; i++)
    {
        unsigned char char_1 = (unsigned char)cstring_1[i];
        unsigned char char_2 = (unsigned char)cstring_2[i];
        if (char_1 != char_2) return char_1 - char_2;
        if (char_1 == 0) return 0;
    }

    return 0;
}

int cu_cstring_is_lowercase(const char *cstring)
{
    if (cstring == NULL) return 0;

    while (*cstring != 0)
    {
        if (*cstring >= 'A' && *cstring <= 'Z') return 0;
        cstring++;
    }

    return 1;
}

int cu_cstring_is_uppercase(const char *cstring)
{
    if (cstring == NULL) return 0;

    while (*cstring != 0)
    {
        if (*cstring >= 'a' && *cstring <= 'z') return 0;
        cstring++;
    }

    return 1;
}

int cu_cstring_is_lowercase_length(const char *cstring, size_t length)
{
    if (cstring == NULL) return 0;

    for (size_t i = 0; i < length; i++)
    {
        if (cstring[i] >= 'A' && cstring[i] <= 'Z') return 0;
    }

    return 1;
}

int cu_cstring_is_uppercase_length(const char *cstring, size_t length)
{
    if (cstring == NULL) return 0;

    for (size_t i = 0; i < length; i++)
    {
        if (cstring[i] >= 'a' && cstring[i] <= 'z') return 0;
    }

    return 1;
}

size_t cu_cstring_to_lowercase(char **cstring)
{
    if (cstring == NULL || *cstring == NULL) return 0;

    size_t transformed_characters = 0;
    while (**cstring != 0)
    {
        if (**cstring >= 'A' && **cstring <= 'Z')
        {
            **cstring += 'a' - 'A';
            transformed_characters++;
        }

        *cstring++;
    }

    return transformed_characters;
}

size_t cu_cstring_to_uppercase(char **cstring)
{
    if (cstring == NULL || *cstring == NULL) return 0;

    size_t transformed_characters = 0;
    while (**cstring != 0)
    {
        if (**cstring >= 'a' && **cstring <= 'z')
        {
            **cstring -= 'a' - 'A';
            transformed_characters++;
        }

        *cstring++;
    }

    return transformed_characters;
}

size_t cu_cstring_to_lowercase_length(char **cstring, size_t length)
{
    if (cstring == NULL || *cstring == NULL) return 0;

    size_t transformed_characters = 0;
    for (size_t i = 0; i < length; i++)
    {
        if ((*cstring)[i] >= 'A' && (*cstring)[i] <= 'Z')
        {
            (*cstring)[i] += 'a' - 'A';
            transformed_characters++;
        }
    }

    return transformed_characters;
}

size_t cu_cstring_to_uppercase_length(char **cstring, size_t length)
{
    if (cstring == NULL || *cstring == NULL) return 0;

    size_t transformed_characters = 0;
    for (size_t i = 0; i < length; i++)
    {
        if ((*cstring)[i] >= 'a' && (*cstring)[i] <= 'z')
        {
            (*cstring)[i] -= 'a' - 'A';
            transformed_characters++;
        }
    }

    return transformed_characters;
}

size_t cu_cstring_to_lowercase_copy(const char *cstring, char *lowercase_cstring)
{
    if (cstring == NULL || lowercase_cstring == NULL) return 0;

    size_t copied_characters = 0;
    while (*cstring != 0)
    {
        if (*cstring >= 'A' && *cstring <= 'Z')
        {
            *lowercase_cstring = *cstring + ('a' - 'A');
        }
        else
        {
            *lowercase_cstring = *cstring;
        }

        cstring++;
        lowercase_cstring++;
        copied_characters++;
    }

    *lowercase_cstring = 0;
    return copied_characters;
}

size_t cu_cstring_to_uppercase_copy(const char *cstring, char *uppercase_cstring)
{
    if (cstring == NULL || uppercase_cstring == NULL) return 0;

    size_t copied_characters = 0;
    while (*cstring != 0)
    {
        if (*cstring >= 'a' && *cstring <= 'z')
        {
            *uppercase_cstring = *cstring - ('a' - 'A');
        }
        else
        {
            *uppercase_cstring = *cstring;
        }

        cstring++;
        uppercase_cstring++;
        copied_characters++;
    }

    *uppercase_cstring = 0;
    return copied_characters;
}

size_t cu_cstring_to_lowercase_length_copy(const char *cstring, size_t length, char *lowercase_cstring)
{
    if (cstring == NULL || lowercase_cstring == NULL) return 0;

    size_t i;
    for (i = 0; i < length; i++)
    {
        if (cstring[i] >= 'A' && cstring[i] <= 'Z')
        {
            lowercase_cstring[i] = cstring[i] + ('a' - 'A');
        }
        else
        {
            lowercase_cstring[i] = cstring[i];
        }
    }

    lowercase_cstring[i] = 0;
    return i;
}

size_t cu_cstring_to_uppercase_length_copy(const char *cstring, size_t length, char *uppercase_cstring)
{
    if (cstring == NULL || uppercase_cstring == NULL) return 0;

    size_t i;
    for (i = 0; i < length; i++)
    {
        if (cstring[i] >= 'a' && cstring[i] <= 'z')
        {
            uppercase_cstring[i] = cstring[i] - ('a' - 'A');
        }
        else
        {
            uppercase_cstring[i] = cstring[i];
        }
    }

    uppercase_cstring[i] = 0;
    return i;
}

size_t cu_cstring_split(const char *cstring, const char *split_by_cstring, char **splitted_cstrings, size_t splitted_cstrings_capacity)
{
    if (cstring == NULL || split_by_cstring == NULL || splitted_cstrings == NULL || *splitted_cstrings == NULL || splitted_cstrings_capacity == 0) return 0;

    size_t splitted_cstrings_size = 0;
    long long index = 0;
    long long previous_index = 0;
    while (index = cu_cstring_first_index_of(cstring, split_by_cstring) != -1)
    {
        size_t splitted_cstring_length = index - previous_index;
        cu_cstring_copy_length(cstring, splitted_cstring_length, splitted_cstrings[splitted_cstrings_size]);
        splitted_cstrings_size++;
        if (splitted_cstrings_size == splitted_cstrings_capacity)
        {
            return splitted_cstrings_size;
        }

        cstring += splitted_cstring_length;
        previous_index = index;
    }

    if (splitted_cstrings_size == splitted_cstrings_capacity)
    {
        return splitted_cstrings_size;
    }

    cu_cstring_copy(cstring, splitted_cstrings[splitted_cstrings_size]);
    return ++splitted_cstrings_size;
}

size_t cu_cstring_split_length(const char *cstring, size_t cstring_length, const char *split_by_cstring, size_t split_by_cstring_length, char **splitted_cstrings, size_t splitted_cstrings_capacity)
{
    if (cstring == NULL || split_by_cstring == NULL || splitted_cstrings == NULL || *splitted_cstrings == NULL || splitted_cstrings_capacity == 0) return 0;

    size_t splitted_cstrings_size = 0;
    long long index = 0;
    long long previous_index = 0;
    while (index = cu_cstring_first_index_of_length(cstring, cstring_length, split_by_cstring, split_by_cstring_length) != -1)
    {
        size_t splitted_cstring_length = index - previous_index;
        cu_cstring_copy_length(cstring, splitted_cstring_length, splitted_cstrings[splitted_cstrings_size]);
        splitted_cstrings_size++;
        if (splitted_cstrings_size == splitted_cstrings_capacity)
        {
            return splitted_cstrings_size;
        }

        cstring += splitted_cstring_length;
        previous_index = index;
    }

    if (splitted_cstrings_size == splitted_cstrings_capacity)
    {
        return splitted_cstrings_size;
    }

    cu_cstring_copy(cstring, splitted_cstrings[splitted_cstrings_size]);
    return ++splitted_cstrings_size;
}

#endif // CU_CSTRING_IMPLEMENTATION

#endif // CU_CSTRING_H_
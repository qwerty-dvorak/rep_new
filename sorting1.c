#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int pstrcmp( const void* a, const void* b )
{
  return strcmp( *(const char**)a, *(const char**)b );
}

int main()
{
  const char* xs[] =
  {
    "Korra",
    "Zhu Li",
    "Asami",
    "Mako",
    "Bolin",
    "Tenzin",
    "Varrick",
  };
  const size_t N = sizeof(xs) / sizeof(xs[0]);

  puts( "(unsorted)" );
  for (int n = 0; n < N; n++)
    puts( xs[ n ] );

  // Do the thing!
  qsort( xs, N, sizeof(xs[0]), pstrcmp );

  puts( "\n(sorted)" );
  for (int n = 0; n < N; n++)
    puts( xs[ n ] );
}
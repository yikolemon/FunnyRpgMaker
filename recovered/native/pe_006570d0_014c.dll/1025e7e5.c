/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025e7e5 */

/* Library Function - Single Match
    __unlock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __unlock_file(FILE *_File)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


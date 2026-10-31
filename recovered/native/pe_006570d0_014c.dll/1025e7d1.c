/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025e7d1 */

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __lock_file(FILE *_File)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


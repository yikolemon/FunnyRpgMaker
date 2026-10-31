/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488b65 */

/* Library Function - Single Match
    __lock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __lock_file(FILE *_File)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


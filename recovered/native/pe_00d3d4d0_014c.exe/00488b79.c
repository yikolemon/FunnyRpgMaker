/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00488b79 */

/* Library Function - Single Match
    __unlock_file
   
   Library: Visual Studio 2019 Release */

void __cdecl __unlock_file(FILE *_File)

{
  LeaveCriticalSection((LPCRITICAL_SECTION)(_File + 1));
  return;
}


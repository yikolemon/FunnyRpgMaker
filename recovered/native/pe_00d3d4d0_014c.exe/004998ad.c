/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004998ad */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2019 Release */

int __cdecl __fileno(FILE *_File)

{
  __acrt_ptd *p_Var1;
  
  if (_File == (FILE *)0x0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    return -1;
  }
  return _File->_file;
}


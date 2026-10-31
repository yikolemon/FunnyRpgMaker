/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009ca8c */

/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  if (_File == (FILE *)0x0) {
    p_Var2 = FUN_140095e5c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1400a0ea0();
    uVar1 = 0xffffffff;
  }
  else {
    FUN_14008ea30((longlong)_File);
    uVar1 = FUN_14009cae4(_Ch,(longlong *)_File);
    FUN_14008ea3c((longlong)_File);
  }
  return uVar1;
}


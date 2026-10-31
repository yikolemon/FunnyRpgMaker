/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009813c */

/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  LARGE_INTEGER LVar3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    p_Var2 = FUN_140095e5c();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_1400a0ea0();
    iVar1 = -1;
  }
  else {
    LVar3 = FUN_140099230((longlong *)_File);
    *_Pos = (fpos_t)LVar3;
    iVar1 = (LVar3.QuadPart != -1) - 1;
  }
  return iVar1;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400991f8 */

/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar1 = FUN_140095fc8((longlong *)_File,(LARGE_INTEGER)*_Pos,0);
    return iVar1;
  }
  p_Var2 = FUN_140095e5c();
  *(undefined4 *)p_Var2 = 0x16;
  FUN_1400a0ea0();
  return -1;
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049199e */

/* Library Function - Single Match
    _fsetpos
   
   Library: Visual Studio */

int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar2 = FUN_0048f7cd(_File,(int)*_Pos,*(undefined4 *)((int)_Pos + 4),(PLARGE_INTEGER)0x0);
    return iVar2;
  }
  p_Var1 = FUN_0048f66d();
  *(undefined4 *)p_Var1 = 0x16;
  FUN_00495c88();
  return -1;
}


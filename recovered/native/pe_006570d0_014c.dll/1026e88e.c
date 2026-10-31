/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e88e */

/* Library Function - Single Match
    _fsetpos
   
   Library: Visual Studio */

int __cdecl _fsetpos(FILE *_File,fpos_t *_Pos)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar2 = FUN_10269197(_File,(int)*_Pos,*(undefined4 *)((int)_Pos + 4),0);
    return iVar2;
  }
  puVar1 = (undefined4 *)FUN_10268ffd();
  *puVar1 = 0x16;
  FUN_10273ea8();
  return -1;
}


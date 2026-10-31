/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140116de8 */

/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar1 = FUN_140113fe4(_File,*_Pos,0);
    return iVar1;
  }
  puVar2 = (undefined4 *)FUN_140113dd4();
  *puVar2 = 0x16;
  FUN_140120ee8();
  return -1;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180286368 */

/* Library Function - Single Match
    fsetpos
   
   Library: Visual Studio */

int __cdecl fsetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((_File != (FILE *)0x0) && (_Pos != (fpos_t *)0x0)) {
    iVar1 = FUN_18027e874(_File,*_Pos,0);
    return iVar1;
  }
  puVar2 = (undefined4 *)FUN_18027e66c();
  *puVar2 = 0x16;
  FUN_180290a50();
  return -1;
}


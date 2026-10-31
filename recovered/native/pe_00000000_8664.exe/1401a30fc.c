/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a30fc */

/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    iVar1 = -1;
  }
  else {
    lVar3 = FUN_1401a4678();
    *_Pos = lVar3;
    iVar1 = (lVar3 != -1) - 1;
  }
  return iVar1;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180284ebc */

/* Library Function - Single Match
    fgetpos
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl fgetpos(FILE *_File,fpos_t *_Pos)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  if ((_File == (FILE *)0x0) || (_Pos == (fpos_t *)0x0)) {
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0x16;
    FUN_180290a50();
    iVar1 = -1;
  }
  else {
    lVar3 = FUN_180286438();
    *_Pos = lVar3;
    iVar1 = (lVar3 != -1) - 1;
  }
  return iVar1;
}


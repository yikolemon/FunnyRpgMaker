/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028c5c0 */

/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0x16;
    FUN_180290a50();
    iVar1 = -1;
  }
  else {
    FUN_180272400(_File);
    iVar1 = FUN_18028c618(_Ch,_File);
    FUN_18027240c(_File);
  }
  return iVar1;
}


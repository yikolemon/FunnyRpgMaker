/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011ca38 */

/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x16;
    FUN_140120ee8();
    iVar1 = -1;
  }
  else {
    FUN_14010b32c(_File);
    iVar1 = FUN_14011ca90(_Ch,_File);
    FUN_14010b338(_File);
  }
  return iVar1;
}


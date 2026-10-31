/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aa264 */

/* Library Function - Single Match
    ungetc
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl ungetc(int _Ch,FILE *_File)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (_File == (FILE *)0x0) {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    iVar1 = -1;
  }
  else {
    FUN_140193154(_File);
    iVar1 = FUN_1401aa2bc(_Ch,_File);
    FUN_140193160(_File);
  }
  return iVar1;
}


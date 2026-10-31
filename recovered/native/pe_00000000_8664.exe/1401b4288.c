/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b4288 */

/* Library Function - Single Match
    _fileno
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _fileno(FILE *_File)

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
    iVar1 = _File->_flag;
  }
  return iVar1;
}


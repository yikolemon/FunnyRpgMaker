/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027869e */

/* Library Function - Single Match
    __fileno
   
   Library: Visual Studio 2019 Release */

int __cdecl __fileno(FILE *_File)

{
  undefined4 *puVar1;
  
  if (_File == (FILE *)0x0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return -1;
  }
  return _File->_file;
}


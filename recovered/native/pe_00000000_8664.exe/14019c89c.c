/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14019c89c */

/* Library Function - Single Match
    _configthreadlocale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _configthreadlocale(int _Flag)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  
  lVar2 = FUN_1401aecc8();
  uVar5 = *(uint *)(lVar2 + 0x3a8);
  cVar4 = (char)((ulonglong)uVar5 & 0xffffffffffffff02);
  iVar1 = -(uint)(cVar4 != '\0');
  if (_Flag == -1) {
    DAT_140f29f00 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar5 = uVar5 | 2;
    }
    else {
      if (_Flag != 2) {
        puVar3 = (undefined4 *)
                 FUN_14019e8cc(iVar1,CONCAT71((int7)(((ulonglong)uVar5 & 0xffffffffffffff02) >> 8),
                                              -cVar4));
        *puVar3 = 0x16;
        FUN_1401ae640();
        return -1;
      }
      uVar5 = uVar5 & 0xfffffffd;
    }
    *(uint *)(lVar2 + 0x3a8) = uVar5;
  }
  return iVar1 + 2;
}


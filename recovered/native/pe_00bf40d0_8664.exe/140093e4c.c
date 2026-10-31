/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140093e4c */

/* Library Function - Single Match
    _configthreadlocale
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _configthreadlocale(int _Flag)

{
  uint uVar1;
  longlong lVar2;
  __acrt_ptd *p_Var3;
  uint uVar4;
  
  lVar2 = FUN_1400a1528();
  uVar1 = *(uint *)(lVar2 + 0x3a8);
  if (_Flag == -1) {
    DAT_14013c4a0 = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        p_Var3 = FUN_140095e5c();
        *(undefined4 *)p_Var3 = 0x16;
        FUN_1400a0ea0();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(lVar2 + 0x3a8) = uVar4;
  }
  return 2 - (uint)((uVar1 & 2) != 0);
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004923d0 */

/* Library Function - Single Match
    _islower
   
   Library: Visual Studio 2019 Release */

int __cdecl _islower(int _C)

{
  int iVar1;
  int *local_8;
  
  if (DAT_005216fc == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_0051ae88 + _C * 2) & 2;
    }
  }
  else {
    iVar1 = FUN_004961ad();
    local_8 = *(int **)(iVar1 + 0x4c);
    ___acrt_update_locale_info(iVar1,(int *)&local_8);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_8 + _C * 2) & 2;
    }
    if (1 < local_8[1]) {
      iVar1 = FUN_00499a3e(_C,2,(int *)0x0);
      return iVar1;
    }
  }
  return 0;
}


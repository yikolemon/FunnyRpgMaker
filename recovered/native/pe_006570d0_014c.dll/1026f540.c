/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026f540 */

/* Library Function - Single Match
    _islower
   
   Library: Visual Studio 2019 Release */

int __cdecl _islower(int _C)

{
  int iVar1;
  int *local_8;
  
  if (DAT_103a5004 == 0) {
    if (_C + 1U < 0x101) {
      return *(ushort *)(PTR_DAT_1039b408 + _C * 2) & 2;
    }
  }
  else {
    iVar1 = FUN_102743cd();
    local_8 = *(int **)(iVar1 + 0x4c);
    ___acrt_update_locale_info(iVar1,&local_8);
    if (_C + 1U < 0x101) {
      return *(ushort *)(*local_8 + _C * 2) & 2;
    }
    if (1 < local_8[1]) {
      iVar1 = FUN_1027882e(_C,2,0);
      return iVar1;
    }
  }
  return 0;
}


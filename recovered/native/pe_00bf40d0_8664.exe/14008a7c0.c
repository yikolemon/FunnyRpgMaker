/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008a7c0 */

longlong FUN_14008a7c0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  if ((param_2 == 0) && (param_3 == 0)) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    uVar1 = FUN_14009b230(*(longlong *)(param_1 + 0x80),param_2,iVar2,param_3);
    if ((int)uVar1 == 0) {
      FUN_14008aa10(param_1,*(longlong *)(param_1 + 0x80),1);
      return param_1;
    }
  }
  return 0;
}


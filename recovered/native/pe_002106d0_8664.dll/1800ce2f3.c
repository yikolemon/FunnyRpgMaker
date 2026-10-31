/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ce2f3 */

ulonglong FUN_1800ce2f3(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                       longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_158 [32];
  char local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_158;
  lVar2 = param_2 - param_3;
  uVar1 = 0xffffffffffffffff;
  if ((param_3 <= param_2 && lVar2 != 0) && param_5 != 0) {
    if ((ulonglong)(param_5 + lVar2) < 0x10) {
      lVar2 = 0;
      FUN_1802a89a0(local_138,0,0x100);
      do {
        local_138[*(byte *)(param_4 + lVar2)] = '\x01';
        lVar2 = lVar2 + 1;
        uVar1 = param_3;
      } while (param_5 != lVar2);
      do {
        if (local_138[*(byte *)(param_1 + uVar1)] != '\0') goto LAB_1800ce3bc;
        lVar2 = param_1 + uVar1;
        uVar1 = uVar1 + 1;
      } while (lVar2 + 1U < param_2 + param_1);
      uVar1 = 0xffffffffffffffff;
    }
    else {
      lVar2 = thunk_FUN_18023b3d0(param_1 + param_3,lVar2,param_4,param_5);
      uVar1 = param_3 + lVar2;
      if (lVar2 == -1) {
        uVar1 = 0xffffffffffffffff;
      }
    }
  }
LAB_1800ce3bc:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_158)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_158);
  }
  return uVar1;
}


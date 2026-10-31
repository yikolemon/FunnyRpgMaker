/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020412e */

longlong FUN_18020412e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  int local_38;
  uint local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x30);
    local_38 = FUN_180203638(param_1 + 0x30,param_2,&local_30,&local_34);
    if (local_38 == 0) {
      lVar2 = FUN_1801cc006(uVar1,local_34 + 1,&local_38);
      if (local_38 == 0) {
        FUN_1802a82f0(lVar2,local_30,(ulonglong)local_34);
        *(undefined1 *)(lVar2 + (ulonglong)local_34) = 0;
      }
      FUN_180203628(param_1 + 0x30,&local_30);
      goto LAB_1802041b9;
    }
  }
  lVar2 = 0;
LAB_1802041b9:
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_58)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_58);
}


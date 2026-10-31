/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002360d */

ulonglong FUN_14002360d(longlong *param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar2 = FUN_140020e0f(param_1,&local_34);
  uVar4 = (ulonglong)local_34;
  if (local_34 != 0) goto LAB_140023706;
  if (uVar2 == param_2) {
    FUN_140020e0f(param_1,&local_34);
    uVar4 = (ulonglong)local_34;
    if ((local_34 != 0) || (uVar4 = FUN_140020a93((longlong)param_1,0x10), (int)uVar4 != 0))
    goto LAB_140023706;
    uVar1 = FUN_140020aa5(param_1,&local_34);
    uVar4 = (ulonglong)local_34;
    if (local_34 != 0) goto LAB_140023706;
    if (uVar1 != 0) {
      uVar2 = (uint)uVar1;
      do {
        uVar3 = FUN_140020e0f(param_1,&local_34);
        uVar4 = (ulonglong)local_34;
        if (local_34 != 0) goto LAB_140023706;
        if (uVar3 == 2) {
          uVar3 = FUN_140020e0f(param_1,&local_34);
          if ((local_34 == 0) && (FUN_140020e0f(param_1,&local_34), local_34 == 0)) {
            *param_3 = uVar3;
            uVar4 = 0;
            goto LAB_140023706;
          }
        }
        else {
          uVar4 = FUN_140020a93((longlong)param_1,8);
          local_34 = (uint)uVar4;
          if (local_34 != 0) goto LAB_140023706;
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  uVar4 = 2;
LAB_140023706:
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_58);
  }
  return uVar4;
}


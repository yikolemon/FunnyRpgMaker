/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d12c0 */

ulonglong FUN_1801d12c0(undefined8 param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  iVar2 = FUN_1801cea0c(param_1,&local_34);
  uVar4 = (ulonglong)local_34;
  if (local_34 != 0) goto LAB_1801d13b9;
  if (iVar2 == param_2) {
    FUN_1801cea0c(param_1,&local_34);
    uVar4 = (ulonglong)local_34;
    if ((local_34 != 0) || (uVar4 = FUN_1801ce690(param_1,0x10), (int)uVar4 != 0))
    goto LAB_1801d13b9;
    uVar1 = FUN_1801ce6a2(param_1,&local_34);
    uVar4 = (ulonglong)local_34;
    if (local_34 != 0) goto LAB_1801d13b9;
    if (uVar1 != 0) {
      uVar5 = (uint)uVar1;
      do {
        iVar2 = FUN_1801cea0c(param_1,&local_34);
        uVar4 = (ulonglong)local_34;
        if (local_34 != 0) goto LAB_1801d13b9;
        if (iVar2 == 2) {
          uVar3 = FUN_1801cea0c(param_1,&local_34);
          if ((local_34 == 0) && (FUN_1801cea0c(param_1,&local_34), local_34 == 0)) {
            *param_3 = uVar3;
            uVar4 = 0;
            goto LAB_1801d13b9;
          }
        }
        else {
          uVar4 = FUN_1801ce690(param_1,8);
          local_34 = (uint)uVar4;
          if (local_34 != 0) goto LAB_1801d13b9;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  uVar4 = 2;
LAB_1801d13b9:
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
  }
  return uVar4;
}


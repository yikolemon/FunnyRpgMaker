/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f6ac6 */

void FUN_1801f6ac6(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int *local_30;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1d8) == 3) &&
     (*(longlong *)(param_1 + 0x200) != *(longlong *)(param_1 + 0x210))) {
    local_30 = &local_1c;
    local_38 = *(longlong *)(param_1 + 0x210);
    uVar1 = FUN_1801cc8d6(*(undefined8 *)(param_1 + 0x10),4,*(undefined4 *)(param_1 + 0x208),
                          *(undefined4 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x210) = uVar1;
    *(int *)(param_1 + 0x20) = local_1c;
    if (local_1c == 0) {
      *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x1f8);
      FUN_1802a82f0(uVar1,*(undefined8 *)(param_1 + 0x200),
                    (ulonglong)*(uint *)(param_1 + 0x1f8) << 2);
      *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x210);
    }
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401461b2 */

void FUN_1401461b2(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int *local_30;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x1d8) == 3) &&
     (*(longlong *)(param_1 + 0x200) != *(longlong *)(param_1 + 0x210))) {
    local_30 = &local_1c;
    local_38 = *(longlong *)(param_1 + 0x210);
    uVar1 = FUN_14012b8aa(*(undefined8 *)(param_1 + 0x10),4,*(undefined4 *)(param_1 + 0x208),
                          *(undefined4 *)(param_1 + 0x1f8));
    *(undefined8 *)(param_1 + 0x210) = uVar1;
    *(int *)(param_1 + 0x20) = local_1c;
    if (local_1c == 0) {
      *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x1f8);
      FUN_1401c5180(uVar1,*(undefined8 *)(param_1 + 0x200),
                    (ulonglong)*(uint *)(param_1 + 0x1f8) << 2);
      *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x210);
    }
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}


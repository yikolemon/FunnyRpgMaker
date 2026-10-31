/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400440fa */

void FUN_1400440fa(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStackY_58 [32];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  if ((*(int *)(param_1 + 0x1d8) == 3) &&
     (*(longlong *)(param_1 + 0x200) != *(longlong *)(param_1 + 0x210))) {
    puVar1 = (undefined8 *)
             FUN_14001f231(*(longlong *)(param_1 + 0x10),4,*(uint *)(param_1 + 0x208),
                           *(uint *)(param_1 + 0x1f8),*(longlong *)(param_1 + 0x210),&local_1c);
    *(undefined8 **)(param_1 + 0x210) = puVar1;
    *(int *)(param_1 + 0x20) = local_1c;
    if (local_1c == 0) {
      *(uint *)(param_1 + 0x208) = *(uint *)(param_1 + 0x1f8);
      FUN_1400b3550(puVar1,*(undefined8 **)(param_1 + 0x200),
                    (ulonglong)*(uint *)(param_1 + 0x1f8) << 2);
      *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x210);
    }
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStackY_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStackY_58);
}


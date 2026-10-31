/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c6fbe */

void FUN_1800c6fbe(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 8);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x18);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  local_18 = *(undefined4 *)(param_1 + 0x28);
  uStack_14 = *(undefined4 *)(param_1 + 0x2c);
  uStack_10 = *(undefined4 *)(param_1 + 0x30);
  uStack_c = *(undefined4 *)(param_1 + 0x34);
  FUN_1800c7033(&local_38);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_58);
}


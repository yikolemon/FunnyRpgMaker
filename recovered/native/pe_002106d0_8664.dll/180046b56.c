/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180046b56 */

void FUN_180046b56(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_180005ebc("Precision not allowed for this argument type.",param_2,param_2);
  }
  FUN_1800469dc(param_1,local_30);
  uVar1 = FUN_18000aa02(local_30);
  *(undefined4 *)(*param_1 + 4) = uVar1;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}


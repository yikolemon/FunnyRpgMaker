/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005cbd2 */

void FUN_14005cbd2(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400451d8("Precision not allowed for this argument type.");
  }
  FUN_14005ca96(param_1,local_30);
  uVar1 = FUN_140049c58(local_30);
  *(undefined4 *)(*param_1 + 4) = uVar1;
  if (DAT_1401c9640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_58);
}


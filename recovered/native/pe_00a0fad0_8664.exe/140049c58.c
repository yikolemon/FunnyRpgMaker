/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140049c58 */

void FUN_140049c58(undefined4 *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_18 = *(undefined8 *)(param_1 + 4);
  uVar1 = FUN_140049cc3(&local_29);
  if ((uVar1 & 0xffffffff80000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400451d8("Number is too big.");
  }
  if (DAT_1401c9640 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_8 ^ (ulonglong)auStack_58);
}


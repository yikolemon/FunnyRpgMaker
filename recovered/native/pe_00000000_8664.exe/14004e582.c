/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004e582 */

void FUN_14004e582(undefined4 *param_1)

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
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_18 = *(undefined8 *)(param_1 + 4);
  uVar1 = FUN_14004e5ed(&local_29);
  if ((uVar1 & 0xffffffff80000000) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140049b0a("Number is too big.");
  }
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_58);
}


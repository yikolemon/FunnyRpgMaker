/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019ef2c */

void FUN_18019ef2c(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_88;
  param_1[6] = param_2;
  FUN_1801d2d45(&local_68);
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  uVar1 = FUN_1801d2e6b(param_2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_88);
}


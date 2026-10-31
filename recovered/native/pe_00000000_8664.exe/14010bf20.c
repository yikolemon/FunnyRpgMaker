/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010bf20 */

void FUN_14010bf20(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  param_1[6] = param_2;
  FUN_140119a79(&local_68);
  *param_1 = local_68;
  param_1[1] = uStack_64;
  param_1[2] = uStack_60;
  param_1[3] = uStack_5c;
  uVar1 = FUN_140119b9f(param_2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_88);
}


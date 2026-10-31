/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012be19 */

void FUN_18012be19(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_1 + 1);
  local_18 = *param_1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_2 + 1) = local_10;
  *param_2 = local_18;
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


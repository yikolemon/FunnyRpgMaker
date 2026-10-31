/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180231ce6 */

void FUN_180231ce6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_20 = (undefined8 *)0x0;
  iVar1 = FUN_180231f56(*param_2);
  if (iVar1 == 0) {
    *local_20 = *param_1;
    local_20[2] = param_2[1];
    param_2[1] = local_20;
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}


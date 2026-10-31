/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014c0b4 */

void FUN_18014c0b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_38 [40];
  undefined8 *local_10;
  ulonglong local_8;
  
  local_10 = &local_res18;
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_18014c10f(param_1,0,param_2,local_10);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}


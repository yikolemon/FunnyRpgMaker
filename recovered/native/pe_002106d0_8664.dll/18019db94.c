/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019db94 */

void FUN_18019db94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [128];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_c8;
  FUN_18019dc10(local_a0,param_4,param_5);
  FUN_18019dc4e(local_a0,param_1,param_3);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_c8);
}


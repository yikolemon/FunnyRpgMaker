/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800020f4 */

undefined8 FUN_1800020f4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_38;
  FUN_18000214a(param_1,param_2,&local_11);
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_38)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_38);
}


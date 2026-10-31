/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180162b30 */

undefined8 FUN_180162b30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_180162c8b(local_30);
  FUN_180162b94(param_1,local_30,param_3);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}


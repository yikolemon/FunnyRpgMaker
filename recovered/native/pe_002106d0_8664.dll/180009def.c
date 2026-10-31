/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180009def */

undefined8 * FUN_180009def(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_180006064(local_28,*param_3,param_3[1] + *param_3,param_2);
  *param_1 = local_20;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004d984 */

undefined8 * FUN_14004d984(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  FUN_140049caf(local_28,*param_3,param_3[1] + *param_3,param_2);
  *param_1 = local_20;
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}


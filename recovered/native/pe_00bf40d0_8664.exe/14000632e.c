/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000632e */

undefined8 * FUN_14000632e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  FUN_14000638a(local_28,param_2);
  FUN_1400046d6(param_1,local_28);
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}


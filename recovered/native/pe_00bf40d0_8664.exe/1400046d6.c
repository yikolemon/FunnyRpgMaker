/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400046d6 */

undefined8 * FUN_1400046d6(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  FUN_14000472c(param_1,param_2);
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}


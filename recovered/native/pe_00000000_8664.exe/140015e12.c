/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015e12 */

undefined8 FUN_140015e12(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  FUN_140015eba(local_28);
  FUN_140015e6e(param_1,local_28);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}


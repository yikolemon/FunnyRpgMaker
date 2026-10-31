/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140015e6e */

undefined8 FUN_140015e6e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  FUN_140015ec4(param_1,param_2,&local_11);
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}


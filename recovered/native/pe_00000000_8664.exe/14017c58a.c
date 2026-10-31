/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c58a */

undefined8 FUN_14017c58a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_140173d9c(param_1,param_2,&local_18);
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}


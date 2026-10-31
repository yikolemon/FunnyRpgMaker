/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140078461 */

void FUN_140078461(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  FUN_140076955(local_c,param_1,param_2);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}


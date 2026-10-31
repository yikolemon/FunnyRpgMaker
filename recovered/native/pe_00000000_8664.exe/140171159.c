/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140171159 */

void FUN_140171159(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14017bdd4(param_1,&local_c,0);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}


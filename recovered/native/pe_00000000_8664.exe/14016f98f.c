/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f98f */

void FUN_14016f98f(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  FUN_14016f151();
  FUN_14016f748(param_1 + 0x10,param_3,local_20);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000d637 */

undefined8 FUN_14000d637(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39 [22];
  undefined1 local_23 [11];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14000d69b(local_23);
  FUN_14000602e(param_1,uVar1,local_23,local_39);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_68);
}


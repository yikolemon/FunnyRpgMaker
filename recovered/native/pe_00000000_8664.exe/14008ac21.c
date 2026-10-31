/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008ac21 */

undefined8 FUN_14008ac21(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  FUN_14008acaa(param_2,local_30,local_38);
  FUN_14008adfe(local_40,param_2,local_38,0xffffffff);
  FUN_14008b19e(param_1,param_2,local_40);
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
}


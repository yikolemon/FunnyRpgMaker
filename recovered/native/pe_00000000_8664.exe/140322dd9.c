/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140322dd9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140322dd9(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  FUN_140322e62(param_2,local_30,local_38);
  FUN_140322fb6(local_40,param_2,local_38,0xffffffff);
  FUN_140323356(param_1,param_2,local_40);
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_68);
}


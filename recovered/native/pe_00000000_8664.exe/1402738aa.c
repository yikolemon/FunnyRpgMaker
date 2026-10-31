/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402738aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1402738aa(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  FUN_140273924(param_1,local_38,param_2);
  if ((*(char *)(local_28 + 0x19) != '\0') ||
     (iVar1 = FUN_140273988(local_28 + 0x20,*param_2), 0 < iVar1)) {
    local_28 = *param_1;
  }
  if (ram0x000140613b10 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_58);
  }
  return local_28;
}


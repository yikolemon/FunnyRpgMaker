/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002affe */

/* WARNING: Removing unreachable block (ram,0x00018002b04b) */

undefined8 FUN_18002affe(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_3 == (char *)0x0) {
    local_39 = 1;
    FUN_180025c48(local_38,"string pointer is null");
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_38,&DAT_180391580);
  }
  sVar1 = strlen(param_3);
  FUN_180025857(param_1,param_3,param_3 + sVar1,param_2);
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
  }
  return param_1;
}


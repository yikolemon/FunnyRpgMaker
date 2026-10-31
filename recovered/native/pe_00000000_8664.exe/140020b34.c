/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140020b34 */

/* WARNING: Removing unreachable block (ram,0x000140020b81) */

undefined8 FUN_140020b34(undefined8 param_1,undefined8 param_2,char *param_3)

{
  size_t sVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_3 == (char *)0x0) {
    local_39 = 1;
    FUN_14001b296(local_38,"string pointer is null");
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_38,&DAT_140ee3c60);
  }
  sVar1 = strlen(param_3);
  FUN_14001aea5(param_1,param_3,param_3 + sVar1,param_2);
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_68);
  }
  return param_1;
}


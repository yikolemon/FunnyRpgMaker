/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140028d81 */

undefined8 FUN_140028d81(undefined8 param_1,undefined8 param_2,char *param_3,uint *param_4)

{
  undefined1 auStack_68 [39];
  undefined1 local_41;
  char *local_40;
  size_t local_38;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if ((*param_4 & 7) == 3) {
    FUN_140020bd9(param_1,param_2,param_3,param_4);
  }
  else {
    if (param_3 == (char *)0x0) {
      local_41 = 1;
      FUN_14001b296(&local_40,"string pointer is null");
                    /* WARNING: Subroutine does not return */
      FUN_14018f0a0(&local_40,&DAT_140ee3c60);
    }
    local_38 = strlen(param_3);
    local_40 = param_3;
    FUN_140028e49(param_1,param_2,&local_40,param_4);
  }
  if (DAT_140f17b40 != (local_28 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_28 ^ (ulonglong)auStack_68);
  }
  return param_1;
}


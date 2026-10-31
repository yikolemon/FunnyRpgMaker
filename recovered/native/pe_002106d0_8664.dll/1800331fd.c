/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800331fd */

undefined8 FUN_1800331fd(undefined8 param_1,undefined8 param_2,char *param_3,uint *param_4)

{
  undefined1 auStack_68 [39];
  undefined1 local_41;
  char *local_40;
  size_t local_38;
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  if ((*param_4 & 7) == 3) {
    FUN_18002b0a3(param_1,param_2,param_3,param_4);
  }
  else {
    if (param_3 == (char *)0x0) {
      local_41 = 1;
      FUN_180025c48(&local_40,"string pointer is null");
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(&local_40,&DAT_180391580);
    }
    local_38 = strlen(param_3);
    local_40 = param_3;
    FUN_1800332c5(param_1,param_2,&local_40,param_4);
  }
  if (DAT_180402640 != (local_28 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
  }
  return param_1;
}


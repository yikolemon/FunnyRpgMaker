/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000eba1 */

undefined8
FUN_18000eba1(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  char *local_40;
  size_t local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  local_38 = strlen(param_3);
  local_48 = param_5;
  FUN_18000bc9a(param_1,param_2,&local_40,param_4);
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}


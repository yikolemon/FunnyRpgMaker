/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002709c */

undefined8 *
FUN_14002709c(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
             char param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  FUN_14001aea5(&local_40,param_3,param_5 + param_3,param_2);
  if (param_6 == '\0') {
    *param_1 = local_40;
  }
  else {
    lVar1 = local_40[1];
    uVar2 = lVar1 + 1;
    if ((ulonglong)local_40[2] < uVar2) {
      (*(code *)local_40[3])(local_40);
      lVar1 = local_40[1];
      uVar2 = lVar1 + 1;
    }
    local_40[1] = uVar2;
    *(char *)(*local_40 + lVar1) = param_6;
    FUN_14001aea5(param_1,param_5 + param_3,param_3 + param_4,local_40);
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}


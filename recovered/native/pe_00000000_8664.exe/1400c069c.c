/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c069c */

void FUN_1400c069c(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  int local_48 [3];
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_2 + 0x17) != '\0') {
    FUN_1400cebfe(local_48,param_1,0);
    param_4 = local_3c;
  }
  if (param_2[1] == param_2[2]) {
    param_2[1] = *param_2;
  }
  uVar1 = FUN_1400cf6ae(param_1,param_3,param_4,local_48);
  param_2[2] = uVar1;
  *param_2 = uVar1;
  *(bool *)(param_1 + 0x76) = local_48[0] != 0;
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}


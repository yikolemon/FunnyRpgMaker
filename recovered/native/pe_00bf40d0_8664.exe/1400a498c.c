/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a498c */

void FUN_1400a498c(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,char *param_4,
                  longlong param_5,int param_6,char param_7,int param_8,int param_9,
                  longlong *param_10)

{
  int iVar1;
  ulonglong uVar2;
  int local_18 [4];
  
  local_18[0] = 0;
  local_18[1] = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  iVar1 = FUN_1400b05f0(*param_1,param_6 + 1,1,local_18,param_4,param_5);
  uVar2 = (param_3 - (0 < param_6)) - (ulonglong)(local_18[0] == 0x2d);
  if (param_3 == 0xffffffffffffffff) {
    uVar2 = 0xffffffffffffffff;
  }
  iVar1 = FUN_1400b0410(param_2 + (ulonglong)(0 < param_6) + (ulonglong)(local_18[0] == 0x2d),uVar2,
                        param_6 + 1,local_18,iVar1,param_9,param_10);
  if (iVar1 == 0) {
    FUN_1400a47a8(param_2,param_3,param_6,param_7,param_8,local_18,0,param_10);
  }
  else {
    *param_2 = 0;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000d73c */

int FUN_14000d73c(undefined8 *param_1,ulonglong param_2,ulonglong param_3,char *param_4)

{
  int iVar1;
  size_t sVar2;
  ulonglong uVar3;
  
  uVar3 = param_1[2] - param_2;
  if (param_2 <= (ulonglong)param_1[2]) {
    sVar2 = strlen(param_4);
    if (uVar3 < param_3) {
      param_3 = uVar3;
    }
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    uVar3 = param_3;
    if (sVar2 < param_3) {
      uVar3 = sVar2;
    }
    iVar1 = memcmp((void *)((longlong)param_1 + param_2),param_4,uVar3);
    if (iVar1 == 0) {
      iVar1 = (int)(char)((param_3 >= sVar2 && param_3 != sVar2) - (param_3 < sVar2));
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14000cf3e();
}


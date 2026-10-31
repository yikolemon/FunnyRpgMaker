/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe861 */

void FUN_1800fe861(char *param_1,ulonglong *param_2,char *param_3)

{
  size_t sVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 == (ulonglong *)0x0) {
    sVar1 = strlen(param_1);
    uVar3 = sVar1 + 1;
  }
  else {
    uVar3 = *param_2;
  }
  sVar1 = strlen(param_3);
  uVar2 = sVar1 + 1;
  if (uVar3 < uVar2) {
    FUN_1800fe8d4(param_1);
    param_1 = (char *)FUN_1800fe7f8(uVar2);
    if (param_2 != (ulonglong *)0x0) {
      *param_2 = uVar2;
    }
  }
  FUN_1802a82f0(param_1,param_3,uVar2);
  return;
}


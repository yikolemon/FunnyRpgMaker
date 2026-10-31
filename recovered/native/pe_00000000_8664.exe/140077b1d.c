/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077b1d */

void FUN_140077b1d(char *param_1,ulonglong *param_2,char *param_3)

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
    FUN_140077b90(param_1);
    param_1 = (char *)FUN_140077ab4(uVar2);
    if (param_2 != (ulonglong *)0x0) {
      *param_2 = uVar2;
    }
  }
  FUN_1401c5180(param_1,param_3,uVar2);
  return;
}


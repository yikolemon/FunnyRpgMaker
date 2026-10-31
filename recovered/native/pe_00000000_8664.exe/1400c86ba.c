/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c86ba */

void FUN_1400c86ba(int *param_1,undefined8 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)FUN_140078a4a(param_1 + 8,param_2,0);
  if (param_3 == '\0') {
    iVar2 = -1;
    if (*piVar1 == 0) {
      return;
    }
  }
  else {
    if (*piVar1 != 0) {
      return;
    }
    iVar3 = param_1[6];
    param_1[6] = iVar3 + 1;
    iVar2 = 1;
  }
  *piVar1 = iVar3;
  *param_1 = *param_1 + iVar2;
  return;
}


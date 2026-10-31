/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b226 */

void __thiscall FUN_1014b226(int *param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_100fb0cc(param_2,0);
  if (param_3 == '\0') {
    if (*piVar1 == 0) {
      return;
    }
    iVar3 = -1;
    iVar2 = 0;
  }
  else {
    if (*piVar1 != 0) {
      return;
    }
    iVar2 = param_1[4];
    param_1[4] = iVar2 + 1;
    iVar3 = 1;
  }
  *piVar1 = iVar2;
  *param_1 = *param_1 + iVar3;
  return;
}


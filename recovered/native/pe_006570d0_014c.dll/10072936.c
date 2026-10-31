/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10072936 */

int __thiscall FUN_10072936(undefined4 *param_1,char param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = param_1 + 4;
  if (*piVar1 != 0) {
    if (0xf < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    uVar2 = *piVar1 - 1;
    if (param_3 <= uVar2) {
      uVar2 = param_3;
    }
    iVar5 = (int)param_1 + uVar2 + 1;
    iVar3 = FUN_10072a86(param_1,iVar5,(int)param_2);
    iVar4 = -1;
    if (iVar3 != iVar5) {
      iVar4 = iVar3 - (int)param_1;
    }
    return iVar4;
  }
  return -1;
}


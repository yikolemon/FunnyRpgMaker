/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100c6a0c */

int __thiscall FUN_100c6a0c(undefined4 *param_1,undefined2 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = param_1 + 4;
  if (param_3 < *puVar1) {
    if (7 < (uint)param_1[5]) {
      param_1 = (undefined4 *)*param_1;
    }
    iVar2 = (int)param_1 + *puVar1 * 2;
    iVar3 = FUN_10044e04((int)param_1 + param_3 * 2,iVar2,param_2);
    iVar4 = -1;
    if (iVar3 != iVar2) {
      iVar4 = iVar3 - (int)param_1 >> 1;
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}


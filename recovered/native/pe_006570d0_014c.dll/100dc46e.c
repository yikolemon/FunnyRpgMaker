/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100dc46e */

int __thiscall FUN_100dc46e(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = FUN_100d7b05(param_2 + 2);
  uVar3 = uVar3 & *(uint *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0xc);
  piVar2 = *(int **)(iVar1 + uVar3 * 8);
  if (*(int **)(iVar1 + 4 + uVar3 * 8) == param_2) {
    if (piVar2 == param_2) {
      iVar4 = *(int *)(param_1 + 4);
      *(int *)(iVar1 + uVar3 * 8) = iVar4;
    }
    else {
      iVar4 = param_2[1];
    }
    *(int *)(iVar1 + 4 + uVar3 * 8) = iVar4;
  }
  else if (piVar2 == param_2) {
    *(int *)(iVar1 + uVar3 * 8) = *param_2;
  }
  iVar1 = *param_2;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *(int *)param_2[1] = iVar1;
  *(int *)(iVar1 + 4) = param_2[1];
  FUN_102283a0(param_2,0x10);
  return iVar1;
}


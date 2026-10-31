/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007d77a */

void __thiscall FUN_1007d77a(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (((*(uint *)(param_1 + 0x3c) & 0x22) == 2) || (uVar1 = **(uint **)(param_1 + 0x20), uVar1 == 0)
     ) {
    if ((*(uint *)(param_1 + 0x3c) & 4) != 0) {
      return;
    }
    iVar2 = **(int **)(param_1 + 0x1c);
    if (iVar2 == 0) {
      return;
    }
    iVar3 = **(int **)(param_1 + 0xc);
    *param_2 = iVar3;
    iVar3 = (iVar2 + **(int **)(param_1 + 0x2c)) - iVar3;
    param_2[1] = iVar3;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x10);
    *param_2 = iVar3;
    uVar4 = *(uint *)(param_1 + 0x38);
    if (*(uint *)(param_1 + 0x38) <= uVar1) {
      uVar4 = uVar1;
    }
    param_2[1] = uVar4 - iVar3;
    iVar3 = (uVar1 + **(int **)(param_1 + 0x30)) - iVar3;
  }
  param_2[2] = iVar3;
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002fcc0 */

void __thiscall FUN_1002fcc0(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_2[1];
  iVar4 = param_2[2];
  piVar1 = param_2 + 4;
  if ((int *)*param_2 == piVar1) {
    *param_1 = (int)(param_1 + 4);
    param_1[2] = iVar4;
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        *(undefined4 *)((int)(param_1 + 4) + iVar4) = *(undefined4 *)((int)piVar1 + iVar4);
        iVar4 = iVar4 + 4;
      } while (uVar2 * 4 - iVar4 != 0);
    }
  }
  else {
    *param_1 = *param_2;
    param_1[2] = iVar4;
    *param_2 = (int)piVar1;
    param_2[2] = 0;
    param_2[1] = 0;
  }
  uVar3 = param_1[2];
  if (uVar3 < uVar2) {
    (*(code *)param_1[3])(param_1,uVar2);
    uVar3 = param_1[2];
  }
  if (uVar2 < uVar3) {
    uVar3 = uVar2;
  }
  param_1[1] = uVar3;
  return;
}


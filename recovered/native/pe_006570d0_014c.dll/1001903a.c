/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001903a */

void __thiscall FUN_1001903a(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = param_2[1];
  iVar3 = param_2[2];
  piVar1 = param_2 + 4;
  if ((int *)*param_2 == piVar1) {
    *param_1 = (int)(param_1 + 4);
    param_1[2] = iVar3;
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        *(undefined1 *)((int)(param_1 + 4) + uVar4) = *(undefined1 *)((int)piVar1 + uVar4);
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
  }
  else {
    *param_1 = *param_2;
    param_1[2] = iVar3;
    *param_2 = (int)piVar1;
    param_2[2] = 0;
    param_2[1] = 0;
  }
  uVar4 = param_1[2];
  if (uVar4 < uVar2) {
    (*(code *)param_1[3])(param_1,uVar2);
    uVar4 = param_1[2];
  }
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  param_1[1] = uVar4;
  return;
}


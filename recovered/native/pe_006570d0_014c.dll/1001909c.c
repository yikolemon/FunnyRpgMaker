/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001909c */

void __thiscall FUN_1001909c(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != param_3) {
    iVar2 = param_1[1];
    do {
      uVar4 = param_3 - param_2;
      if ((uint)(param_1[2] - iVar2) < uVar4) {
        (*(code *)param_1[3])(param_1,iVar2 + uVar4);
        iVar2 = param_1[1];
        if ((uint)(param_1[2] - iVar2) <= uVar4) {
          uVar4 = param_1[2] - iVar2;
        }
      }
      if (uVar4 != 0) {
        iVar1 = *param_1;
        uVar3 = 0;
        do {
          *(undefined1 *)(iVar2 + iVar1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
        iVar2 = param_1[1];
      }
      iVar2 = iVar2 + uVar4;
      param_1[1] = iVar2;
      param_2 = param_2 + uVar4;
    } while (param_2 != param_3);
  }
  return;
}


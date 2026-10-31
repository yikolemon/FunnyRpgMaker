/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002febe */

void __thiscall FUN_1002febe(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x25];
  iVar2 = *(int *)(param_2 + 0x94);
  iVar5 = iVar1 - iVar2;
  if (iVar5 != 0 && iVar2 <= iVar1) {
    iVar4 = param_1[1];
    uVar3 = param_1[2];
    if (uVar3 < (uint)(iVar5 + iVar4)) {
      (*(code *)param_1[3])(param_1,iVar5 + iVar4);
      uVar3 = param_1[2];
    }
    if ((uint)(iVar5 + iVar4) < uVar3) {
      uVar3 = iVar5 + iVar4;
    }
    param_1[1] = uVar3;
    if (0 < iVar4) {
      do {
        *(undefined4 *)(iVar1 * 4 + iVar2 * -4 + -4 + *param_1 + iVar4 * 4) =
             *(undefined4 *)(*param_1 + -4 + iVar4 * 4);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    _memset((void *)*param_1,0,iVar5 * 4);
    param_1[0x25] = param_1[0x25] - iVar5;
  }
  return;
}


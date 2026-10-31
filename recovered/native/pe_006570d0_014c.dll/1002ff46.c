/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002ff46 */

void __thiscall FUN_1002ff46(int *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_1002f878(param_1,param_2);
  iVar3 = param_2[1];
  if (iVar3 != 0) {
    iVar5 = param_2[0x25] - param_1[0x25];
    uVar7 = 0;
    iVar6 = 0;
    do {
      puVar2 = (uint *)(*param_2 + iVar6 * 4);
      uVar9 = *puVar2;
      uVar8 = uVar7 + *puVar2;
      uVar4 = *(uint *)(*param_1 + iVar5 * 4);
      *(uint *)(*param_1 + iVar5 * 4) = uVar4 - uVar8;
      uVar9 = -(uint)(uVar4 < uVar8) - (uint)CARRY4(uVar7,uVar9);
      uVar7 = uVar9 >> 0x1f;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (iVar3 != iVar6);
    if ((int)uVar9 < 0) {
      piVar1 = (int *)(*param_1 + iVar5 * 4);
      *piVar1 = *piVar1 + -1;
    }
  }
  FUN_1002fc7e();
  return;
}


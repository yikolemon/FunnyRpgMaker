/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d98fc */

int * __thiscall FUN_100d98fc(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  iVar6 = *param_1;
  piVar8 = *(int **)(iVar6 + 4);
  *param_2 = (int)piVar8;
  param_2[1] = 0;
  param_2[2] = iVar6;
  if (*(char *)((int)piVar8 + 0xd) == '\0') {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    do {
      *param_2 = (int)piVar8;
      if ((uint)piVar8[9] < 0x10) {
        piVar5 = piVar8 + 4;
      }
      else {
        piVar5 = (int *)piVar8[4];
      }
      uVar3 = piVar8[8];
      uVar7 = uVar2;
      if (uVar3 < uVar2) {
        uVar7 = uVar3;
      }
      iVar6 = FUN_102595e0(uVar1,piVar5,uVar7);
      bVar4 = 0 < iVar6;
      if (iVar6 == 0) {
        bVar4 = uVar3 < uVar2;
      }
      if (!bVar4) {
        param_2[2] = (int)piVar8;
      }
      else {
        piVar8 = piVar8 + 2;
      }
      param_2[1] = (uint)!bVar4;
      piVar8 = (int *)*piVar8;
    } while (*(char *)((int)piVar8 + 0xd) == '\0');
  }
  return param_2;
}


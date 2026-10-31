/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a9a88 */

int * __thiscall FUN_100a9a88(int *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = *param_1;
  piVar7 = *(int **)(iVar6 + 4);
  *param_2 = (int)piVar7;
  param_2[1] = 0;
  param_2[2] = iVar6;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    do {
      *param_2 = (int)piVar7;
      uVar3 = piVar7[5];
      uVar5 = uVar3;
      if (uVar2 < uVar3) {
        uVar5 = uVar2;
      }
      iVar6 = FUN_102595e0(piVar7[4],uVar1,uVar5);
      bVar4 = iVar6 < 0;
      if (iVar6 == 0) {
        bVar4 = uVar3 < uVar2;
      }
      if (!bVar4) {
        param_2[2] = (int)piVar7;
      }
      else {
        piVar7 = piVar7 + 2;
      }
      param_2[1] = (uint)!bVar4;
      piVar7 = (int *)*piVar7;
    } while (*(char *)((int)piVar7 + 0xd) == '\0');
  }
  return param_2;
}


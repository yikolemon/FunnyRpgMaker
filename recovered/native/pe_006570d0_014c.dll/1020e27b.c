/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020e27b */

void __fastcall FUN_1020e27b(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  uVar5 = *(uint *)(param_1 + 4);
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      if (2 < *(uint *)(*(int *)(param_1 + 0xc) + 4 + uVar7 * 8)) {
        piVar1 = *(int **)(*(int *)(param_1 + 0xc) + uVar7 * 8);
        piVar6 = (int *)*piVar1;
        iVar8 = ((int *)*piVar1)[8];
        piVar9 = piVar1;
        do {
          piVar2 = (int *)piVar9[1];
          iVar3 = piVar9[8];
          if (((iVar3 <= iVar8) || (piVar2[8] <= iVar3)) &&
             ((iVar8 <= iVar3 || (iVar3 <= piVar2[8])))) {
            uVar5 = piVar9[4];
            piVar9[4] = uVar5 | 0x40;
            uVar4 = 0xc0;
            if ((piVar6[9] < piVar2[9]) || (uVar4 = 0x140, piVar2[9] < piVar6[9])) {
              piVar9[4] = uVar5 | uVar4;
            }
          }
          piVar6 = piVar9;
          iVar8 = iVar3;
          piVar9 = piVar2;
        } while (piVar2 != piVar1);
        uVar5 = *(uint *)(param_1 + 4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  return;
}


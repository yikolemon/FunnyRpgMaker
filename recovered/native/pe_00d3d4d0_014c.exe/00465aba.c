/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00465aba */

void __fastcall FUN_00465aba(uint *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  puVar7 = param_1 + param_2 * 10 + 7;
  uVar9 = *(uint *)param_1[param_2 * 10 + 0xf];
  piVar1 = (int *)((uint *)param_1[param_2 * 10 + 0xf])[2];
  uVar3 = (uint)(param_2 != 0) * 9 + 3;
  iVar4 = FUN_0041eaa0(0x20,*(uint *)(param_1[6] + 200 + param_2 * 0xcc));
  iVar6 = 0xc;
  if (iVar4 < 0xc) {
    iVar6 = iVar4;
  }
  if (uVar9 < 2) {
    if (uVar9 != 1) goto LAB_00465bb3;
  }
  else {
    uVar5 = *param_1;
    if (uVar5 == 0) {
      return;
    }
    if ((uint)piVar1[3] < uVar5) {
      uVar5 = piVar1[3];
    }
    do {
      uVar8 = *param_1;
      if ((uint)piVar1[7] < *param_1) {
        uVar8 = piVar1[7];
      }
      if (uVar5 <= uVar8 && uVar8 - uVar5 != 0) {
        uVar2 = param_1[2];
        FUN_004669ac(puVar7,piVar1 + 4);
        FUN_00466a6b((int)puVar7,uVar5 * 0x2c + uVar2,uVar8 - uVar5,iVar6,uVar3);
      }
      uVar9 = uVar9 - 1;
      uVar5 = uVar8;
      piVar1 = piVar1 + 4;
    } while (1 < uVar9);
  }
  uVar9 = *param_1;
  uVar5 = param_1[2];
  FUN_004669ac(puVar7,*(int **)(param_1[param_2 * 10 + 0xf] + 8));
  FUN_00466a6b((int)puVar7,uVar5,uVar9,iVar6,uVar3);
LAB_00465bb3:
  uVar9 = *param_1;
  if (uVar9 != 0) {
    puVar7 = (uint *)(param_1[2] + 0x10);
    do {
      if ((puVar7[3] != 0) && ((*puVar7 & 0x10) == 0)) {
        *puVar7 = *puVar7 | 0x10;
      }
      puVar7 = puVar7 + 0xb;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}


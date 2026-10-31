/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10185c5e */

void __fastcall FUN_10185c5e(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = param_3 - 1;
  uVar5 = (int)uVar7 >> 1;
  uVar8 = param_2;
  while ((int)uVar8 < (int)uVar5) {
    uVar2 = uVar8 * 2 + 2;
    if (*(int *)(param_1 + 0x10 + uVar2 * 0x14) < *(int *)(param_1 + -4 + uVar2 * 0x14)) {
      uVar9 = uVar8 * 2 + 1;
      puVar6 = (undefined4 *)(param_1 + uVar2 * 0x14 + -0x14);
    }
    else {
      puVar6 = (undefined4 *)(param_1 + uVar2 * 0x14);
      uVar9 = uVar2;
    }
    puVar1 = (undefined4 *)(param_1 + uVar8 * 0x14);
    *puVar1 = *puVar6;
    FUN_1008a8bc(puVar6 + 1);
    puVar1[4] = puVar6[4];
    uVar8 = uVar9;
  }
  if (((param_3 & 1) == 0) && (uVar8 == uVar5)) {
    iVar3 = param_1 + 4 + uVar7 * 0x14;
    iVar4 = param_1 + 4 + uVar5 * 0x14;
    *(undefined4 *)(iVar4 + -4) = *(undefined4 *)(iVar3 + -4);
    FUN_1008a8bc(iVar3);
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    uVar8 = uVar7;
  }
  if ((int)param_2 < (int)uVar8) {
    do {
      uVar7 = uVar8 - 1 >> 1;
      if ((int)param_4[4] <= *(int *)(param_1 + 0x10 + uVar7 * 0x14)) break;
      puVar6 = (undefined4 *)(param_1 + uVar7 * 0x14);
      iVar3 = param_1 + 4 + uVar8 * 0x14;
      *(undefined4 *)(iVar3 + -4) = *puVar6;
      FUN_1008a8bc(puVar6 + 1);
      *(undefined4 *)(iVar3 + 0xc) = puVar6[4];
      uVar8 = uVar7;
    } while (param_2 < uVar7);
  }
  iVar3 = param_1 + 4 + uVar8 * 0x14;
  *(undefined4 *)(iVar3 + -4) = *param_4;
  FUN_1008a8bc(param_4 + 1);
  *(undefined4 *)(iVar3 + 0xc) = param_4[4];
  return;
}


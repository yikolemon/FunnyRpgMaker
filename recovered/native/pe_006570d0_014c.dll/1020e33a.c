/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020e33a */

void __fastcall FUN_1020e33a(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar6 = param_1 + param_2 * 10 + 7;
  uVar8 = *(uint *)param_1[param_2 * 10 + 0xf];
  uVar1 = ((uint *)param_1[param_2 * 10 + 0xf])[2];
  iVar2 = (uint)(param_2 != 0) * 9 + 3;
  iVar3 = FUN_101c2523(0x20,*(undefined4 *)(param_1[6] + 200 + param_2 * 0xcc),puVar6);
  iVar5 = 0xc;
  if (iVar3 < 0xc) {
    iVar5 = iVar3;
  }
  if (uVar8 < 2) {
    if (uVar8 != 1) goto LAB_1020e433;
  }
  else {
    uVar4 = *param_1;
    if (uVar4 == 0) {
      return;
    }
    puVar9 = param_1;
    if (*(uint *)(uVar1 + 0xc) < uVar4) {
      uVar4 = *(uint *)(uVar1 + 0xc);
    }
    do {
      uVar7 = *param_1;
      if (*(uint *)(uVar1 + 0x1c) < *param_1) {
        uVar7 = *(uint *)(uVar1 + 0x1c);
      }
      if (uVar4 <= uVar7 && uVar7 - uVar4 != 0) {
        FUN_1020f22c(puVar6,iVar5,iVar2,puVar9,uVar4 * 0x2c + param_1[2]);
        param_1 = puVar9;
        FUN_1020f2eb(uVar7 - uVar4,iVar5,iVar2);
        puVar9 = param_1;
      }
      uVar8 = uVar8 - 1;
      uVar4 = uVar7;
      uVar1 = uVar1 + 0x10;
    } while (1 < uVar8);
  }
  uVar8 = *param_1;
  FUN_1020f22c();
  FUN_1020f2eb(uVar8,iVar5,iVar2);
LAB_1020e433:
  uVar8 = *param_1;
  if (uVar8 != 0) {
    puVar6 = (uint *)(param_1[2] + 0x10);
    do {
      if ((puVar6[3] != 0) && ((*puVar6 & 0x10) == 0)) {
        *puVar6 = *puVar6 | 0x10;
      }
      puVar6 = puVar6 + 0xb;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}


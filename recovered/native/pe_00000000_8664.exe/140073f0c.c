/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140073f0c */

void FUN_140073f0c(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar15 = param_3 - 1;
  uVar14 = (longlong)uVar15 >> 1;
  uVar13 = param_2;
  while ((longlong)uVar13 < (longlong)uVar14) {
    lVar4 = (uVar13 * 0x10 + 0x10) * 5;
    if (*(int *)(param_1 + 0x20 + lVar4) < *(int *)(param_1 + -8 + lVar4)) {
      uVar12 = uVar13 * 2 + 1;
      lVar10 = -0x28;
    }
    else {
      uVar12 = uVar13 * 2 + 2;
      lVar10 = 0;
    }
    lVar5 = uVar13 * 0x28;
    lVar1 = param_1 + lVar5;
    lVar11 = param_1 + lVar4 + lVar10;
    *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(lVar10 + param_1 + lVar4);
    if (lVar5 != lVar10 + lVar4) {
      FUN_1400022f6(lVar1 + 8);
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar11 + 8);
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined8 *)(lVar11 + 8) = 0;
      *(undefined8 *)(lVar11 + 0x10) = 0;
      *(undefined8 *)(lVar11 + 0x18) = 0;
    }
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
    uVar13 = uVar12;
  }
  if (((param_3 & 1) == 0) && (uVar13 == uVar14)) {
    puVar2 = (undefined8 *)(param_1 + uVar15 * 0x28);
    puVar3 = (undefined8 *)(param_1 + uVar14 * 0x28);
    *puVar3 = *puVar2;
    if (uVar14 != uVar15) {
      FUN_1400022f6(puVar3 + 1);
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3[3] = puVar2[3];
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
    }
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar2 + 4);
    uVar13 = uVar15;
  }
  if ((longlong)param_2 < (longlong)uVar13) {
    do {
      uVar15 = uVar13 - 1 >> 1;
      iVar9 = *(int *)(param_1 + 0x20 + uVar15 * 0x28);
      if (*(int *)(param_4 + 4) <= iVar9) break;
      puVar2 = (undefined8 *)(param_1 + uVar15 * 0x28);
      puVar3 = (undefined8 *)(param_1 + uVar13 * 0x28);
      *puVar3 = *puVar2;
      if (uVar13 != uVar15) {
        FUN_1400022f6(puVar3 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
        uVar7 = *(undefined4 *)(puVar2 + 2);
        uVar8 = *(undefined4 *)((longlong)puVar2 + 0x14);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar2 + 1);
        *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
        *(undefined4 *)(puVar3 + 2) = uVar7;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uVar8;
        puVar3[3] = puVar2[3];
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        iVar9 = *(int *)(puVar2 + 4);
      }
      *(int *)(puVar3 + 4) = iVar9;
      uVar13 = uVar15;
    } while (param_2 < uVar15);
  }
  puVar2 = (undefined8 *)(param_1 + uVar13 * 0x28);
  *puVar2 = *param_4;
  if (puVar2 != param_4) {
    FUN_1400022f6(puVar2 + 1);
    puVar2[1] = param_4[1];
    puVar2[2] = param_4[2];
    puVar2[3] = param_4[3];
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_4 + 4);
  return;
}


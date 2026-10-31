/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276498 */

void FUN_140276498(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  lVar11 = param_3 - 1;
  lVar12 = lVar11 >> 1;
  lVar6 = param_2;
  while (lVar6 < lVar12) {
    lVar7 = lVar6 * 2 + 2;
    uVar3 = *(ulonglong *)(param_1 + lVar7 * 0x18);
    uVar8 = *(longlong *)(param_1 + 8 + lVar7 * 0x18) - uVar3;
    uVar9 = *(ulonglong *)(param_1 + -0x18 + lVar7 * 0x18);
    uVar13 = *(longlong *)(param_1 + -0x10 + lVar7 * 0x18) - uVar9;
    bVar5 = uVar13 < uVar8;
    if (uVar8 == uVar13) {
      bVar5 = uVar3 < uVar9;
    }
    if (bVar5) {
      puVar10 = (undefined8 *)(param_1 + lVar7 * 0x18 + -0x18);
      lVar7 = lVar6 * 2 + 1;
    }
    else {
      puVar10 = (undefined8 *)(param_1 + lVar7 * 0x18);
    }
    *(undefined8 *)(param_1 + 0x10 + lVar6 * 0x18) = puVar10[2];
    uVar4 = puVar10[1];
    puVar1 = (undefined8 *)(param_1 + lVar6 * 0x18);
    *puVar1 = *puVar10;
    puVar1[1] = uVar4;
    lVar6 = lVar7;
  }
  if (((param_3 & 1) == 0) && (lVar6 == lVar12)) {
    *(undefined8 *)(param_1 + 0x10 + lVar12 * 0x18) =
         *(undefined8 *)(param_1 + 0x10 + lVar11 * 0x18);
    puVar10 = (undefined8 *)(param_1 + lVar11 * 0x18);
    uVar4 = puVar10[1];
    puVar1 = (undefined8 *)(param_1 + lVar12 * 0x18);
    *puVar1 = *puVar10;
    puVar1[1] = uVar4;
    lVar6 = lVar11;
  }
  while (param_2 < lVar6) {
    lVar11 = lVar6 + -1 >> 1;
    uVar3 = *(ulonglong *)(param_1 + lVar11 * 0x18);
    uVar8 = *(longlong *)(param_1 + 8 + lVar11 * 0x18) - uVar3;
    uVar9 = param_4[1] - *param_4;
    bVar5 = uVar9 < uVar8;
    if (uVar8 == uVar9) {
      bVar5 = uVar3 < *param_4;
    }
    if (!bVar5) break;
    puVar10 = (undefined8 *)(param_1 + lVar11 * 0x18);
    *(undefined8 *)(param_1 + 0x10 + lVar6 * 0x18) = puVar10[2];
    uVar4 = puVar10[1];
    puVar1 = (undefined8 *)(param_1 + lVar6 * 0x18);
    *puVar1 = *puVar10;
    puVar1[1] = uVar4;
    lVar6 = lVar11;
  }
  *(ulonglong *)(param_1 + 0x10 + lVar6 * 0x18) = param_4[2];
  uVar3 = param_4[1];
  puVar2 = (ulonglong *)(param_1 + lVar6 * 0x18);
  *puVar2 = *param_4;
  puVar2[1] = uVar3;
  return;
}


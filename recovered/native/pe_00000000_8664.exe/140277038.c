/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140277038 */

void FUN_140277038(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = param_3 - 1;
  lVar9 = lVar8 >> 1;
  lVar5 = param_2;
  while (lVar5 < lVar9) {
    lVar6 = lVar5 * 2 + 2;
    if (*(ulonglong *)(param_1 + lVar6 * 0x18) < *(ulonglong *)(param_1 + -0x18 + lVar6 * 0x18)) {
      puVar7 = (undefined8 *)(param_1 + lVar6 * 0x18 + -0x18);
      lVar6 = lVar5 * 2 + 1;
    }
    else {
      puVar7 = (undefined8 *)(param_1 + lVar6 * 0x18);
    }
    *(undefined8 *)(param_1 + 0x10 + lVar5 * 0x18) = puVar7[2];
    uVar3 = puVar7[1];
    puVar1 = (undefined8 *)(param_1 + lVar5 * 0x18);
    *puVar1 = *puVar7;
    puVar1[1] = uVar3;
    lVar5 = lVar6;
  }
  if (((param_3 & 1) == 0) && (lVar5 == lVar9)) {
    *(undefined8 *)(param_1 + 0x10 + lVar9 * 0x18) = *(undefined8 *)(param_1 + 0x10 + lVar8 * 0x18);
    puVar7 = (undefined8 *)(param_1 + lVar8 * 0x18);
    uVar3 = puVar7[1];
    puVar1 = (undefined8 *)(param_1 + lVar9 * 0x18);
    *puVar1 = *puVar7;
    puVar1[1] = uVar3;
    lVar5 = lVar8;
  }
  while ((param_2 < lVar5 &&
         (lVar8 = lVar5 + -1 >> 1, *(ulonglong *)(param_1 + lVar8 * 0x18) < *param_4))) {
    puVar7 = (undefined8 *)(param_1 + lVar8 * 0x18);
    *(undefined8 *)(param_1 + 0x10 + lVar5 * 0x18) = puVar7[2];
    uVar3 = puVar7[1];
    puVar1 = (undefined8 *)(param_1 + lVar5 * 0x18);
    *puVar1 = *puVar7;
    puVar1[1] = uVar3;
    lVar5 = lVar8;
  }
  *(ulonglong *)(param_1 + 0x10 + lVar5 * 0x18) = param_4[2];
  uVar4 = param_4[1];
  puVar2 = (ulonglong *)(param_1 + lVar5 * 0x18);
  *puVar2 = *param_4;
  puVar2[1] = uVar4;
  return;
}


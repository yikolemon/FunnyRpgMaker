/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100652e2 */

void FUN_100652e2(int param_1,int param_2,uint param_3,uint *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar6 = param_3 - 1;
  iVar7 = iVar6 >> 1;
  iVar5 = param_2;
  while (iVar5 < iVar7) {
    iVar2 = iVar5 * 2 + 2;
    uVar3 = *(uint *)(param_1 + iVar2 * 0xc);
    uVar11 = *(int *)(param_1 + 4 + iVar2 * 0xc) - uVar3;
    uVar10 = *(uint *)(param_1 + -0xc + iVar2 * 0xc);
    uVar8 = *(int *)(param_1 + -8 + iVar2 * 0xc) - uVar10;
    bVar4 = uVar8 < uVar11;
    if (uVar11 == uVar8) {
      bVar4 = uVar3 < uVar10;
    }
    if (bVar4) {
      iVar2 = iVar2 * 0xc + -0xc;
      iVar9 = iVar5 * 2 + 1;
    }
    else {
      iVar2 = iVar2 * 0xc;
      iVar9 = iVar5 * 2 + 2;
    }
    *(undefined4 *)(param_1 + 8 + iVar5 * 0xc) =
         *(undefined4 *)((undefined8 *)(iVar2 + param_1) + 1);
    *(undefined8 *)(param_1 + iVar5 * 0xc) = *(undefined8 *)(iVar2 + param_1);
    iVar5 = iVar9;
  }
  if (((param_3 & 1) == 0) && (iVar5 == iVar7)) {
    *(undefined4 *)(param_1 + 8 + iVar7 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar6 * 0xc);
    *(undefined8 *)(param_1 + iVar7 * 0xc) = *(undefined8 *)(param_1 + iVar6 * 0xc);
    iVar5 = iVar6;
  }
  while (param_2 < iVar5) {
    iVar6 = iVar5 + -1 >> 1;
    uVar3 = *(uint *)(param_1 + iVar6 * 0xc);
    uVar10 = *(int *)(param_1 + 4 + iVar6 * 0xc) - uVar3;
    uVar8 = param_4[1] - *param_4;
    bVar4 = uVar8 < uVar10;
    if (uVar10 == uVar8) {
      bVar4 = uVar3 < *param_4;
    }
    if (!bVar4) break;
    puVar1 = (undefined8 *)(param_1 + iVar6 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar5 * 0xc) = *(undefined4 *)(puVar1 + 1);
    *(undefined8 *)(param_1 + iVar5 * 0xc) = *puVar1;
    iVar5 = iVar6;
  }
  *(uint *)(param_1 + 8 + iVar5 * 0xc) = param_4[2];
  *(undefined8 *)(param_1 + iVar5 * 0xc) = *(undefined8 *)param_4;
  return;
}


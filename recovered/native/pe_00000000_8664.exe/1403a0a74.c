/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403a0a74 */

void FUN_1403a0a74(longlong param_1,ulonglong *param_2,float *param_3,char param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  ulonglong uVar11;
  
  fVar10 = *param_3;
  fVar1 = param_3[1];
  uVar11 = *param_2;
  fVar9 = fVar1;
  if (param_4 != '\0') {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(param_1 + 0x60);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar11;
    auVar13 = maxps(auVar12,auVar13);
    uVar11 = auVar13._0_8_;
    fVar9 = *(float *)(param_1 + 0x68);
    if (fVar10 <= *(float *)(param_1 + 0x68)) {
      fVar9 = fVar10;
    }
    fVar10 = fVar9;
    fVar9 = *(float *)(param_1 + 0x6c);
    if (fVar1 <= *(float *)(param_1 + 0x6c)) {
      fVar9 = fVar1;
    }
  }
  uVar7 = FUN_140313933((int)uVar11,fVar10);
  uVar8 = FUN_140313933((int)(uVar11 >> 0x20),fVar9);
  iVar2 = *(int *)(param_1 + 0xa0);
  if (iVar2 == *(int *)(param_1 + 0xa4)) {
    if (iVar2 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar2 / 2 + iVar2;
    }
    iVar6 = iVar2 + 1;
    if (iVar2 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar3 = FUN_14030fcc8((longlong)iVar6 << 4);
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1404b97c0(lVar3,*(longlong *)(param_1 + 0xa8),(longlong)*(int *)(param_1 + 0xa0) << 4);
      FUN_14030fda4(*(undefined8 *)(param_1 + 0xa8));
    }
    *(longlong *)(param_1 + 0xa8) = lVar3;
    *(int *)(param_1 + 0xa4) = iVar6;
    iVar2 = *(int *)(param_1 + 0xa0);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  lVar4 = (longlong)iVar2 * 0x10;
  *(ulonglong *)(lVar3 + lVar4) = uVar11;
  *(undefined4 *)(lVar3 + 8 + lVar4) = uVar7;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = uVar8;
  *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
  *(ulonglong *)(param_1 + 0x60) = uVar11;
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)(param_1 + 0x6c) = uVar8;
  FUN_1403a087a(param_1);
  return;
}


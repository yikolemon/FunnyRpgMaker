/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101881b4 */

void __thiscall FUN_101881b4(int param_1,ulonglong *param_2,float *param_3,char param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float local_2c;
  undefined4 uStack_18;
  ulonglong uVar8;
  
  fVar1 = *param_3;
  local_2c = param_3[1];
  uVar8 = *param_2;
  fVar7 = fVar1;
  if (param_4 != '\0') {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = *(ulonglong *)(param_1 + 0x48);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar8;
    auVar10 = maxps(auVar9,auVar10);
    uVar8 = auVar10._0_8_;
    fVar7 = *(float *)(param_1 + 0x50);
    if (fVar1 <= *(float *)(param_1 + 0x50)) {
      fVar7 = fVar1;
    }
    if (*(float *)(param_1 + 0x54) < local_2c) {
      local_2c = *(float *)(param_1 + 0x54);
    }
  }
  fVar5 = (float10)FUN_100fdbca((int)uVar8,fVar7);
  uStack_18 = (undefined4)(uVar8 >> 0x20);
  fVar6 = (float10)FUN_100fdbca(uStack_18,local_2c);
  iVar2 = *(int *)(param_1 + 0x84);
  if (iVar2 == *(int *)(param_1 + 0x88)) {
    if (iVar2 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar2 / 2 + iVar2;
    }
    iVar4 = iVar2 + 1;
    if (iVar2 + 1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = FUN_100fa1fa(iVar4 << 4);
    if (*(int *)(param_1 + 0x8c) != 0) {
      FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x8c),*(int *)(param_1 + 0x84) << 4);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x8c));
    }
    *(int *)(param_1 + 0x8c) = iVar3;
    *(int *)(param_1 + 0x88) = iVar4;
    iVar2 = *(int *)(param_1 + 0x84);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x8c);
  }
  iVar2 = iVar2 * 0x10;
  *(ulonglong *)(iVar3 + iVar2) = uVar8;
  *(float *)(iVar3 + 8 + iVar2) = (float)fVar5;
  *(float *)(iVar3 + 0xc + iVar2) = (float)fVar6;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  *(ulonglong *)(param_1 + 0x48) = uVar8;
  *(float *)(param_1 + 0x50) = (float)fVar5;
  *(float *)(param_1 + 0x54) = (float)fVar6;
  FUN_10187fc8();
  return;
}


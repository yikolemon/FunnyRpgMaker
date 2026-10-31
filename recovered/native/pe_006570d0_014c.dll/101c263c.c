/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c263c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_101c263c(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  longlong lVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  uint local_1c;
  uint local_18;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 (*) [16])(iVar1 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(iVar1 + 0xc) = (undefined1  [16])0x0;
    *(undefined4 *)(iVar1 + 0x10) = 0x10000;
    *(undefined4 *)(iVar1 + 0x14) = 0x10000;
    goto LAB_101c28c4;
  }
  switch(*param_2) {
  case 0:
    local_18 = (uint)*(ushort *)(param_1 + 0x44);
    local_1c = local_18;
    goto LAB_101c2717;
  case 1:
    uVar3 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
    uVar9 = uVar3;
    break;
  case 2:
    uVar3 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x34);
    uVar9 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
    break;
  case 3:
    uVar3 = (uint)*(short *)(param_1 + 0x4c);
    uVar9 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
    break;
  case 4:
    iVar5 = param_2[1];
    *(int *)(iVar1 + 0x10) = iVar5;
    iVar4 = param_2[2];
    *(int *)(iVar1 + 0x14) = iVar4;
    if (iVar5 == 0) {
      *(int *)(iVar1 + 0x10) = iVar4;
      auVar12 = (undefined1  [16])0x0;
      iVar5 = iVar4;
    }
    else {
      auVar12 = (undefined1  [16])0x0;
      if (iVar4 == 0) {
        *(int *)(iVar1 + 0x14) = iVar5;
      }
    }
    goto LAB_101c2834;
  default:
    local_18 = 0;
    local_1c = 0;
    goto LAB_101c2717;
  }
  local_18 = -uVar3;
  if ((int)-uVar3 < 0) {
    local_18 = uVar3;
  }
  local_1c = -uVar9;
  if ((int)-uVar9 < 0) {
    local_1c = uVar9;
  }
LAB_101c2717:
  iVar4 = param_2[1];
  iVar5 = iVar4;
  if (param_2[3] != 0) {
    iVar5 = (param_2[3] * iVar4 + 0x24) / 0x48;
  }
  iVar7 = param_2[2];
  iVar6 = iVar7;
  if (param_2[4] != 0) {
    iVar6 = (param_2[4] * iVar7 + 0x24) / 0x48;
  }
  if (iVar4 == 0 || iVar7 != 0) {
    if (local_1c == 0) {
      return 0x85;
    }
    uVar8 = FUN_101c2523(iVar6,local_1c);
    *(undefined4 *)(iVar1 + 0x14) = uVar8;
    if (param_2[1] != 0) goto LAB_101c279a;
    iVar4 = *(int *)(iVar1 + 0x14);
    *(int *)(iVar1 + 0x10) = iVar4;
    iVar5 = FUN_101c16ea(iVar6,local_18,local_1c);
  }
  else {
LAB_101c279a:
    if (local_18 == 0) {
      return 0x85;
    }
    iVar4 = FUN_101c2523(iVar5,local_18);
    *(int *)(iVar1 + 0x10) = iVar4;
  }
  if (param_2[2] == 0) {
    *(int *)(iVar1 + 0x14) = iVar4;
    iVar6 = FUN_101c16ea(iVar5,local_1c,local_18);
  }
  iVar7 = *param_2;
  auVar12._4_4_ = iVar6;
  auVar12._0_4_ = iVar5;
  auVar12._8_8_ = 0;
  if (iVar7 == 3) {
    iVar5 = *(int *)(iVar1 + 0x14);
    if (iVar4 < iVar5) {
      *(int *)(iVar1 + 0x14) = iVar4;
      iVar5 = iVar4;
    }
    else {
      *(int *)(iVar1 + 0x10) = iVar5;
    }
LAB_101c2834:
    iVar7 = *param_2;
    iVar4 = iVar5;
  }
  if (iVar7 != 0) {
    lVar13 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x44) * (longlong)*(int *)(iVar1 + 0x14);
    lVar2 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x44) * (longlong)iVar4;
    iVar4 = (int)((ulonglong)lVar2 >> 0x20);
    auVar10._0_8_ = CONCAT44(iVar4 >> 0x1f,iVar4 >> 0x1f);
    auVar10._8_4_ = (int)(lVar13 >> 0x3f);
    auVar10._12_4_ = auVar10._8_4_;
    lVar13 = auVar10._8_8_ + lVar13 + _UNK_10302e78;
    auVar12._0_4_ = (undefined4)((ulonglong)(auVar10._0_8_ + lVar2 + _DAT_10302e70) >> 0x10);
    auVar12._8_4_ = (undefined4)((ulonglong)lVar13 >> 0x10);
    auVar12._4_4_ = auVar12._8_4_;
    auVar12._12_2_ = (short)((ulonglong)lVar13 >> 0x30);
    auVar12._14_2_ = 0;
  }
  auVar11._0_4_ = auVar12._0_4_ + _DAT_10302e80 >> 6;
  auVar11._4_4_ = auVar12._4_4_ + _UNK_10302e84 >> 6;
  auVar11._8_4_ = auVar12._8_4_ + _UNK_10302e88 >> 6;
  auVar11._12_4_ = auVar12._12_4_ + _UNK_10302e8c >> 6;
  auVar14._0_4_ = -(uint)(_DAT_10294590 < auVar11._0_4_);
  auVar14._4_4_ = -(uint)(_UNK_10294594 < auVar11._0_4_);
  auVar14._8_4_ = -(uint)(_UNK_10294598 < auVar11._4_4_);
  auVar14._12_4_ = -(uint)(_UNK_1029459c < auVar11._4_4_);
  iVar4 = movmskpd(iVar4,auVar14);
  uVar8 = 0x17;
  if (iVar4 == 0) {
    auVar12 = pshuflw(auVar11,auVar11,0xe8);
    *(int *)(iVar1 + 0xc) = auVar12._0_4_;
    FUN_101c25a7();
LAB_101c28c4:
    uVar8 = 0;
  }
  return uVar8;
}


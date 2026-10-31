/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041ebb9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_0041ebb9(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  longlong lVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  uint local_1c;
  uint local_18;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 (*) [16])(iVar1 + 0x18) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(iVar1 + 0xc) = (undefined1  [16])0x0;
    *(undefined4 *)(iVar1 + 0x10) = 0x10000;
    *(undefined4 *)(iVar1 + 0x14) = 0x10000;
    goto LAB_0041ee41;
  }
  switch(*param_2) {
  case 0:
    local_18 = (uint)*(ushort *)(param_1 + 0x44);
    local_1c = local_18;
    goto LAB_0041ec94;
  case 1:
    uVar5 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
    uVar10 = uVar5;
    break;
  case 2:
    uVar5 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x34);
    uVar10 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
    break;
  case 3:
    uVar5 = (uint)*(short *)(param_1 + 0x4c);
    uVar10 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
    break;
  case 4:
    iVar9 = param_2[1];
    *(int *)(iVar1 + 0x10) = iVar9;
    iVar4 = param_2[2];
    *(int *)(iVar1 + 0x14) = iVar4;
    if (iVar9 == 0) {
      *(int *)(iVar1 + 0x10) = iVar4;
      auVar13 = (undefined1  [16])0x0;
      iVar9 = iVar4;
    }
    else {
      auVar13 = (undefined1  [16])0x0;
      if (iVar4 == 0) {
        *(int *)(iVar1 + 0x14) = iVar9;
      }
    }
    goto LAB_0041edb1;
  default:
    local_18 = 0;
    local_1c = 0;
    goto LAB_0041ec94;
  }
  local_18 = -uVar5;
  if ((int)-uVar5 < 0) {
    local_18 = uVar5;
  }
  local_1c = -uVar10;
  if ((int)-uVar10 < 0) {
    local_1c = uVar10;
  }
LAB_0041ec94:
  uVar10 = param_2[1];
  uVar5 = uVar10;
  if (param_2[3] != 0) {
    uVar5 = (int)(param_2[3] * uVar10 + 0x24) / 0x48;
  }
  uVar2 = param_2[2];
  uVar6 = uVar2;
  if (param_2[4] != 0) {
    uVar6 = (int)(param_2[4] * uVar2 + 0x24) / 0x48;
  }
  if (uVar10 == 0 || uVar2 != 0) {
    if (local_1c == 0) {
      return 0x85;
    }
    iVar4 = FUN_0041eaa0(uVar6,local_1c);
    *(int *)(iVar1 + 0x14) = iVar4;
    if (param_2[1] != 0) goto LAB_0041ed17;
    iVar4 = *(int *)(iVar1 + 0x14);
    *(int *)(iVar1 + 0x10) = iVar4;
    uVar5 = FUN_0041dcda(uVar6,local_18,local_1c);
  }
  else {
LAB_0041ed17:
    if (local_18 == 0) {
      return 0x85;
    }
    iVar4 = FUN_0041eaa0(uVar5,local_18);
    *(int *)(iVar1 + 0x10) = iVar4;
  }
  if (param_2[2] == 0) {
    *(int *)(iVar1 + 0x14) = iVar4;
    uVar6 = FUN_0041dcda(uVar5,local_1c,local_18);
  }
  iVar7 = *param_2;
  auVar13._4_4_ = uVar6;
  auVar13._0_4_ = uVar5;
  auVar13._8_8_ = 0;
  if (iVar7 == 3) {
    iVar9 = *(int *)(iVar1 + 0x14);
    if (iVar4 < iVar9) {
      *(int *)(iVar1 + 0x14) = iVar4;
      iVar9 = iVar4;
    }
    else {
      *(int *)(iVar1 + 0x10) = iVar9;
    }
LAB_0041edb1:
    iVar7 = *param_2;
    iVar4 = iVar9;
  }
  if (iVar7 != 0) {
    lVar14 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x44) * (longlong)*(int *)(iVar1 + 0x14);
    lVar3 = (longlong)(int)(uint)*(ushort *)(param_1 + 0x44) * (longlong)iVar4;
    iVar4 = (int)((ulonglong)lVar3 >> 0x20);
    auVar11._0_8_ = CONCAT44(iVar4 >> 0x1f,iVar4 >> 0x1f);
    auVar11._8_4_ = (int)(lVar14 >> 0x3f);
    auVar11._12_4_ = auVar11._8_4_;
    lVar14 = auVar11._8_8_ + lVar14 + _UNK_004d7418;
    auVar13._0_4_ = (undefined4)((ulonglong)(auVar11._0_8_ + lVar3 + _DAT_004d7410) >> 0x10);
    auVar13._8_4_ = (undefined4)((ulonglong)lVar14 >> 0x10);
    auVar13._4_4_ = auVar13._8_4_;
    auVar13._12_2_ = (short)((ulonglong)lVar14 >> 0x30);
    auVar13._14_2_ = 0;
  }
  auVar12._0_4_ = auVar13._0_4_ + _DAT_004d7420 >> 6;
  auVar12._4_4_ = auVar13._4_4_ + _UNK_004d7424 >> 6;
  auVar12._8_4_ = auVar13._8_4_ + _UNK_004d7428 >> 6;
  auVar12._12_4_ = auVar13._12_4_ + _UNK_004d742c >> 6;
  auVar15._0_4_ = -(uint)(_DAT_004d7430 < auVar12._0_4_);
  auVar15._4_4_ = -(uint)(_UNK_004d7434 < auVar12._0_4_);
  auVar15._8_4_ = -(uint)(_UNK_004d7438 < auVar12._4_4_);
  auVar15._12_4_ = -(uint)(_UNK_004d743c < auVar12._4_4_);
  iVar4 = movmskpd(iVar4,auVar15);
  uVar8 = 0x17;
  if (iVar4 == 0) {
    auVar13 = pshuflw(auVar12,auVar12,0xe8);
    *(undefined4 *)(iVar1 + 0xc) = auVar13._0_4_;
    FUN_0041eb24(param_1,iVar1 + 0xc);
LAB_0041ee41:
    uVar8 = 0;
  }
  return uVar8;
}


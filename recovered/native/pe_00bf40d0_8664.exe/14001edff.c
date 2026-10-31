/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001edff */

undefined8 FUN_14001edff(longlong param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined8 *)(lVar3 + 0x24) = 0;
    *(undefined8 *)(lVar3 + 0x2c) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *(undefined8 *)(lVar3 + 0x1c) = 0x1000000010000;
    goto LAB_14001f05c;
  }
  switch(*param_2) {
  case 0:
    uVar10 = (uint)*(ushort *)(param_1 + 0x68);
    uVar4 = (uint)*(ushort *)(param_1 + 0x68);
    goto LAB_14001eedb;
  case 1:
    uVar4 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
    uVar6 = uVar4;
    break;
  case 2:
    uVar4 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
    uVar6 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
    break;
  case 3:
    uVar4 = (uint)*(short *)(param_1 + 0x70);
    uVar6 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
    break;
  case 4:
    iVar12 = param_2[1];
    *(int *)(lVar3 + 0x1c) = iVar12;
    iVar5 = param_2[2];
    *(int *)(lVar3 + 0x20) = iVar5;
    if (iVar12 == 0) {
      *(int *)(lVar3 + 0x1c) = iVar5;
      iVar12 = iVar5;
    }
    else if (iVar5 == 0) {
      *(int *)(lVar3 + 0x20) = iVar12;
    }
    uVar6 = 0;
    uVar7 = 0;
    goto LAB_14001efde;
  default:
    uVar10 = 0;
    uVar4 = 0;
    goto LAB_14001eedb;
  }
  uVar10 = -uVar4;
  if ((int)-uVar4 < 0) {
    uVar10 = uVar4;
  }
  uVar4 = -uVar6;
  if ((int)-uVar6 < 0) {
    uVar4 = uVar6;
  }
LAB_14001eedb:
  uVar1 = param_2[1];
  uVar6 = uVar1;
  if (param_2[3] != 0) {
    uVar6 = (int)(param_2[3] * uVar1 + 0x24) / 0x48;
  }
  uVar2 = param_2[2];
  uVar7 = uVar2;
  if (param_2[4] != 0) {
    uVar7 = (int)(param_2[4] * uVar2 + 0x24) / 0x48;
  }
  if (uVar1 == 0 || uVar2 != 0) {
    if (uVar4 == 0) {
      return 0x85;
    }
    iVar5 = FUN_14001ecff(uVar7,uVar4);
    *(int *)(lVar3 + 0x20) = iVar5;
    if (param_2[1] != 0) goto LAB_14001ef5a;
    iVar5 = *(int *)(lVar3 + 0x20);
    *(int *)(lVar3 + 0x1c) = iVar5;
    uVar6 = FUN_14001de7c(uVar7,uVar10,uVar4);
  }
  else {
LAB_14001ef5a:
    if (uVar10 == 0) {
      return 0x85;
    }
    iVar5 = FUN_14001ecff(uVar6,uVar10);
    *(int *)(lVar3 + 0x1c) = iVar5;
  }
  if (param_2[2] == 0) {
    *(int *)(lVar3 + 0x20) = iVar5;
    uVar7 = FUN_14001de7c(uVar6,uVar4,uVar10);
  }
  iVar8 = *param_2;
  iVar12 = iVar5;
  if (iVar8 == 3) {
    iVar12 = *(int *)(lVar3 + 0x20);
    if (iVar5 < iVar12) {
      *(int *)(lVar3 + 0x20) = iVar5;
      iVar12 = iVar5;
    }
    else {
      *(int *)(lVar3 + 0x1c) = iVar12;
    }
LAB_14001efde:
    iVar8 = *param_2;
  }
  if (iVar8 != 0) {
    lVar11 = (longlong)iVar12 * (ulonglong)*(ushort *)(param_1 + 0x68);
    uVar6 = (uint)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
    lVar11 = (longlong)*(int *)(lVar3 + 0x20) * (ulonglong)*(ushort *)(param_1 + 0x68);
    uVar7 = (uint)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
  }
  iVar5 = (int)(uVar6 + 0x20) >> 6;
  uVar9 = 0x17;
  if ((iVar5 < 0x10000) && (iVar12 = (int)(uVar7 + 0x20) >> 6, iVar12 < 0x10000)) {
    *(short *)(lVar3 + 0x18) = (short)iVar5;
    *(short *)(lVar3 + 0x1a) = (short)iVar12;
    FUN_14001ed60(param_1,lVar3 + 0x18);
LAB_14001f05c:
    uVar9 = 0;
  }
  return uVar9;
}


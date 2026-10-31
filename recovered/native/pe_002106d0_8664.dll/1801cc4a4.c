/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc4a4 */

undefined8 FUN_1801cc4a4(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined8 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x1c) = 0x1000000010000;
    goto LAB_1801cc701;
  }
  switch(*param_2) {
  case 0:
    uVar9 = (uint)*(ushort *)(param_1 + 0x68);
    uVar2 = (uint)*(ushort *)(param_1 + 0x68);
    goto LAB_1801cc580;
  case 1:
    uVar2 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
    uVar8 = uVar2;
    break;
  case 2:
    uVar2 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
    uVar8 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
    break;
  case 3:
    uVar2 = (uint)*(short *)(param_1 + 0x70);
    uVar8 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
    break;
  case 4:
    iVar12 = param_2[1];
    *(int *)(lVar1 + 0x1c) = iVar12;
    iVar10 = param_2[2];
    *(int *)(lVar1 + 0x20) = iVar10;
    if (iVar12 == 0) {
      *(int *)(lVar1 + 0x1c) = iVar10;
      iVar12 = iVar10;
    }
    else if (iVar10 == 0) {
      *(int *)(lVar1 + 0x20) = iVar12;
    }
    iVar10 = 0;
    iVar5 = 0;
    goto LAB_1801cc683;
  default:
    uVar9 = 0;
    uVar2 = 0;
    goto LAB_1801cc580;
  }
  uVar9 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar9 = uVar2;
  }
  uVar2 = -uVar8;
  if ((int)-uVar8 < 0) {
    uVar2 = uVar8;
  }
LAB_1801cc580:
  iVar12 = param_2[1];
  iVar10 = iVar12;
  if (param_2[3] != 0) {
    iVar10 = (param_2[3] * iVar12 + 0x24) / 0x48;
  }
  iVar4 = param_2[2];
  iVar5 = iVar4;
  if (param_2[4] != 0) {
    iVar5 = (param_2[4] * iVar4 + 0x24) / 0x48;
  }
  if (iVar12 == 0 || iVar4 != 0) {
    if (uVar2 == 0) {
      return 0x85;
    }
    uVar3 = FUN_1801cc3a4(iVar5,uVar2);
    *(undefined4 *)(lVar1 + 0x20) = uVar3;
    if (param_2[1] != 0) goto LAB_1801cc5ff;
    iVar4 = *(int *)(lVar1 + 0x20);
    *(int *)(lVar1 + 0x1c) = iVar4;
    iVar10 = FUN_1801cb4a4(iVar5,uVar9,uVar2);
  }
  else {
LAB_1801cc5ff:
    if (uVar9 == 0) {
      return 0x85;
    }
    iVar4 = FUN_1801cc3a4(iVar10,uVar9);
    *(int *)(lVar1 + 0x1c) = iVar4;
  }
  if (param_2[2] == 0) {
    *(int *)(lVar1 + 0x20) = iVar4;
    iVar5 = FUN_1801cb4a4(iVar10,uVar2,uVar9);
  }
  iVar6 = *param_2;
  iVar12 = iVar4;
  if (iVar6 == 3) {
    iVar12 = *(int *)(lVar1 + 0x20);
    if (iVar4 < iVar12) {
      *(int *)(lVar1 + 0x20) = iVar4;
      iVar12 = iVar4;
    }
    else {
      *(int *)(lVar1 + 0x1c) = iVar12;
    }
LAB_1801cc683:
    iVar6 = *param_2;
  }
  if (iVar6 != 0) {
    lVar11 = (longlong)iVar12 * (ulonglong)*(ushort *)(param_1 + 0x68);
    iVar10 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
    lVar11 = (longlong)*(int *)(lVar1 + 0x20) * (ulonglong)*(ushort *)(param_1 + 0x68);
    iVar5 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
  }
  iVar10 = iVar10 + 0x20 >> 6;
  uVar7 = 0x17;
  if ((iVar10 < 0x10000) && (iVar12 = iVar5 + 0x20 >> 6, iVar12 < 0x10000)) {
    *(short *)(lVar1 + 0x18) = (short)iVar10;
    *(short *)(lVar1 + 0x1a) = (short)iVar12;
    FUN_1801cc405(param_1,(undefined8 *)(lVar1 + 0x18));
LAB_1801cc701:
    uVar7 = 0;
  }
  return uVar7;
}


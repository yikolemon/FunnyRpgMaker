/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f004b */

void FUN_1801f004b(longlong param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ushort uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  
  uVar2 = *param_2;
  uVar12 = uVar2 & 0xffff;
  if (((uVar12 < *(ushort *)(param_1 + 0x78)) && (param_2[1] + 1 < *(int *)(param_1 + 0x1f8) + 1U))
     && (uVar9 = *(ushort *)(param_1 + 0x18c), uVar9 < *(ushort *)(param_1 + 0x40))) {
    if (param_2[1] == 0xffffffff) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(param_1 + 0x308))(param_1);
      uVar9 = *(ushort *)(param_1 + 0x18c);
    }
    uVar3 = *(uint *)(param_1 + 0x1c8);
    iVar11 = -(uVar6 - uVar3);
    if (iVar11 < 0) {
      iVar11 = uVar6 - uVar3;
    }
    uVar5 = -uVar3;
    if (-1 < (int)uVar6) {
      uVar5 = uVar3;
    }
    if (*(int *)(param_1 + 0x1c4) <= iVar11) {
      uVar5 = uVar6;
    }
    if (*(short *)(param_1 + 0x194) == 0) {
      lVar10 = (longlong)*(short *)(param_1 + 0x1a0) * (longlong)(int)uVar5;
      uVar8 = (ulonglong)(uVar12 * 8);
      *(int *)(*(longlong *)(param_1 + 0x80) + uVar8) =
           (int)((ulonglong)(lVar10 + 0x2000 + (lVar10 >> 0x3f)) >> 0xe) +
           *(int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar9 * 8);
      lVar10 = (longlong)*(short *)(param_1 + 0x1a2) * (longlong)(int)uVar5;
      *(int *)(*(longlong *)(param_1 + 0x80) + 4 + uVar8) =
           (int)((ulonglong)(lVar10 + 0x2000 + (lVar10 >> 0x3f)) >> 0xe) +
           *(int *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)*(ushort *)(param_1 + 0x18c) * 8)
      ;
      *(undefined8 *)(*(longlong *)(param_1 + 0x88) + uVar8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x80) + uVar8);
      uVar9 = *(ushort *)(param_1 + 0x18c);
    }
    uVar8 = (ulonglong)(uVar12 << 3);
    uVar6 = (**(code **)(param_1 + 0x2e0))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x80) + uVar8) -
                               *(int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar9 * 8),
                       *(int *)(*(longlong *)(param_1 + 0x80) + 4 + uVar8) -
                       *(int *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)uVar9 * 8));
    iVar11 = (**(code **)(param_1 + 0x2d8))
                       (param_1,*(int *)(*(longlong *)(param_1 + 0x88) + uVar8) -
                                *(int *)(*(longlong *)(param_1 + 0x50) +
                                        (ulonglong)*(ushort *)(param_1 + 0x18c) * 8),
                        *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar8) -
                        *(int *)(*(longlong *)(param_1 + 0x50) + 4 +
                                (ulonglong)*(ushort *)(param_1 + 0x18c) * 8));
    uVar12 = -uVar5;
    if (-1 < (int)(uVar6 ^ uVar5)) {
      uVar12 = uVar5;
    }
    if (*(char *)(param_1 + 0x1d0) == '\0') {
      uVar12 = uVar5;
    }
    bVar1 = *(byte *)(param_1 + 0x1f0);
    if ((bVar1 & 4) == 0) {
      iVar7 = FUN_1801f8f39();
    }
    else {
      if (*(short *)(param_1 + 0x192) == *(short *)(param_1 + 0x194)) {
        iVar7 = -(uVar12 - uVar6);
        if (iVar7 < 0) {
          iVar7 = uVar12 - uVar6;
        }
        if (*(int *)(param_1 + 0x1c0) < iVar7) {
          uVar12 = uVar6;
        }
      }
      iVar7 = (**(code **)(param_1 + 0x2c8))
                        (param_1,uVar12,
                         *(undefined4 *)(param_1 + 0x1ac + (ulonglong)(bVar1 & 3) * 4));
      bVar1 = *(byte *)(param_1 + 0x1f0);
    }
    if ((bVar1 & 8) != 0) {
      iVar4 = *(int *)(param_1 + 0x1bc);
      if ((int)uVar6 < 0) {
        if (-iVar4 <= iVar7) {
          iVar7 = -iVar4;
        }
      }
      else if (iVar7 <= iVar4) {
        iVar7 = iVar4;
      }
    }
    (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x78,uVar2,iVar7 - iVar11);
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  *(undefined2 *)(param_1 + 0x18e) = *(undefined2 *)(param_1 + 0x18c);
  *(short *)(param_1 + 400) = (short)uVar2;
  if ((*(byte *)(param_1 + 0x1f0) & 0x10) != 0) {
    *(short *)(param_1 + 0x18c) = (short)uVar2;
  }
  return;
}


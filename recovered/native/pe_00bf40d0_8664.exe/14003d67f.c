/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003d67f */

void FUN_14003d67f(longlong param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  
  uVar2 = *param_2;
  uVar11 = uVar2 & 0xffff;
  if (((uVar11 < *(ushort *)(param_1 + 0x78)) && (param_2[1] + 1 < *(int *)(param_1 + 0x1f8) + 1U))
     && (uVar7 = *(ushort *)(param_1 + 0x18c), uVar7 < *(ushort *)(param_1 + 0x40))) {
    if (param_2[1] == 0xffffffff) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(param_1 + 0x308))(param_1);
      uVar7 = *(ushort *)(param_1 + 0x18c);
    }
    uVar3 = *(uint *)(param_1 + 0x1c8);
    iVar10 = -(uVar5 - uVar3);
    if (iVar10 < 0) {
      iVar10 = uVar5 - uVar3;
    }
    uVar4 = -uVar3;
    if (-1 < (int)uVar5) {
      uVar4 = uVar3;
    }
    if (*(int *)(param_1 + 0x1c4) <= iVar10) {
      uVar4 = uVar5;
    }
    if (*(short *)(param_1 + 0x194) == 0) {
      lVar9 = (longlong)*(short *)(param_1 + 0x1a0) * (longlong)(int)uVar4;
      uVar6 = (ulonglong)(uVar11 * 8);
      *(int *)(*(longlong *)(param_1 + 0x80) + uVar6) =
           (int)((ulonglong)(lVar9 + 0x2000 + (lVar9 >> 0x3f)) >> 0xe) +
           *(int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar7 * 8);
      lVar9 = (longlong)*(short *)(param_1 + 0x1a2) * (longlong)(int)uVar4;
      *(int *)(*(longlong *)(param_1 + 0x80) + 4 + uVar6) =
           (int)((ulonglong)(lVar9 + 0x2000 + (lVar9 >> 0x3f)) >> 0xe) +
           *(int *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)*(ushort *)(param_1 + 0x18c) * 8)
      ;
      *(undefined8 *)(*(longlong *)(param_1 + 0x88) + uVar6) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x80) + uVar6);
      uVar7 = *(ushort *)(param_1 + 0x18c);
    }
    uVar6 = (ulonglong)(uVar11 << 3);
    uVar5 = (**(code **)(param_1 + 0x2e0))
                      (param_1,*(int *)(*(longlong *)(param_1 + 0x80) + uVar6) -
                               *(int *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar7 * 8),
                       *(int *)(*(longlong *)(param_1 + 0x80) + 4 + uVar6) -
                       *(int *)(*(longlong *)(param_1 + 0x48) + 4 + (ulonglong)uVar7 * 8));
    iVar10 = (**(code **)(param_1 + 0x2d8))
                       (param_1,*(int *)(*(longlong *)(param_1 + 0x88) + uVar6) -
                                *(int *)(*(longlong *)(param_1 + 0x50) +
                                        (ulonglong)*(ushort *)(param_1 + 0x18c) * 8),
                        *(int *)(*(longlong *)(param_1 + 0x88) + 4 + uVar6) -
                        *(int *)(*(longlong *)(param_1 + 0x50) + 4 +
                                (ulonglong)*(ushort *)(param_1 + 0x18c) * 8));
    uVar11 = -uVar4;
    if (-1 < (int)(uVar5 ^ uVar4)) {
      uVar11 = uVar4;
    }
    if (*(char *)(param_1 + 0x1d0) == '\0') {
      uVar11 = uVar4;
    }
    bVar1 = *(byte *)(param_1 + 0x1f0);
    if ((bVar1 & 4) == 0) {
      uVar11 = FUN_14004656d((ulonglong)(uVar5 ^ uVar4),uVar11,
                             *(int *)(param_1 + 0x1ac + (ulonglong)(bVar1 & 3) * 4));
    }
    else {
      if (*(short *)(param_1 + 0x192) == *(short *)(param_1 + 0x194)) {
        iVar8 = -(uVar11 - uVar5);
        if (iVar8 < 0) {
          iVar8 = uVar11 - uVar5;
        }
        if (*(int *)(param_1 + 0x1c0) < iVar8) {
          uVar11 = uVar5;
        }
      }
      uVar11 = (**(code **)(param_1 + 0x2c8))(param_1,uVar11);
      bVar1 = *(byte *)(param_1 + 0x1f0);
    }
    if ((bVar1 & 8) != 0) {
      uVar3 = *(uint *)(param_1 + 0x1bc);
      if ((int)uVar5 < 0) {
        if ((int)-uVar3 <= (int)uVar11) {
          uVar11 = -uVar3;
        }
      }
      else if ((int)uVar11 <= (int)uVar3) {
        uVar11 = uVar3;
      }
    }
    (**(code **)(param_1 + 0x2f0))(param_1,param_1 + 0x78,uVar2,uVar11 - iVar10);
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


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e4a1a */

void FUN_1801e4a1a(longlong param_1,int param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  short sVar14;
  
  lVar1 = param_1 + (param_4 & 0xffffffff) * 0x898;
  uVar11 = *(ulonglong *)(lVar1 + 0x50);
  iVar7 = 0;
  if (uVar11 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = uVar11 + (ulonglong)*(uint *)(lVar1 + 0x48) * 0x48;
  }
  if (param_2 != 0) {
    iVar7 = *(int *)(param_3 + (ulonglong)(param_2 - 1) * 0xc);
  }
  uVar10 = *(uint *)(*(longlong *)(param_1 + 0x1180) + 0x40);
  uVar5 = uVar10;
  if ((int)uVar10 < 0) {
    uVar5 = uVar10 + 0xff;
  }
  iVar8 = 1;
  if (0x1fe < uVar10 + 0xff) {
    iVar8 = (int)uVar5 >> 8;
  }
  iVar3 = uVar10 * 6000;
  iVar4 = iVar3 + 0x7ff;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  if (uVar11 < uVar12) {
    uVar6 = uVar11;
    do {
      uVar13 = uVar11;
      if (*(int *)(lVar1 + 0x68) == (int)*(char *)(uVar6 + 1)) {
        do {
          if (*(short *)(uVar6 + 2) < *(short *)(uVar13 + 2) &&
              (int)*(char *)(uVar13 + 1) + (int)*(char *)(uVar6 + 1) == 0) {
            sVar2 = (short)*(undefined4 *)(uVar6 + 8);
            sVar14 = *(short *)(uVar13 + 6);
            if (*(short *)(uVar13 + 6) < *(short *)(uVar6 + 6)) {
              sVar14 = *(short *)(uVar6 + 6);
            }
            sVar9 = (short)*(undefined4 *)(uVar13 + 8);
            if (sVar2 < sVar9) {
              sVar9 = sVar2;
            }
            if (iVar8 <= (int)sVar9 - (int)sVar14) {
              uVar10 = (int)*(short *)(uVar13 + 2) - (int)*(short *)(uVar6 + 2);
              if (iVar7 != 0) {
                iVar3 = (int)(uVar10 * 0x400) / iVar7;
                uVar10 = 32000;
                if ((iVar3 < 0x2b11) && (uVar10 = 0, 0x400 < iVar3)) {
                  uVar10 = (uint)((iVar3 + -0x400) * (iVar3 + -0x400)) / 3000;
                }
              }
              iVar3 = (int)(CONCAT44(iVar4 >> 0x1f,iVar4 >> 0xb) /
                           (longlong)((int)sVar9 - (int)sVar14)) + uVar10;
              if (iVar3 < *(int *)(uVar6 + 0x30)) {
                *(int *)(uVar6 + 0x30) = iVar3;
                *(ulonglong *)(uVar6 + 0x20) = uVar13;
              }
              if (iVar3 < *(int *)(uVar13 + 0x30)) {
                *(int *)(uVar13 + 0x30) = iVar3;
                *(ulonglong *)(uVar13 + 0x20) = uVar6;
              }
            }
          }
          uVar13 = uVar13 + 0x48;
        } while (uVar13 < uVar12);
      }
      uVar6 = uVar6 + 0x48;
    } while (uVar6 < uVar12);
    do {
      lVar1 = *(longlong *)(uVar11 + 0x20);
      if ((lVar1 != 0) && (uVar11 != *(ulonglong *)(lVar1 + 0x20))) {
        *(undefined8 *)(uVar11 + 0x20) = 0;
        *(undefined8 *)(uVar11 + 0x28) = *(undefined8 *)(lVar1 + 0x20);
      }
      uVar11 = uVar11 + 0x48;
    } while (uVar11 < uVar12);
  }
  return;
}


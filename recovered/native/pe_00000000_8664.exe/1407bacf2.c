/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bacf2 */

void FUN_1407bacf2(void)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  short sVar5;
  short sVar6;
  uint unaff_EBX;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong auStack_30 [2];
  ulonglong uVar4;
  
  uVar14 = (ulonglong)unaff_EBX;
  bVar1 = *(byte *)(uVar14 + 0x1f0);
  if (bVar1 == 1) {
    auStack_30[0] = uVar14;
    FUN_1407bdac6();
    uVar8 = (ulonglong)((int)auStack_30 + 4);
    iVar12 = *(int *)(uVar14 + 0x1a0);
    sVar5 = (short)*(undefined4 *)(uVar14 + 0x1b4);
    sVar6 = 0;
    if (1 < sVar5) {
      sVar6 = sVar5;
    }
    iVar11 = (int)sVar6;
    if (iVar12 < iVar11) {
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar12 <= iVar11) {
        iVar12 = iVar11;
      }
      *(ulonglong *)(uVar8 - 8) = (ulonglong)(uint)(iVar12 * 0xc);
      *(undefined8 *)(uVar8 - 0x10) = 0x1407bad5a;
      uVar3 = FUN_1407520ca();
      uVar9 = (ulonglong)((int)(uVar8 - 8) + 4);
      uVar2 = *(uint *)(uVar14 + 0x1a4);
      if (uVar2 != 0) {
        *(ulonglong *)(uVar9 - 8) = (ulonglong)(uint)(*(int *)(uVar14 + 0x19c) * 0xc);
        *(ulonglong *)(uVar9 - 0x10) = (ulonglong)uVar2;
        *(undefined8 *)(uVar9 - 0x18) = uVar3;
        *(int *)(uVar9 - 0xc) = (int)uVar3;
        *(undefined8 *)(uVar9 - 0x20) = 0x1407bad7f;
        FUN_1408b31a0();
        uVar10 = (ulonglong)((int)(uVar9 - 0x18) + 0xc);
        *(undefined8 *)(uVar10 - 8) = *(undefined8 *)(uVar14 + 0x1a4);
                    /* WARNING: Subroutine does not return */
        *(undefined **)(uVar10 - 0x10) = &UNK_1407bad8d;
        FUN_14075219b();
      }
      *(int *)(uVar14 + 0x1a4) = (int)uVar3;
      *(int *)(uVar14 + 0x1a0) = iVar12;
    }
    *(int *)(uVar14 + 0x19c) = iVar11;
    *(undefined1 *)(uVar14 + 0x1b0) = 1;
    *(undefined1 *)(uVar14 + 0x1f0) = 0;
  }
  sVar6 = *(short *)(uVar14 + 0x1b4);
  if (sVar6 == 0) {
    uVar2 = 0;
  }
  else {
    if (sVar6 == 1) {
      uVar2 = unaff_EBX + 400;
    }
    else {
      uVar2 = *(uint *)(uVar14 + 0x1a4);
    }
    uVar4 = (ulonglong)uVar2;
    if (((bVar1 & uVar2 != 0) == 1) && (iVar12 = *(int *)(uVar14 + 0x40), 0 < iVar12)) {
      do {
        uVar7 = (ulonglong)*(uint *)(uVar14 + 0x10);
        if (*(short *)(uVar7 + 0x5e) != -1) {
          uVar13 = (ulonglong)(uint)(*(short *)(uVar7 + 0x5e) * 3);
          *(undefined4 *)(uVar4 + uVar13 * 4) = *(undefined4 *)(uVar7 + 0x34);
          *(undefined2 *)(uVar4 + 4 + uVar13 * 4) = 0;
          *(undefined2 *)(uVar4 + 6 + uVar13 * 4) = *(undefined2 *)(uVar7 + 0x5e);
          *(byte *)(uVar4 + 8 + uVar13 * 4) = *(byte *)(uVar7 + 0x71) & 3;
          iVar12 = *(int *)(uVar14 + 0x40);
        }
      } while (0 < iVar12);
      sVar6 = *(short *)(uVar14 + 0x1b4);
    }
  }
  *(uint *)(uVar14 + 0x1a8) = uVar2;
  *(int *)(uVar14 + 0x1ac) = (int)sVar6;
  return;
}


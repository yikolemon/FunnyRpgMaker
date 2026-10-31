/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140764514 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140764514(void)

{
  ushort *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  puVar7 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x40);
  uVar11 = (ulonglong)_DAT_150b01c78;
  *puVar7 = *(undefined4 *)(uVar11 + 0x1458);
  uVar3 = *(uint *)(uVar11 + 0x14cc);
  uVar10 = (ulonglong)uVar3;
  *(undefined4 *)(uVar11 + 0x1458) = *(undefined4 *)(uVar10 + 8);
  fVar13 = *(float *)(uVar10 + 0x58);
  uVar12 = *(undefined8 *)(uVar10 + 0x58);
  puVar7[0xe] = *(undefined4 *)(uVar10 + 0x5c);
  puVar7[0xd] = fVar13;
  *(undefined8 *)(puVar7 + -2) = 0x140764557;
  FUN_140762c14();
  if (*(short *)(uVar10 + 0x108) != 1) {
    uVar12 = *(undefined8 *)(uVar10 + 0x50);
    uVar2 = *(undefined8 *)(uVar10 + 0x58);
    *(undefined8 *)((ulonglong)(puVar7 + 9) & 0xffffffff) = uVar12;
    ((undefined8 *)((ulonglong)(puVar7 + 9) & 0xffffffff))[1] =
         CONCAT44((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar12 >> 0x20),
                  (float)uVar2 + (float)uVar12);
    *(undefined8 *)(puVar7 + -2) = 0x1407645ec;
    FUN_140764a43(uVar10);
    goto LAB_1407646aa;
  }
  uVar5 = *(uint *)(uVar11 + 0x14cc);
  uVar2 = *(undefined8 *)((ulonglong)uVar5 + 0x144);
  uVar12 = CONCAT44((float)((ulonglong)uVar12 >> 0x20) + (float)((ulonglong)uVar2 >> 0x20),
                    fVar13 + (float)uVar2);
  *(undefined8 *)(puVar7 + 1) = uVar2;
  *(undefined8 *)(puVar7 + 3) = uVar12;
  *(undefined8 *)(puVar7 + 9) = uVar2;
  *(undefined8 *)(puVar7 + 0xb) = uVar12;
  *(undefined8 *)(puVar7 + -2) = 0xffffffffbf800000;
  *(ulonglong *)(puVar7 + -4) = (ulonglong)(puVar7 + 0xd) & 0xffffffff;
  *(undefined8 *)(puVar7 + -6) = 0x14076459c;
  FUN_1407646e0();
  uVar8 = (ulonglong)((int)(puVar7 + -4) + 8);
  uVar4 = *(uint *)(uVar10 + 0x14);
  if (*(short *)(uVar10 + 0x1a0) == 0) {
    if ((*(byte *)(uVar10 + 0x1a6) & (uVar4 >> 8 & 1) == 0) != 0) goto LAB_140764600;
    *(undefined8 *)(uVar8 - 8) = 2;
    *(undefined8 *)(uVar8 - 0x10) = 0;
    *(undefined8 *)(uVar8 - 0x18) = *(undefined8 *)(uVar10 + 0xbc);
    *(ulonglong *)(uVar8 - 0x20) = uVar8 + 0x24 & 0xffffffff;
    *(undefined8 *)(uVar8 - 0x28) = 0x140764674;
    FUN_1407648a8();
    puVar7 = (undefined4 *)(ulonglong)((int)(uVar8 - 0x20) + 0x10);
    if ((uVar4 >> 8 & 1) != 0) goto LAB_14076467d;
  }
  else if ((uVar4 >> 8 & 1) == 0) {
LAB_140764600:
    *(undefined8 *)(uVar8 - 8) = 0;
    *(undefined8 *)(uVar8 - 0x10) = 0;
    *(undefined8 *)(uVar8 - 0x18) = *(undefined8 *)(uVar10 + 0xbc);
    *(ulonglong *)(uVar8 - 0x20) = uVar8 + 0x24 & 0xffffffff;
    *(undefined8 *)(uVar8 - 0x28) = 0x140764614;
    FUN_1407648a8();
    uVar9 = (ulonglong)((int)(uVar8 - 0x20) + 0x10);
    *(undefined8 *)(uVar9 - 8) = 0;
    *(undefined8 *)(uVar9 - 0x10) = *(undefined8 *)(uVar10 + 0xbc);
    *(ulonglong *)(uVar9 - 0x18) = uVar8 + 0x24 & 0xffffffff;
    *(undefined8 *)(uVar9 - 0x20) = 0x140764624;
    FUN_14075612e();
    puVar7 = (undefined4 *)(ulonglong)((int)(uVar9 - 0x18) + 0xc);
    if ((*(short *)(uVar10 + 0x1a0) == 0) && (uVar3 == *(uint *)(uVar11 + 0x2048))) {
      uVar5 = *(uint *)(uVar11 + 0x2044);
      fVar13 = *(float *)((longlong)puVar7 + 8) + fRam0000000150a1d2ef;
      fVar14 = *(float *)((longlong)puVar7 + 0xc) + fRam0000000150a1d2f3;
      fVar15 = *(float *)((longlong)puVar7 + 0x10) + fRam0000000150a1d2f7;
      pfVar6 = (float *)((ulonglong)((longlong)puVar7 + 0x14) & 0xffffffff);
      *pfVar6 = *(float *)((longlong)puVar7 + 4) + _DAT_150a1d2eb;
      pfVar6[1] = fVar13;
      pfVar6[2] = fVar14;
      pfVar6[3] = fVar15;
      *(undefined8 *)((longlong)puVar7 + -8) = 2;
      *(ulonglong *)((longlong)puVar7 + -0x10) = (ulonglong)uVar5;
      *(float **)((longlong)puVar7 + -0x18) = pfVar6;
      *(undefined8 *)((longlong)puVar7 + -0x20) = 0x14076465b;
      FUN_14075612e();
      puVar7 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar7 + -0x18) + 0xc);
    }
  }
  else {
    *(undefined8 *)(uVar8 - 8) = 2;
    *(undefined8 *)(uVar8 - 0x10) = 0;
    *(undefined8 *)(uVar8 - 0x18) = *(undefined8 *)(uVar10 + 0xbc);
    *(ulonglong *)(uVar8 - 0x20) = uVar8 + 0x24 & 0xffffffff;
    *(undefined8 *)(uVar8 - 0x28) = 0x1407645c6;
    FUN_1407648a8();
    puVar7 = (undefined4 *)(ulonglong)((int)(uVar8 - 0x20) + 0x10);
LAB_14076467d:
    puVar1 = (ushort *)((ulonglong)uVar5 + 0x1a2);
    *puVar1 = *puVar1 | *(ushort *)(uVar10 + 0x1a2);
  }
  uVar5 = *(uint *)(uVar11 + 0x1e88);
  if (*(uint *)(uVar11 + 0x14d0) == uVar3) {
    uVar5 = uVar5 | 0x80;
    *(uint *)(uVar11 + 0x1e88) = uVar5;
  }
  *(uint *)(uVar10 + 0x200) = uVar5;
LAB_1407646aa:
  *(undefined4 *)(uVar11 + 0x1458) = *puVar7;
  *(undefined4 *)(uVar11 + 0x276c) = 0xff7fffff;
  if (_DAT_150aed3c9 == (puVar7[0xf] ^ (uint)puVar7)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar7 + -2) = FUN_1407646e0;
  FUN_1408802b0(puVar7[0xf] ^ (uint)puVar7);
}


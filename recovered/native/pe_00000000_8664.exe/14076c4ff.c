/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076c4ff */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076c4ff(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar7;
  
  uVar6 = (int)&stack0xffffffffffffffe0 - 0x3c;
  uVar7 = (ulonglong)uVar6;
  uVar10 = (ulonglong)_DAT_150b09c63;
  uVar9 = (ulonglong)*(uint *)(uVar10 + 0x14cc);
  uVar5 = (ulonglong)(uint)(*(int *)(uVar10 + 0x1fb0) * 0x3c + *(int *)(uVar10 + 0x1fb8));
  if (*(char *)(uVar9 + 0x185) == '\x01') {
    *(undefined8 *)(uVar7 - 8) = 0x14076c538;
    FUN_140769412();
  }
  uVar2 = *(undefined4 *)(uVar5 - 0x38);
  uVar3 = *(undefined4 *)(uVar5 - 0x34);
  fVar13 = (float)*(undefined8 *)(uVar9 + 0x15c);
  fVar14 = (float)((ulonglong)*(undefined8 *)(uVar9 + 0x15c) >> 0x20);
  fVar15 = (float)*(undefined8 *)(uVar10 + 0x1e94);
  fVar16 = (float)((ulonglong)*(undefined8 *)(uVar10 + 0x1e94) >> 0x20);
  uVar11 = -(uint)(fVar15 <= fVar13);
  uVar12 = -(uint)(fVar16 <= fVar14);
  uVar4 = CONCAT44(~uVar12 & (uint)fVar16,~uVar11 & (uint)fVar15) |
          CONCAT44((uint)fVar14 & uVar12,(uint)fVar13 & uVar11);
  fVar13 = (float)*(undefined8 *)(uVar5 - 0x38);
  fVar14 = (float)((ulonglong)*(undefined8 *)(uVar5 - 0x38) >> 0x20);
  fVar15 = (float)uVar4;
  fVar16 = (float)(uVar4 >> 0x20);
  uVar11 = -(uint)(fVar13 <= fVar15);
  uVar12 = -(uint)(fVar14 <= fVar16);
  uVar4 = CONCAT44(~uVar12 & (uint)fVar14,~uVar11 & (uint)fVar13) |
          CONCAT44((uint)fVar16 & uVar12,(uint)fVar15 & uVar11);
  uVar1 = *(undefined8 *)(uVar5 - 0x38);
  *(undefined4 *)(uVar7 + 0x2c) = uVar3;
  *(undefined4 *)(uVar7 + 0x28) = uVar2;
  *(ulonglong *)(uVar7 + 0x30) = uVar4;
  *(undefined4 *)(uVar9 + 0x148) = uVar3;
  *(undefined4 *)(uVar9 + 0x144) = uVar2;
  *(undefined8 *)(uVar9 + 0x14c) = *(undefined8 *)(uVar5 - 0x28);
  fVar13 = (float)*(undefined8 *)(uVar5 - 0x30);
  fVar14 = (float)((ulonglong)*(undefined8 *)(uVar5 - 0x30) >> 0x20);
  fVar15 = (float)(uVar4 >> 0x20);
  uVar11 = -(uint)((float)uVar4 <= fVar13);
  uVar12 = -(uint)(fVar15 <= fVar14);
  *(ulonglong *)(uVar9 + 0x15c) =
       CONCAT44(~uVar12 & (uint)fVar15,~uVar11 & (uint)(float)uVar4) |
       CONCAT44((uint)fVar14 & uVar12,(uint)fVar13 & uVar11);
  *(undefined4 *)(uVar9 + 0x188) = *(undefined4 *)(uVar5 - 0x20);
  *(undefined4 *)(uVar9 + 400) = *(undefined4 *)(uVar5 - 0x1c);
  *(undefined8 *)(uVar9 + 0x16c) = *(undefined8 *)(uVar5 - 0x18);
  *(undefined4 *)(uVar9 + 0x17c) = *(undefined4 *)(uVar5 - 0x10);
  *(undefined1 *)(uVar9 + 0x184) = *(undefined1 *)(uVar5 - 5);
  if (*(char *)(uVar10 + 0x2748) == '\x01') {
    *(undefined4 *)(uVar10 + 0x276c) = 0xff7fffff;
  }
  if (*(char *)(uVar5 - 4) != '\0') {
    uVar2 = *(undefined4 *)(uVar9 + 0x180);
    puVar8 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x44);
    puVar8[1] = *(undefined4 *)(uVar5 - 0x10);
    *puVar8 = uVar2;
    *(ulonglong *)(puVar8 + 2) = uVar4;
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = uVar1;
    *(undefined8 *)(puVar8 + 8) = 0;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -2) = &UNK_14076c636;
    FUN_140755a9a();
  }
  *(int *)(uVar10 + 0x1fb0) = *(int *)(uVar10 + 0x1fb0) + -1;
  if (_DAT_150af5475 == (*(uint *)(uVar7 + 0x38) ^ uVar6)) {
    return;
  }
  uVar11 = *(uint *)(uVar7 + 0x38);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar7 - 8) = FUN_14076c78c;
  FUN_1408802b0(uVar11 ^ uVar6);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140755db9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140755db9(void)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 *puVar9;
  
  iVar8 = (int)&stack0xffffffffffffffe0;
  puVar9 = (undefined4 *)(ulonglong)(iVar8 - 0x44U);
  uVar6 = puVar9[0x1c];
  uVar2 = puVar9[0x1a];
  uVar4 = puVar9[0x19];
  uVar14 = puVar9[0x18];
  uVar5 = puVar9[0x17];
  puVar9[0x10] = _DAT_150adeae8 ^ iVar8 - 0x44U;
  puVar7 = (undefined4 *)((ulonglong)(puVar9 + 0xe) & 0xffffffff);
  *puVar7 = puVar9[0x16];
  puVar7[1] = uVar5;
  puVar7 = (undefined4 *)((ulonglong)(puVar9 + 0xc) & 0xffffffff);
  *puVar7 = uVar14;
  puVar7[1] = uVar4;
  uVar13 = (ulonglong)_DAT_150af355a;
  uVar12 = (ulonglong)*(uint *)(uVar13 + 0x14cc);
  uVar4 = *(undefined4 *)(uVar12 + 0x2e8);
  puVar9[3] = uVar6;
  puVar9[2] = uVar2;
  uVar6 = SUB84(puVar9 + 0xc,0);
  puVar9[1] = uVar6;
  uVar14 = SUB84(puVar9 + 0xe,0);
  *puVar9 = uVar14;
  puVar9[4] = 0;
  *(undefined8 *)(puVar9 + -2) = 0x140755e38;
  FUN_1407e372a(uVar4);
  puVar10 = (undefined4 *)(ulonglong)(iVar8 - 0x58);
  if (*(char *)(puVar10 + 0x1b) != '\0') {
    fVar1 = *(float *)(uVar13 + 0xd18);
    if (0.0 < fVar1) {
      puVar10[7] = *(undefined4 *)(uVar12 + 0x2e8);
      puVar10[1] = 0x3f800000;
      *puVar10 = 6;
      puVar10[6] = fVar1;
      *(undefined8 *)(puVar10 + -2) = 0x140755e7f;
      uVar4 = FUN_140754a09();
      fVar3 = fRam0000000150a0cf30;
      fVar1 = _DAT_150a0cf2c;
      *(ulonglong *)((ulonglong)(puVar10 + 10) & 0xffffffff) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(puVar10 + 0xc) >> 0x20) +
                    fRam0000000150a0cf30,(float)*(undefined8 *)(puVar10 + 0xc) + _DAT_150a0cf2c);
      *(ulonglong *)((ulonglong)(puVar10 + 8) & 0xffffffff) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(puVar10 + 0xe) >> 0x20) + fVar3,
                    (float)*(undefined8 *)(puVar10 + 0xe) + fVar1);
      puVar10[5] = 0;
      puVar10[4] = puVar10[6];
      puVar10[3] = puVar10[0x1c];
      puVar10[2] = uVar4;
      puVar10[1] = (int)(puVar10 + 10);
      *puVar10 = (int)(puVar10 + 8);
      *(undefined8 *)(puVar10 + -2) = 0x140755ed8;
      FUN_1407e3632();
      puVar11 = (undefined4 *)(ulonglong)(iVar8 - 0x70);
      uVar4 = *(undefined4 *)(uVar12 + 0x2e8);
      puVar11[1] = 0x3f800000;
      *puVar11 = 5;
      *(undefined8 *)(puVar11 + -2) = 0x140755ef6;
      uVar5 = FUN_140754a09();
      puVar11[5] = 0;
      puVar11[4] = puVar11[6];
      puVar11[3] = puVar11[0x1c];
      puVar11[2] = uVar5;
      puVar11[1] = uVar6;
      *puVar11 = uVar14;
      *(undefined8 *)(puVar11 + -2) = 0x140755f26;
      FUN_1407e3632(uVar4);
      puVar10 = (undefined4 *)(ulonglong)(iVar8 - 0x88);
    }
  }
  if (_DAT_150adec35 == (*(uint *)((longlong)puVar10 + 0x40) ^ (uint)puVar10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar10 + -8) = FUN_140755f4c;
  FUN_1408802b0(*(uint *)((longlong)puVar10 + 0x40) ^ (uint)puVar10);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407642f7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_1407642f7(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 *puVar4;
  
  uVar3 = (int)&stack0xfffffffffffffff8 - 0x2c;
  puVar4 = (undefined4 *)(ulonglong)uVar3;
  fVar8 = (float)puVar4[0xf];
  fVar10 = (float)puVar4[0xe];
  fVar9 = 0.0;
  if ((fVar10 < 0.0) || (fVar7 = 0.0, fVar8 < 0.0)) {
    pfVar5 = (float *)((ulonglong)(puVar4 + 8) & 0xffffffff);
    *puVar4 = (int)(puVar4 + 8);
    *(undefined8 *)(puVar4 + -2) = 0x14076432e;
    FUN_1407642b4();
    fVar10 = (float)puVar4[0xe];
    fVar8 = (float)puVar4[0xf];
    fVar7 = *pfVar5;
    fVar9 = pfVar5[1];
  }
  if (fVar10 < 0.0) {
    puVar4[1] = fVar10 + fVar7;
    *puVar4 = 0x40800000;
    puVar4[4] = fVar9;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar4 + -2) = &UNK_140764367;
    FUN_140755a9a();
  }
  uVar2 = ~-(uint)(fVar10 == 0.0) & (uint)fVar10 | puVar4[0x10] & -(uint)(fVar10 == 0.0);
  puVar6 = (uint *)(ulonglong)(uint)puVar4[0xd];
  if (fVar8 < 0.0) {
    puVar4[1] = fVar8 + fVar9;
    *puVar4 = 0x40800000;
    *(undefined1 (*) [16])(puVar4 + 4) = ZEXT416(uVar2);
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar4 + -2) = &UNK_1407643bd;
    FUN_140755a9a();
  }
  uVar1 = puVar4[0x11];
  *puVar6 = uVar2;
  puVar6[1] = ~-(uint)(fVar8 == 0.0) & (uint)fVar8 | uVar1 & -(uint)(fVar8 == 0.0);
  if (_DAT_150aed0f7 == (puVar4[10] ^ uVar3)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar4 + -2) = FUN_14076440d;
  FUN_1408802b0(puVar4[10] ^ uVar3);
}


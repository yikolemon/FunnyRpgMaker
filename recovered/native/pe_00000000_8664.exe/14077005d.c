/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14077005d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14077005d(void)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined4 *puVar5;
  
  uVar4 = (int)&stack0xfffffffffffffff0 - 0x20;
  puVar5 = (undefined4 *)(ulonglong)uVar4;
  puVar5[7] = _DAT_150af8d6c ^ uVar4;
  uVar7 = (ulonglong)_DAT_150b0d7c4;
  uVar6 = (ulonglong)*(uint *)(uVar7 + 0x14cc);
  uVar3 = ((undefined8 *)(ulonglong)(uint)puVar5[0xb])[1];
  *(undefined8 *)(puVar5 + 3) = *(undefined8 *)(ulonglong)(uint)puVar5[0xb];
  *(undefined8 *)(puVar5 + 5) = uVar3;
  uVar8 = -(uint)(*(float *)(uVar7 + 0x22a8) <= (float)puVar5[3]);
  uVar9 = -(uint)(*(float *)(uVar7 + 0x22ac) <= (float)puVar5[4]);
  uVar10 = -(uint)((float)puVar5[5] < *(float *)(uVar7 + 0x22b0));
  uVar11 = -(uint)((float)puVar5[6] < *(float *)(uVar7 + 0x22b4));
  auVar16._0_4_ = ~uVar8 & (uint)*(float *)(uVar7 + 0x22a8);
  auVar16._4_4_ = ~uVar9 & (uint)*(float *)(uVar7 + 0x22ac);
  auVar16._8_4_ = ~uVar10 & (uint)*(float *)(uVar7 + 0x22b0);
  auVar16._12_4_ = ~uVar11 & (uint)*(float *)(uVar7 + 0x22b4);
  auVar2._4_4_ = puVar5[4] & uVar9;
  auVar2._0_4_ = puVar5[3] & uVar8;
  auVar2._8_4_ = puVar5[5] & uVar10;
  auVar2._12_4_ = puVar5[6] & uVar11;
  auVar16 = auVar16 | auVar2;
  fVar13 = *(float *)(uVar7 + 0xda4);
  fVar14 = auVar16._0_4_ - fVar13;
  fVar15 = auVar16._4_4_ - fVar13;
  fVar12 = fVar13 + auVar16._8_4_;
  fVar13 = fVar13 + auVar16._12_4_;
  puVar5[3] = fVar14;
  puVar5[4] = fVar15;
  puVar5[5] = fVar12;
  puVar5[6] = fVar13;
  if ((((fVar14 < *(float *)(uVar6 + 0x28c)) || (fVar15 < *(float *)(uVar6 + 0x290))) ||
      (*(float *)(uVar6 + 0x294) < fVar12)) || (*(float *)(uVar6 + 0x298) < fVar13)) {
    uVar1 = *(undefined4 *)(uVar6 + 0x2e8);
    *(undefined8 *)(puVar5 + -2) = 0x140770115;
    FUN_1407e0202(uVar1);
    uVar1 = *(undefined4 *)(uVar6 + 0x2e8);
    puVar5[2] = *(undefined4 *)(uVar7 + 0xd9c);
    puVar5[1] = (int)(puVar5 + 3);
    *puVar5 = uVar1;
    *(undefined8 *)(puVar5 + -2) = 0x140770139;
    FUN_14076ffaf();
    uVar1 = *(undefined4 *)(uVar6 + 0x2e8);
    *(undefined8 *)(puVar5 + -2) = 0x140770144;
    FUN_1407e0254(uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(uVar6 + 0x2e8);
    puVar5[2] = *(undefined4 *)(uVar7 + 0xd9c);
    puVar5[1] = (int)(puVar5 + 3);
    *puVar5 = uVar1;
    *(undefined8 *)(puVar5 + -2) = 0x14077017e;
    FUN_14076ffaf();
  }
  if (_DAT_150af8e50 == (puVar5[7] ^ uVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -2) = FUN_14077018b;
  FUN_1408802b0(puVar5[7] ^ uVar4);
}


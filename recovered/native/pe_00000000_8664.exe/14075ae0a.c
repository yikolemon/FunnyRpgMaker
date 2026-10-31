/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075ae0a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14075ae0a(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar14;
  undefined1 auVar13 [16];
  float fVar15;
  float fVar16;
  uint unaff_retaddr;
  uint local_res8;
  char local_resc;
  ulonglong uVar12;
  
  uVar5 = (ulonglong)_DAT_150af8564;
  uVar1 = *(ulonglong *)(ulonglong)unaff_retaddr;
  uVar12 = *(ulonglong *)(ulonglong)local_res8;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar12;
  if (local_resc != '\0') {
    uVar2 = *(undefined8 *)((ulonglong)*(uint *)(uVar5 + 0x14cc) + 0x28c);
    fVar14 = (float)uVar2;
    fVar15 = (float)((ulonglong)uVar2 >> 0x20);
    fVar11 = (float)(uVar1 >> 0x20);
    uVar7 = -(uint)(fVar14 <= (float)uVar1);
    uVar9 = -(uint)(fVar15 <= fVar11);
    uVar1 = CONCAT44((uint)fVar11 & uVar9,(uint)(float)uVar1 & uVar7) |
            CONCAT44(~uVar9 & (uint)fVar15,~uVar7 & (uint)fVar14);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)((ulonglong)*(uint *)(uVar5 + 0x14cc) + 0x294);
    auVar13 = minps(auVar13,auVar3);
    uVar12 = auVar13._0_8_;
  }
  if ((float)uVar1 - *(float *)(uVar5 + 0xd34) <= *(float *)(uVar5 + 0xe4)) {
    fVar11 = (float)(uVar1 >> 0x20);
    if (((fVar11 - *(float *)(uVar5 + 0xd38) <= *(float *)(uVar5 + 0xe8)) &&
        (*(float *)(uVar5 + 0xe4) < *(float *)(uVar5 + 0xd34) + (float)uVar12)) &&
       (fVar14 = (float)(uVar12 >> 0x20),
       *(float *)(uVar5 + 0xe8) < fVar14 + *(float *)(uVar5 + 0xd38))) {
      uVar5 = (ulonglong)*(uint *)(uVar5 + 0x1ff0);
      fVar15 = (float)*(undefined8 *)(uVar5 + 8);
      fVar16 = (float)((ulonglong)*(undefined8 *)(uVar5 + 8) >> 0x20);
      iVar8 = -(uint)(fVar15 < (float)uVar12);
      iVar10 = -(uint)(fVar16 < fVar14);
      auVar4._4_4_ = iVar8;
      auVar4._0_4_ = iVar8;
      auVar4._8_4_ = iVar10;
      auVar4._12_4_ = iVar10;
      uVar6 = movmskpd(_DAT_150af8564,auVar4);
      return CONCAT31((int3)((uint)uVar6 >> 8),
                      (byte)uVar6 >> 1 & (byte)uVar6 &
                      -(fVar11 < fVar16 + *(float *)(uVar5 + 0x14)) &
                      -((float)uVar1 < *(float *)(uVar5 + 0x10) + fVar15));
    }
  }
  return 0;
}


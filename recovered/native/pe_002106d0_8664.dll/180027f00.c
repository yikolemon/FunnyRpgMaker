/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180027f00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180027f00(uint param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_1 < 0x10000) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar1 = lVar8 * 2;
      if (param_1 >> 8 < (uint)(byte)(&DAT_1802b1fc0)[lVar8 * 2]) break;
      if (param_1 >> 8 == (uint)(byte)(&DAT_1802b1fc0)[lVar8 * 2]) {
        uVar9 = (ulonglong)uVar7;
        do {
          if ((&DAT_1802b2020)[uVar9] == (char)param_1) {
            return 0;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (byte)(&DAT_1802b1fc1)[lVar1] + uVar7);
      }
      lVar8 = lVar8 + 1;
      uVar7 = (byte)(&DAT_1802b1fc1)[lVar1] + uVar7;
    } while (lVar8 != 0x29);
    uVar9 = CONCAT71((uint7)(ushort)(param_1 >> 0x10),1);
    uVar6 = 0;
    do {
      bVar3 = (&DAT_1802b2250)[uVar6];
      uVar7 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        pbVar2 = &DAT_1802b2251 + uVar6;
        uVar6 = uVar6 + 1;
        uVar7 = (bVar3 & 0x7f) << 8 | (uint)*pbVar2;
      }
      param_1 = param_1 - uVar7;
      if ((int)param_1 < 0) {
        return uVar9;
      }
      uVar9 = uVar9 ^ 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x135);
  }
  else if (param_1 < 0x20000) {
    uVar5 = param_1 & 0xffff;
    lVar8 = 0;
    uVar7 = 0;
    do {
      lVar1 = lVar8 * 2;
      if (uVar5 >> 8 < (uint)(byte)(&DAT_1802b2150)[lVar8 * 2]) break;
      if (uVar5 >> 8 == (uint)(byte)(&DAT_1802b2150)[lVar8 * 2]) {
        uVar9 = (ulonglong)uVar7;
        do {
          if ((&DAT_1802b21a0)[uVar9] == (char)param_1) {
            return 0;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < (byte)(&DAT_1802b2151)[lVar1] + uVar7);
      }
      lVar8 = lVar8 + 1;
      uVar7 = (byte)(&DAT_1802b2151)[lVar1] + uVar7;
    } while (lVar8 != 0x26);
    uVar9 = 1;
    uVar6 = 0;
    do {
      bVar3 = (&DAT_1802b2390)[uVar6];
      uVar7 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        pbVar2 = &DAT_1802b2391 + uVar6;
        uVar6 = uVar6 + 1;
        uVar7 = (bVar3 & 0x7f) << 8 | (uint)*pbVar2;
      }
      uVar5 = uVar5 - uVar7;
      if ((int)uVar5 < 0) {
        return uVar9;
      }
      uVar9 = uVar9 ^ 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x1a3);
  }
  else {
    auVar12._0_4_ = param_1 + _DAT_1802b0cb0;
    auVar12._4_4_ = param_1 + _UNK_1802b0cb4;
    auVar12._8_4_ = param_1 + _UNK_1802b0cb8;
    auVar12._12_4_ = _UNK_1802b0cbc;
    auVar10._0_4_ = param_1 + _DAT_1802b0cc0;
    auVar10._4_4_ = param_1 + _UNK_1802b0cc4;
    auVar10._8_4_ = param_1 + _UNK_1802b0cc8;
    auVar10._12_4_ = param_1 + _UNK_1802b0ccc;
    auVar13._0_12_ = DAT_1802b0cd0._0_12_;
    auVar13._12_4_ = param_1 & 0xfffffffe;
    auVar15 = auVar12 ^ _DAT_1802b0ce0;
    auVar11._0_4_ = -(uint)(auVar12._0_4_ == (int)DAT_1802b0cd0);
    auVar11._4_4_ = -(uint)(auVar12._4_4_ == DAT_1802b0cd0._4_4_);
    auVar11._8_4_ = -(uint)(auVar12._8_4_ == DAT_1802b0cd0._8_4_);
    auVar11._12_4_ = -(uint)(_UNK_1802b0cbc == (param_1 & 0xfffffffe));
    auVar13 = auVar13 ^ _DAT_1802b0ce0;
    auVar14._0_4_ = -(uint)(auVar15._0_4_ < auVar13._0_4_);
    auVar14._4_4_ = -(uint)(auVar15._4_4_ < auVar13._4_4_);
    auVar14._8_4_ = -(uint)(auVar15._8_4_ < auVar13._8_4_);
    auVar14._12_4_ = -(uint)(auVar15._12_4_ < auVar13._12_4_);
    auVar10 = auVar10 ^ _DAT_1802b0ce0;
    auVar15._0_4_ = -(uint)(auVar10._0_4_ < _DAT_1802b0cf0);
    auVar15._4_4_ = -(uint)(auVar10._4_4_ < _UNK_1802b0cf4);
    auVar15._8_4_ = -(uint)(auVar10._8_4_ < _UNK_1802b0cf8);
    auVar15._12_4_ = -(uint)(auVar10._12_4_ < _UNK_1802b0cfc);
    auVar12 = packssdw(auVar15,auVar14);
    auVar10 = pshufhw(auVar10,auVar11,0xaa);
    auVar10 = ~_DAT_1802b0d00 & auVar10 | auVar12 & _DAT_1802b0d00;
    uVar4 = (ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
            (ushort)(byte)(auVar10[0xf] >> 7) << 0xf;
    uVar9 = (ulonglong)CONCAT11((char)(uVar4 >> 8),param_1 < 0x110000 && uVar4 == 0);
  }
  return uVar9;
}


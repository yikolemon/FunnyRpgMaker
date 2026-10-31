/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10027959 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10027959(uint param_1)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_1 < 0x10000) {
    iVar3 = 0;
    uVar6 = 0;
    do {
      uVar7 = (byte)(&DAT_1029068d)[iVar3 * 2] + uVar6;
      if (param_1 >> 8 < (uint)(byte)(&DAT_1029068c)[iVar3 * 2]) break;
      if (param_1 >> 8 == (uint)(byte)(&DAT_1029068c)[iVar3 * 2]) {
        do {
          if ((&DAT_102906de)[uVar6] == (char)param_1) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      iVar3 = iVar3 + 1;
      uVar6 = uVar7;
    } while (iVar3 != 0x29);
    uVar6 = CONCAT31((uint3)(ushort)(param_1 >> 0x10),1);
    uVar7 = 0;
    do {
      uVar4 = (uint)(byte)(&DAT_102908fb)[uVar7];
      if ((char)(&DAT_102908fb)[uVar7] < '\0') {
        pbVar1 = &DAT_102908fc + uVar7;
        uVar7 = uVar7 + 1;
        uVar4 = (uVar4 & 0x7f) << 8 | (uint)*pbVar1;
      }
      param_1 = param_1 - uVar4;
      if ((int)param_1 < 0) {
        return uVar6;
      }
      uVar6 = uVar6 ^ 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < 0x135);
  }
  else if (param_1 < 0x20000) {
    uVar7 = param_1 & 0xffff;
    iVar3 = 0;
    uVar6 = 0;
    do {
      uVar4 = (byte)(&DAT_10290801)[iVar3 * 2] + uVar6;
      if (uVar7 >> 8 < (uint)(byte)(&DAT_10290800)[iVar3 * 2]) break;
      if (uVar7 >> 8 == (uint)(byte)(&DAT_10290800)[iVar3 * 2]) {
        do {
          if ((&DAT_1029084c)[uVar6] == (char)param_1) {
            return 0;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
      }
      iVar3 = iVar3 + 1;
      uVar6 = uVar4;
    } while (iVar3 != 0x26);
    uVar6 = 1;
    uVar4 = 0;
    do {
      uVar5 = (uint)(byte)(&DAT_10290a30)[uVar4];
      if ((char)(&DAT_10290a30)[uVar4] < '\0') {
        pbVar1 = &DAT_10290a31 + uVar4;
        uVar4 = uVar4 + 1;
        uVar5 = (uVar5 & 0x7f) << 8 | (uint)*pbVar1;
      }
      uVar7 = uVar7 - uVar5;
      if ((int)uVar7 < 0) {
        return uVar6;
      }
      uVar6 = uVar6 ^ 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x1a3);
  }
  else {
    auVar8._0_4_ = -(uint)(param_1 + _DAT_1028f5f0 == _DAT_1028f610);
    auVar8._4_4_ = -(uint)(param_1 + _UNK_1028f5f4 == _UNK_1028f614);
    auVar8._8_4_ = -(uint)(param_1 + _UNK_1028f5f8 == _UNK_1028f618);
    auVar8._12_4_ = -(uint)(_UNK_1028f5fc == (param_1 & 0xfffffffe));
    auVar10._0_4_ =
         -(uint)((int)(param_1 + _DAT_1028f5f0 ^ _DAT_1028f620) <
                (int)(_DAT_1028f610 ^ _DAT_1028f620));
    auVar10._4_4_ =
         -(uint)((int)(param_1 + _UNK_1028f5f4 ^ _UNK_1028f624) <
                (int)(_UNK_1028f614 ^ _UNK_1028f624));
    auVar10._8_4_ =
         -(uint)((int)(param_1 + _UNK_1028f5f8 ^ _UNK_1028f628) <
                (int)(_UNK_1028f618 ^ _UNK_1028f628));
    auVar10._12_4_ =
         -(uint)((int)(_UNK_1028f5fc ^ _UNK_1028f62c) < (int)(param_1 & 0xfffffffe ^ _UNK_1028f62c))
    ;
    auVar9._0_4_ = -(uint)((int)(param_1 + _DAT_1028f600 ^ _DAT_1028f620) < _DAT_1028f630);
    auVar9._4_4_ = -(uint)((int)(param_1 + _UNK_1028f604 ^ _UNK_1028f624) < _UNK_1028f634);
    auVar9._8_4_ = -(uint)((int)(param_1 + _UNK_1028f608 ^ _UNK_1028f628) < _UNK_1028f638);
    auVar9._12_4_ = -(uint)((int)(param_1 + _UNK_1028f60c ^ _UNK_1028f62c) < _UNK_1028f63c);
    auVar10 = packssdw(auVar9,auVar10);
    auVar8 = pshufhw(auVar8,auVar8,0xaa);
    auVar8 = ~_DAT_1028f640 & auVar8 | auVar10 & _DAT_1028f640;
    uVar2 = (ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar8[0xf] >> 7) << 0xf;
    uVar6 = (uint)CONCAT11((char)(uVar2 >> 8),param_1 < 0x110000 && uVar2 == 0);
  }
  return uVar6;
}


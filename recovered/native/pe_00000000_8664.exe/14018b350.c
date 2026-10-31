/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018b350 */

undefined1 (*) [32]
FUN_14018b350(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (((uVar5 & 0xffffffffffffffe0) == 0) || ((DAT_140f1c694 & 0x20) == 0)) {
    if (((uVar5 & 0xfffffffffffffff0) != 0) && ((DAT_140f1c694 & 4) != 0)) {
      puVar3 = *param_1;
      do {
        auVar7._0_8_ = -(ulonglong)(*(ulonglong *)*param_1 == param_3);
        auVar7._8_8_ = -(ulonglong)(*(ulonglong *)(*param_1 + 8) == param_3);
        uVar1 = (ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                (ushort)((byte)(auVar7._8_8_ >> 7) & 1) << 8 |
                (ushort)((byte)(auVar7._8_8_ >> 0xf) & 1) << 9 |
                (ushort)((byte)(auVar7._8_8_ >> 0x17) & 1) << 10 |
                (ushort)((byte)(auVar7._8_8_ >> 0x1f) & 1) << 0xb |
                (ushort)((byte)(auVar7._8_8_ >> 0x27) & 1) << 0xc |
                (ushort)((byte)(auVar7._8_8_ >> 0x2f) & 1) << 0xd |
                (ushort)((byte)(auVar7._8_8_ >> 0x37) & 1) << 0xe |
                (ushort)(byte)(auVar7._8_8_ >> 0x3f) << 0xf;
        if (uVar1 != 0) {
          uVar4 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          return (undefined1 (*) [32])(*param_1 + uVar4);
        }
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar5 & 0xfffffffffffffff0)));
    }
    for (; (param_1 != param_2 && (*(ulonglong *)*param_1 != param_3));
        param_1 = (undefined1 (*) [32])(*param_1 + 8)) {
    }
    return param_1;
  }
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_3;
  auVar7 = vpunpcklqdq_avx(auVar11,auVar11);
  puVar3 = *param_1;
  do {
    lVar10 = auVar7._0_8_;
    auVar8._0_8_ = -(ulonglong)(lVar10 == *(longlong *)*param_1);
    lVar12 = auVar7._8_8_;
    auVar8._8_8_ = -(ulonglong)(lVar12 == *(longlong *)(*param_1 + 8));
    auVar8._16_8_ = -(ulonglong)(lVar10 == SUB248(*(undefined1 (*) [24])*param_1,0x10));
    auVar8._24_8_ = -(ulonglong)(lVar12 == *(longlong *)(*param_1 + 0x18));
    uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
            (uint)((byte)(auVar8._24_8_ >> 7) & 1) << 0x18 |
            (uint)((byte)(auVar8._24_8_ >> 0xf) & 1) << 0x19 |
            (uint)((byte)(auVar8._24_8_ >> 0x17) & 1) << 0x1a |
            (uint)((byte)(auVar8._24_8_ >> 0x1f) & 1) << 0x1b |
            (uint)((byte)(auVar8._24_8_ >> 0x27) & 1) << 0x1c |
            (uint)((byte)(auVar8._24_8_ >> 0x2f) & 1) << 0x1d |
            (uint)((byte)(auVar8._24_8_ >> 0x37) & 1) << 0x1e |
            (uint)(byte)(auVar8._24_8_ >> 0x3f) << 0x1f;
    if (uVar4 != 0) goto LAB_14018b3ca;
    param_1 = param_1 + 1;
  } while (param_1 != (undefined1 (*) [32])(puVar3 + (uVar5 & 0xffffffffffffffe0)));
  uVar6 = (ulonglong)((uint)uVar5 & 0x1c);
  if ((uVar5 & 0x1c) != 0) {
    auVar8 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_140e64e50 + -uVar6),*param_1);
    auVar9._0_8_ = -(ulonglong)(auVar8._0_8_ == lVar10);
    auVar9._8_8_ = -(ulonglong)(auVar8._8_8_ == lVar12);
    auVar9._16_8_ = -(ulonglong)(auVar8._16_8_ == lVar10);
    auVar9._24_8_ = -(ulonglong)(auVar8._24_8_ == lVar12);
    auVar8 = vpand_avx2(auVar9,*(undefined1 (*) [32])(&DAT_140e64e50 + -uVar6));
    uVar4 = (uint)(SUB321(auVar8 >> 7,0) & 1) | (uint)(SUB321(auVar8 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar8 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar8 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar8 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar8 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar8 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar8 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar8 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar8 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar8 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar8 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar8 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar8 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar8 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar8 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar8 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar8 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar8 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar8 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar8 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar8 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar8 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar8 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar8 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar8 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar8 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar8 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar8 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar8 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar8 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar8[0x1f] >> 7) << 0x1f;
    if (uVar4 != 0) {
LAB_14018b3ca:
      uVar2 = 0;
      for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      return (undefined1 (*) [32])(*param_1 + uVar2);
    }
    param_1 = (undefined1 (*) [32])(*param_1 + uVar6);
  }
  return param_1;
}


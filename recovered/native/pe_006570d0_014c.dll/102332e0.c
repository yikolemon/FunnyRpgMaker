/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102332e0 */

int FUN_102332e0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined1 auVar6 [32];
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar7 = 0;
  pauVar10 = param_1;
  pauVar11 = param_2;
  if ((DAT_1039c72c != 0) && (uVar8 = uVar7, 0xf < param_3)) {
    do {
      auVar6 = vpcmpeqw_avx2(*pauVar11,*pauVar10);
      uVar7 = (uint)(SUB321(auVar6 >> 7,0) & 1) | (uint)(SUB321(auVar6 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar6 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar6 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar6 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar6 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar6 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar6 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar6 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar6 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar6 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar6 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar6 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar6 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar6 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar6 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar6 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar6 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar6 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar6 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar6 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar6 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar6 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar6 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar6 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar6 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar6 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar6 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar6 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar6 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar6 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar6[0x1f] >> 7) << 0x1f
      ;
      if (uVar7 != 0xffffffff) {
        uVar7 = ~uVar7;
        uVar1 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        iVar9 = (uVar1 >> 1) + uVar8;
        return (-(uint)(*(ushort *)(*param_1 + iVar9 * 2) < *(ushort *)(*param_2 + iVar9 * 2)) &
               0xfffffffe) + 1;
      }
      uVar7 = uVar8 + 0x10;
      pauVar10 = pauVar10 + 1;
      pauVar11 = pauVar11 + 1;
      uVar1 = uVar8 + 0x20;
      uVar8 = uVar7;
    } while (uVar1 <= param_3);
  }
  uVar8 = uVar7 + 8;
  while (uVar8 <= param_3) {
    auVar14 = *(undefined1 (*) [16])*pauVar10;
    auVar13._0_2_ = -(ushort)(*(short *)*pauVar11 == auVar14._0_2_);
    auVar13._2_2_ = -(ushort)(*(short *)(*pauVar11 + 2) == auVar14._2_2_);
    auVar13._4_2_ = -(ushort)(*(short *)(*pauVar11 + 4) == auVar14._4_2_);
    auVar13._6_2_ = -(ushort)(*(short *)(*pauVar11 + 6) == auVar14._6_2_);
    auVar13._8_2_ = -(ushort)(*(short *)(*pauVar11 + 8) == auVar14._8_2_);
    auVar13._10_2_ = -(ushort)(*(short *)(*pauVar11 + 10) == auVar14._10_2_);
    auVar13._12_2_ = -(ushort)(*(short *)(*pauVar11 + 0xc) == auVar14._12_2_);
    auVar13._14_2_ = -(ushort)(*(short *)(*pauVar11 + 0xe) == auVar14._14_2_);
    uVar5 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
            (ushort)((byte)(auVar13._14_2_ >> 7) & 1) << 0xe | auVar13._14_2_ & 0x8000;
    uVar8 = (uint)uVar5;
    if (uVar5 != 0xffff) goto LAB_10233386;
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + 0x10);
    pauVar11 = (undefined1 (*) [32])(*pauVar11 + 0x10);
    uVar8 = uVar7 + 0x10;
    uVar7 = uVar7 + 8;
  }
  uVar8 = uVar7;
  if (uVar7 + 4 <= param_3) {
    uVar2 = *(undefined8 *)*pauVar10;
    uVar3 = *(undefined8 *)*pauVar11;
    auVar14._0_2_ = -(ushort)((short)uVar3 == (short)uVar2);
    auVar14._2_2_ =
         -(ushort)((short)((ulonglong)uVar3 >> 0x10) == (short)((ulonglong)uVar2 >> 0x10));
    auVar14._4_2_ =
         -(ushort)((short)((ulonglong)uVar3 >> 0x20) == (short)((ulonglong)uVar2 >> 0x20));
    auVar14._6_2_ =
         -(ushort)((short)((ulonglong)uVar3 >> 0x30) == (short)((ulonglong)uVar2 >> 0x30));
    auVar14._8_2_ = 0xffff;
    auVar14._10_2_ = 0xffff;
    auVar14._12_2_ = 0xffff;
    auVar14._14_2_ = 0xffff;
    bVar4 = SUB161(auVar14 >> 7,0) & 1 | (SUB161(auVar14 >> 0xf,0) & 1) << 1 |
            (SUB161(auVar14 >> 0x17,0) & 1) << 2 | (SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
            (SUB161(auVar14 >> 0x27,0) & 1) << 4 | (SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
            (SUB161(auVar14 >> 0x37,0) & 1) << 6 | SUB161(auVar14 >> 0x3f,0) << 7;
    uVar8 = uVar7 + 4;
    if (bVar4 != 0xff) {
      uVar8 = (uint)bVar4;
LAB_10233386:
      uVar1 = 0;
      if (~uVar8 != 0) {
        for (; (~uVar8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      iVar9 = (uVar1 >> 1) + uVar7;
      bVar12 = *(ushort *)(*param_1 + iVar9 * 2) < *(ushort *)(*param_2 + iVar9 * 2);
      goto LAB_1023339d;
    }
  }
  while( true ) {
    if (param_3 <= uVar8) {
      return 0;
    }
    bVar12 = *(ushort *)(*param_1 + uVar8 * 2) < *(ushort *)(*param_2 + uVar8 * 2);
    if (*(ushort *)(*param_1 + uVar8 * 2) != *(ushort *)(*param_2 + uVar8 * 2)) break;
    uVar8 = uVar8 + 1;
  }
LAB_1023339d:
  return (-(uint)bVar12 & 0xfffffffe) + 1;
}


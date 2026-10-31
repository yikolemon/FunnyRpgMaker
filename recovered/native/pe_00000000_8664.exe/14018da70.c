/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018da70 */

undefined8 FUN_14018da70(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  ushort uVar1;
  undefined1 auVar2 [32];
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 auVar11 [16];
  
  uVar4 = 0;
  pauVar9 = param_1;
  pauVar10 = param_2;
  if ((DAT_140f2a3cc != 0) && (uVar3 = uVar4, 0xf < param_3)) {
    do {
      auVar2 = vpcmpeqw_avx2(*pauVar9,*pauVar10);
      uVar5 = (uint)(SUB321(auVar2 >> 7,0) & 1) | (uint)(SUB321(auVar2 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar2 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar2 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar2 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar2 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar2 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar2 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar2 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar2 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar2 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar2 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar2 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar2 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar2 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar2 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar2 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar2 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar2 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar2 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar2 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar2 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar2 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar2 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar2 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar2 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar2 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar2 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar2 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar2 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar2 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar2[0x1f] >> 7) << 0x1f
      ;
      if (uVar5 != 0xffffffff) {
        uVar5 = ~uVar5;
        uVar6 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        uVar8 = 1;
        if (*(ushort *)(*param_1 + ((uVar6 >> 1) + uVar3) * 2) <
            *(ushort *)(*param_2 + (uVar3 + (uVar6 >> 1)) * 2)) {
          uVar8 = 0xffffffff;
        }
        return uVar8;
      }
      uVar4 = uVar3 + 0x10;
      pauVar9 = pauVar9 + 1;
      pauVar10 = pauVar10 + 1;
      uVar7 = uVar3 + 0x20;
      uVar3 = uVar4;
    } while (uVar7 <= param_3);
  }
  uVar3 = uVar4 + 8;
  while (uVar3 <= param_3) {
    auVar11._0_2_ = -(ushort)(*(short *)*pauVar10 == *(short *)*pauVar9);
    auVar11._2_2_ = -(ushort)(*(short *)(*pauVar10 + 2) == *(short *)(*pauVar9 + 2));
    auVar11._4_2_ = -(ushort)(*(short *)(*pauVar10 + 4) == *(short *)(*pauVar9 + 4));
    auVar11._6_2_ = -(ushort)(*(short *)(*pauVar10 + 6) == *(short *)(*pauVar9 + 6));
    auVar11._8_2_ = -(ushort)(*(short *)(*pauVar10 + 8) == *(short *)(*pauVar9 + 8));
    auVar11._10_2_ = -(ushort)(*(short *)(*pauVar10 + 10) == *(short *)(*pauVar9 + 10));
    auVar11._12_2_ = -(ushort)(*(short *)(*pauVar10 + 0xc) == *(short *)(*pauVar9 + 0xc));
    auVar11._14_2_ = -(ushort)(*(short *)(*pauVar10 + 0xe) == *(short *)(*pauVar9 + 0xe));
    uVar1 = (ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
            (ushort)((byte)(auVar11._14_2_ >> 7) & 1) << 0xe | auVar11._14_2_ & 0x8000;
    if (uVar1 != 0xffff) {
      uVar6 = ~(uint)uVar1;
      uVar5 = 0;
      if (uVar6 != 0) {
        for (; (uVar6 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      uVar8 = 1;
      if (*(ushort *)(*param_1 + ((uVar5 >> 1) + uVar4) * 2) <
          *(ushort *)(*param_2 + (uVar4 + (uVar5 >> 1)) * 2)) {
        uVar8 = 0xffffffff;
      }
      return uVar8;
    }
    pauVar9 = (undefined1 (*) [32])(*pauVar9 + 0x10);
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + 0x10);
    uVar3 = uVar4 + 0x10;
    uVar4 = uVar4 + 8;
  }
  uVar3 = uVar4;
  if (uVar4 + 4 <= param_3) {
    uVar3 = uVar4 + 4;
    if (*(ulonglong *)*pauVar9 != *(ulonglong *)*pauVar10) {
      uVar7 = *(ulonglong *)*pauVar10 ^ *(ulonglong *)*pauVar9;
      uVar3 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      uVar8 = 1;
      if (*(ushort *)(*param_1 + ((uVar3 >> 4) + uVar4) * 2) <
          *(ushort *)(*param_2 + (uVar4 + (uVar3 >> 4)) * 2)) {
        uVar8 = 0xffffffff;
      }
      return uVar8;
    }
  }
  while( true ) {
    if (param_3 <= uVar3) {
      return 0;
    }
    if (*(ushort *)(*param_1 + uVar3 * 2) != *(ushort *)(*param_2 + uVar3 * 2)) break;
    uVar3 = uVar3 + 1;
  }
  uVar8 = 1;
  if (*(ushort *)(*param_1 + uVar3 * 2) < *(ushort *)(*param_2 + uVar3 * 2)) {
    uVar8 = 0xffffffff;
  }
  return uVar8;
}


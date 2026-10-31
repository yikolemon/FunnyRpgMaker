/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c2240 */

ushort * FUN_1401c2240(ushort *param_1,ushort param_2)

{
  uint uVar1;
  ushort *puVar2;
  undefined1 auVar3 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort uVar6;
  ushort uVar7;
  
  auVar4 = pshuflw(in_XMM1,ZEXT416((uint)param_2),0);
  while( true ) {
    for (; ((uint)param_1 & 0xfff) < 0xff1; param_1 = param_1 + 8) {
      auVar5._0_2_ = -(ushort)(*param_1 == 0);
      auVar5._2_2_ = -(ushort)(param_1[1] == 0);
      auVar5._4_2_ = -(ushort)(param_1[2] == 0);
      auVar5._6_2_ = -(ushort)(param_1[3] == 0);
      auVar5._8_2_ = -(ushort)(param_1[4] == 0);
      auVar5._10_2_ = -(ushort)(param_1[5] == 0);
      auVar5._12_2_ = -(ushort)(param_1[6] == 0);
      auVar5._14_2_ = -(ushort)(param_1[7] == 0);
      uVar6 = auVar4._0_2_;
      auVar3._0_2_ = -(ushort)(*param_1 == uVar6);
      uVar7 = auVar4._2_2_;
      auVar3._2_2_ = -(ushort)(param_1[1] == uVar7);
      auVar3._4_2_ = -(ushort)(param_1[2] == uVar6);
      auVar3._6_2_ = -(ushort)(param_1[3] == uVar7);
      auVar3._8_2_ = -(ushort)(param_1[4] == uVar6);
      auVar3._10_2_ = -(ushort)(param_1[5] == uVar7);
      auVar3._12_2_ = -(ushort)(param_1[6] == uVar6);
      auVar3._14_2_ = -(ushort)(param_1[7] == uVar7);
      auVar5 = auVar5 | auVar3;
      uVar6 = (ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar5[0xf] >> 7) << 0xf;
      if (uVar6 != 0) {
        uVar1 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        puVar2 = (ushort *)0x0;
        if ((uint)*(ushort *)((ulonglong)uVar1 + (longlong)param_1) == (uint)param_2) {
          puVar2 = (ushort *)((ulonglong)uVar1 + (longlong)param_1);
        }
        return puVar2;
      }
    }
    if (*param_1 == param_2) {
      return param_1;
    }
    if (*param_1 == 0) break;
    param_1 = param_1 + 1;
  }
  return (ushort *)0x0;
}


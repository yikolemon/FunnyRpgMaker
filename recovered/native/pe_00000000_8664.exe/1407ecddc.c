/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ecddc */

uint FUN_1407ecddc(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  ulonglong unaff_RBX;
  float unaff_retaddr;
  uint uVar9;
  
  uVar9 = (uint)(unaff_RBX >> 0x20);
  pfVar4 = (float *)(ulonglong)uVar9;
  pfVar5 = (float *)(unaff_RBX & 0xffffffff);
  auVar2._4_4_ = -(uint)(pfVar5[1] <= pfVar4[1] + unaff_retaddr);
  auVar2._0_4_ = -(uint)(*pfVar5 <= *pfVar4 + unaff_retaddr);
  auVar2._8_4_ = -(uint)(pfVar5[2] <= pfVar4[2] - unaff_retaddr);
  auVar2._12_4_ = -(uint)(pfVar5[3] <= pfVar4[3] - unaff_retaddr);
  uVar8 = movmskps((int)unaff_RBX,auVar2);
  bVar6 = (byte)uVar8;
  auVar1._4_4_ = -(uint)(pfVar4[1] + unaff_retaddr <= pfVar5[1]);
  auVar1._0_4_ = -(uint)(*pfVar4 + unaff_retaddr <= *pfVar5);
  auVar1._8_4_ = -(uint)(pfVar4[2] - unaff_retaddr <= pfVar5[2]);
  auVar1._12_4_ = -(uint)(pfVar4[3] - unaff_retaddr <= pfVar5[3]);
  uVar8 = movmskps(uVar9,auVar1);
  bVar7 = (byte)uVar8 >> 3;
  bVar3 = ((byte)uVar8 & 4) >> 2;
  return (uint)(bVar3 & bVar7) << 7 |
         (uint)(bVar7 & bVar6) << 6 |
         (uint)(bVar6 >> 1 & bVar3) << 5 | (uint)((~bVar6 & 3) == 0) << 4 | 0x100;
}


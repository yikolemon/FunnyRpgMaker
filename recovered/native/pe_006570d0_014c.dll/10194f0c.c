/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10194f0c */

uint FUN_10194f0c(float *param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined4 unaff_EBX;
  uint uVar6;
  
  auVar2._4_4_ = -(uint)(param_1[1] <= param_2[1] + param_3);
  auVar2._0_4_ = -(uint)(*param_1 <= *param_2 + param_3);
  auVar2._8_4_ = -(uint)(param_1[2] <= param_2[2] - param_3);
  auVar2._12_4_ = -(uint)(param_1[3] <= param_2[3] - param_3);
  uVar6 = movmskps(unaff_EBX,auVar2);
  auVar1._4_4_ = -(uint)(param_2[1] + param_3 <= param_1[1]);
  auVar1._0_4_ = -(uint)(*param_2 + param_3 <= *param_1);
  auVar1._8_4_ = -(uint)(param_2[2] - param_3 <= param_1[2]);
  auVar1._12_4_ = -(uint)(param_2[3] - param_3 <= param_1[3]);
  uVar4 = movmskps(param_2,auVar1);
  bVar5 = (byte)uVar4 >> 3;
  bVar3 = ((byte)uVar4 & 4) >> 2;
  return (uint)(bVar3 & bVar5) << 7 |
         (uint)(bVar5 & (byte)uVar6) << 6 |
         (CONCAT11(bVar5,(byte)(uVar6 >> 1) & 0x7f & bVar3) & 0xff) << 5 |
         (uint)((~(byte)uVar6 & 3) == 0) << 4 | 0x100;
}


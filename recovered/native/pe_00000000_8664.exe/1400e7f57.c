/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e7f57 */

uint FUN_1400e7f57(float *param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  undefined4 in_EAX;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  
  auVar2._4_4_ = -(uint)(param_1[1] <= param_2[1] + param_3);
  auVar2._0_4_ = -(uint)(*param_1 <= *param_2 + param_3);
  auVar2._8_4_ = -(uint)(param_1[2] <= param_2[2] - param_3);
  auVar2._12_4_ = -(uint)(param_1[3] <= param_2[3] - param_3);
  uVar4 = movmskps((int)param_1,auVar2);
  bVar5 = (byte)uVar4;
  auVar1._4_4_ = -(uint)(param_2[1] + param_3 <= param_1[1]);
  auVar1._0_4_ = -(uint)(*param_2 + param_3 <= *param_1);
  auVar1._8_4_ = -(uint)(param_2[2] - param_3 <= param_1[2]);
  auVar1._12_4_ = -(uint)(param_2[3] - param_3 <= param_1[3]);
  uVar4 = movmskps(in_EAX,auVar1);
  bVar6 = (byte)uVar4 >> 3;
  bVar3 = ((byte)uVar4 & 4) >> 2;
  return (uint)(bVar3 & bVar6) << 7 |
         (uint)(bVar6 & bVar5) << 6 |
         (uint)(bVar5 >> 1 & bVar3) << 5 | (uint)((~bVar5 & 3) == 0) << 4 | 0x100;
}


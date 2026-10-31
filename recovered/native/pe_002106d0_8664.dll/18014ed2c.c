/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014ed2c */

void FUN_18014ed2c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  
  if ((*(byte *)(param_2 + 0x35) & 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x290);
    *param_1 = *(undefined8 *)(param_3 + 0x288);
    param_1[1] = uVar1;
    auVar6._0_4_ = (float)*param_1 + (float)*(undefined8 *)(param_3 + 0xb8);
    auVar6._4_4_ = (float)((ulonglong)*param_1 >> 0x20) +
                   (float)((ulonglong)*(undefined8 *)(param_3 + 0xb8) >> 0x20);
    auVar6._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_1[1];
    auVar7 = minps(auVar6,auVar7);
    *param_1 = auVar7._0_8_;
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  fVar4 = (float)*(undefined8 *)(param_3 + 0x170);
  fVar5 = (float)((ulonglong)*(undefined8 *)(param_3 + 0x170) >> 0x20);
  fVar8 = (float)((ulonglong)uVar1 >> 0x20);
  uVar2 = -(uint)((float)uVar1 <= fVar4);
  uVar3 = -(uint)(fVar8 <= fVar5);
  param_1[1] = CONCAT44(~uVar3 & (uint)fVar8,~uVar2 & (uint)(float)uVar1) |
               CONCAT44((uint)fVar5 & uVar3,(uint)fVar4 & uVar2);
  return;
}


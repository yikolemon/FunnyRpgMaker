/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101267b2 */

void __fastcall FUN_101267b2(float *param_1,int param_2,uint param_3)

{
  float in_XMM0_Da;
  float in_XMM1_Da;
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 < 4) {
    fVar1 = (float)*(undefined8 *)(param_2 + 0x50);
    fVar5 = (float)*(undefined8 *)(param_2 + 0x58) + fVar1;
    fVar2 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x58) >> 0x20) + fVar2;
    uVar3 = (int)((uint)(in_XMM1_Da == 0.0) * -0x80000000) >> 0x1f;
    uVar4 = (int)((uint)(in_XMM1_Da == 0.0) * -0x80000000) >> 0x1f;
    fVar5 = (float)(~uVar3 & (uint)fVar5 | (uint)((float)DAT_102b89a0 + fVar5) & uVar3);
    fVar6 = (float)(~uVar4 & (uint)fVar6 | (uint)(DAT_102b89a0._4_4_ + fVar6) & uVar4);
    switch(param_3) {
    case 0:
      *param_1 = fVar1 - in_XMM1_Da;
      *(ulonglong *)(param_1 + 1) = CONCAT44(fVar1 + in_XMM1_Da,fVar2 + in_XMM0_Da);
      param_1[3] = fVar6 - in_XMM0_Da;
      return;
    case 1:
      *param_1 = fVar5 - in_XMM1_Da;
      param_1[1] = fVar2 + in_XMM0_Da;
      *(ulonglong *)(param_1 + 2) = CONCAT44(fVar6 - in_XMM0_Da,fVar5 + in_XMM1_Da);
      return;
    case 2:
      break;
    case 3:
      fVar2 = fVar6;
    }
    *param_1 = fVar1 + in_XMM0_Da;
    param_1[1] = fVar2 - in_XMM1_Da;
    param_1[2] = fVar5 - in_XMM0_Da;
    param_1[3] = fVar2 + in_XMM1_Da;
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return;
}


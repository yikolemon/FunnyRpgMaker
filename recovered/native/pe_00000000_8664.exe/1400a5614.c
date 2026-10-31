/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a5614 */

void FUN_1400a5614(float *param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 < 4) {
    fVar1 = (float)*(undefined8 *)(param_2 + 0x60);
    fVar2 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
    fVar5 = (float)*(undefined8 *)(param_2 + 0x68) + fVar1;
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x68) >> 0x20) + fVar2;
    uVar3 = (int)((uint)(param_5 == 0.0) * -0x80000000) >> 0x1f;
    uVar4 = (int)((uint)(param_5 == 0.0) * -0x80000000) >> 0x1f;
    fVar5 = (float)(~uVar3 & (uint)fVar5 | (uint)((float)DAT_1402112d0 + fVar5) & uVar3);
    fVar6 = (float)(~uVar4 & (uint)fVar6 | (uint)(DAT_1402112d0._4_4_ + fVar6) & uVar4);
    switch(param_3) {
    case 0:
      *param_1 = fVar1 - param_5;
      *(ulonglong *)(param_1 + 1) = CONCAT44(fVar1 + param_5,fVar2 + param_4);
      param_1[3] = fVar6 - param_4;
      return;
    case 1:
      *param_1 = fVar5 - param_5;
      param_1[1] = fVar2 + param_4;
      *(ulonglong *)(param_1 + 2) = CONCAT44(fVar6 - param_4,fVar5 + param_5);
      return;
    case 2:
      break;
    case 3:
      fVar2 = fVar6;
    }
    *param_1 = fVar1 + param_4;
    param_1[1] = fVar2 - param_5;
    param_1[2] = fVar5 - param_4;
    param_1[3] = fVar2 + param_5;
    return;
  }
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return;
}


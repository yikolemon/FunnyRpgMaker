/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012bc3c */

void __fastcall FUN_1012bc3c(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float in_XMM0_Da;
  float fVar4;
  float in_XMM1_Da;
  float fVar5;
  
  fVar1 = *(float *)(DAT_1039d74c + 0xd24);
  uVar3 = (uint)(1 < param_5);
  if (1 >= param_5) {
    in_XMM1_Da = in_XMM0_Da;
  }
  uVar2 = uVar3 ^ 1;
  *(undefined4 *)(param_3 + uVar2 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
  *(undefined4 *)(param_4 + uVar2 * 4) = *(undefined4 *)(param_2 + uVar2 * 4);
  fVar4 = *(float *)(param_2 + uVar3 * 4) - fVar1;
  fVar5 = DAT_102b70e0 * fVar4;
  if (fVar5 < in_XMM1_Da || in_XMM1_Da <= 0.0) {
    in_XMM1_Da = (float)(int)fVar5;
  }
  *(float *)(param_4 + uVar3 * 4) = in_XMM1_Da;
  fVar4 = (float)(int)(fVar4 - in_XMM1_Da);
  *(float *)(param_2 + uVar3 * 4) = fVar4;
  if ((param_5 & 0xfffffffd) == 0) {
    fVar4 = *(float *)(param_1 + uVar3 * 4);
    *(float *)(param_3 + uVar3 * 4) = fVar4;
    *(float *)(param_1 + uVar3 * 4) = fVar1 + fVar4 + *(float *)(param_4 + uVar3 * 4);
  }
  else if ((param_5 & 0xfffffffd) == 1) {
    *(float *)(param_3 + uVar3 * 4) = fVar1 + fVar4 + *(float *)(param_1 + uVar3 * 4);
  }
  return;
}


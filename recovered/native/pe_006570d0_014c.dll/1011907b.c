/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011907b */

void __fastcall FUN_1011907b(int param_1)

{
  undefined8 uVar1;
  float in_XMM0_Da;
  float fVar2;
  float fVar3;
  
  uVar1 = *(undefined8 *)(*(int *)(param_1 + 0x3c) + 8);
  fVar2 = (float)uVar1;
  fVar3 = (float)((ulonglong)uVar1 >> 0x20);
  fVar2 = ((float)*(undefined8 *)(param_1 + 0x50) - fVar2) * in_XMM0_Da + fVar2;
  fVar3 = ((float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20) - fVar3) * in_XMM0_Da + fVar3
  ;
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(float *)(param_1 + 0x50) =
       (float)(int)((int)fVar2 - (uint)((float)(int)fVar2 != fVar2 && fVar2 < 0.0));
  *(float *)(param_1 + 0x54) =
       (float)(int)((int)fVar3 - (uint)((float)(int)fVar3 != fVar3 && fVar3 < 0.0));
  *(float *)(param_1 + 0x58) = (float)(int)((float)uVar1 * in_XMM0_Da);
  *(float *)(param_1 + 0x5c) = (float)(int)((float)((ulonglong)uVar1 >> 0x20) * in_XMM0_Da);
  *(float *)(param_1 + 0x60) = (float)(int)(*(float *)(param_1 + 0x60) * in_XMM0_Da);
  *(float *)(param_1 + 100) = (float)(int)(*(float *)(param_1 + 100) * in_XMM0_Da);
  *(float *)(param_1 + 0x68) = (float)(int)(*(float *)(param_1 + 0x68) * in_XMM0_Da);
  *(float *)(param_1 + 0x6c) = (float)(int)(*(float *)(param_1 + 0x6c) * in_XMM0_Da);
  return;
}


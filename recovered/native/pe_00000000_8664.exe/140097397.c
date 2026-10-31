/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140097397 */

void FUN_140097397(longlong param_1,float param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8);
  fVar2 = (float)uVar1;
  fVar3 = (float)((ulonglong)uVar1 >> 0x20);
  fVar2 = ((float)*(undefined8 *)(param_1 + 0x60) - fVar2) * param_2 + fVar2;
  fVar3 = ((float)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20) - fVar3) * param_2 + fVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(float *)(param_1 + 0x60) =
       (float)(int)((int)fVar2 - (uint)((float)(int)fVar2 != fVar2 && fVar2 < 0.0));
  *(float *)(param_1 + 100) =
       (float)(int)((int)fVar3 - (uint)((float)(int)fVar3 != fVar3 && fVar3 < 0.0));
  *(float *)(param_1 + 0x68) = (float)(int)((float)uVar1 * param_2);
  *(float *)(param_1 + 0x6c) = (float)(int)((float)((ulonglong)uVar1 >> 0x20) * param_2);
  *(float *)(param_1 + 0x70) = (float)(int)(*(float *)(param_1 + 0x70) * param_2);
  *(float *)(param_1 + 0x74) = (float)(int)(*(float *)(param_1 + 0x74) * param_2);
  *(float *)(param_1 + 0x78) = (float)(int)(*(float *)(param_1 + 0x78) * param_2);
  *(float *)(param_1 + 0x7c) = (float)(int)(*(float *)(param_1 + 0x7c) * param_2);
  return;
}


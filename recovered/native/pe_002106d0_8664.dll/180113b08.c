/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180113b08 */

void FUN_180113b08(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x68);
  fVar2 = *(float *)(param_1 + 0x6c);
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x4c8) == 0) {
      if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
        fVar2 = *(float *)(param_1 + 0xa0);
      }
    }
    else {
      fVar2 = (float)FUN_18011a456();
    }
  }
  fVar3 = *param_2 - fVar3;
  fVar1 = *(float *)(param_1 + 100);
  fVar4 = param_2[1] - fVar2;
  if ((param_2[1] - fVar2 <= fVar1) && (fVar4 = param_2[3], fVar1 <= param_2[3])) {
    fVar4 = fVar1;
  }
  fVar2 = *(float *)(param_1 + 0x60);
  if ((fVar3 <= fVar2) && (fVar3 = param_2[2], fVar2 <= param_2[2])) {
    fVar3 = fVar2;
  }
  *(float *)(param_1 + 0x60) = fVar3;
  *(float *)(param_1 + 100) = fVar4;
  return;
}


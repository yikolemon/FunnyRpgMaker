/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010ed4b */

void __fastcall FUN_1010ed4b(int param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(param_1 + 0x58);
  fVar5 = *(float *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 0x120) & 1) == 0) {
    if (*(int *)(param_1 + 0x434) == 0) {
      if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
        fVar5 = *(float *)(param_1 + 0x90);
      }
    }
    else {
      fVar2 = (float10)FUN_101155f9();
      fVar5 = (float)fVar2;
    }
  }
  fVar3 = *param_2 - fVar3;
  fVar1 = *(float *)(param_1 + 0x54);
  fVar4 = param_2[1] - fVar5;
  if ((param_2[1] - fVar5 <= fVar1) && (fVar4 = param_2[3], fVar1 <= param_2[3])) {
    fVar4 = fVar1;
  }
  fVar5 = *(float *)(param_1 + 0x50);
  if ((fVar3 <= fVar5) && (fVar3 = param_2[2], fVar5 <= param_2[2])) {
    fVar3 = fVar5;
  }
  *(float *)(param_1 + 0x50) = fVar3;
  *(float *)(param_1 + 0x54) = fVar4;
  return;
}


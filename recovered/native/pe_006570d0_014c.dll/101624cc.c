/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101624cc */

float10 FUN_101624cc(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_1 + 0x94);
  fVar2 = *(float *)(param_1 + 0x9c);
  fVar5 = *(float *)(param_1 + 0x8c) + fVar1 + fVar1 + *(float *)(param_1 + 0x98) + fVar2;
  iVar3 = param_2 * 0x74 + *(int *)(param_1 + 0x10);
  fVar4 = DAT_102b89b4;
  if ((*(uint *)(param_1 + 4) >> 0x18 & 1) == 0) {
    if ((*(uint *)(param_1 + 4) >> 0x12 & 1) == 0) {
      fVar4 = ((((*(float *)(param_1 + 0xec) -
                 (float)(~(int)*(short *)(iVar3 + 0x58) + (int)*(short *)(param_1 + 0x1b6)) * fVar5)
                - *(float *)(iVar3 + 8)) - fVar2) - (fVar1 + fVar1)) - *(float *)(param_1 + 0x90);
    }
  }
  else if (*(short *)(iVar3 + 0x56) < *(short *)(param_1 + 0x1e0)) {
    fVar4 = ((((*(float *)(param_1 + 0xfc) -
               (float)((int)*(short *)(param_1 + 0x1e0) - (int)*(short *)(iVar3 + 0x56)) * fVar5) -
              *(float *)(iVar3 + 8)) - *(float *)(param_1 + 0x90)) - fVar1) - fVar2;
  }
  return (float10)fVar4;
}


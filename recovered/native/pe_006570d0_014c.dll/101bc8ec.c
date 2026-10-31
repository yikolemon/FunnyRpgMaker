/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bc8ec */

void __thiscall FUN_101bc8ec(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = (float)*(int *)(param_1 + 0xc);
  *(float *)(param_1 + 0x60) = fVar5;
  cVar1 = *(char *)(param_1 + 0x14);
  fVar4 = (float10)FUN_1026dde0((double)(DAT_102b70e0 * fVar5));
  fVar6 = param_2;
  if (cVar1 == '\0') {
    fVar6 = (float)fVar4 + param_2;
  }
  fVar4 = (float10)FUN_1026dde0((double)*(float *)(param_1 + 8));
  fVar7 = (float)fVar4;
  *(float *)(param_1 + 0x50) = fVar7;
  *(float *)(param_1 + 0x54) = fVar7;
  iVar2 = (int)(fVar6 / (fVar7 + fVar5));
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x6c) = iVar3;
  if ((cVar1 == '\x01') && (1 < iVar2)) {
    fVar4 = (float10)FUN_1026dde0((double)(param_2 - fVar7 * (float)iVar3));
    fVar5 = (float)fVar4 / (float)iVar3;
    *(float *)(param_1 + 0x60) = fVar5;
  }
  if (*(char *)(param_1 + 0x15) == '\x01') {
    iVar3 = iVar3 * 2;
    *(int *)(param_1 + 0x6c) = iVar3;
  }
  *(int *)(param_1 + 0x70) = (*(int *)(param_1 + 0x18) + iVar3 + -1) / iVar3;
  *(float *)(param_1 + 0x58) = fVar7 + fVar5;
  *(float *)(param_1 + 0x5c) = fVar7 + fVar5;
  fVar4 = (float10)FUN_1026dde0((double)fVar5,fVar5);
  fVar6 = (float)fVar4 - (float)*(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 100) = -(uint)(0.0 <= fVar6) & (uint)fVar6;
  fVar4 = (float10)FUN_1026dde0((double)(fVar5 * DAT_102b70e0));
  *(float *)(param_1 + 0x68) = (float)fVar4;
  return;
}


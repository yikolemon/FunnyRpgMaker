/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010bb1c */

void FUN_14010bb1c(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  fVar6 = (float)*(int *)(param_1 + 0xc);
  *(float *)(param_1 + 0x74) = fVar6;
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == '\0') {
    fVar4 = (float)FUN_1401a3430(DAT_1401c86a0 * fVar6);
    param_2 = param_2 + fVar4;
  }
  fVar4 = (float)FUN_1401a3430(*(undefined4 *)(param_1 + 8));
  *(float *)(param_1 + 100) = fVar4;
  *(float *)(param_1 + 0x68) = fVar4;
  iVar2 = (int)(param_2 / (fVar4 + fVar6));
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x80) = iVar3;
  if ((cVar1 != '\0') && (1 < iVar2)) {
    fVar6 = (float)FUN_1401a3430(param_2 - fVar4 * (float)iVar3);
    fVar6 = fVar6 / (float)iVar3;
    *(float *)(param_1 + 0x74) = fVar6;
  }
  if (*(char *)(param_1 + 0x15) == '\x01') {
    iVar3 = iVar3 * 2;
    *(int *)(param_1 + 0x80) = iVar3;
  }
  iVar2 = *(int *)(param_1 + 0x18) + iVar3 + -1;
  *(int *)(param_1 + 0x84) = iVar2 / iVar3;
  *(float *)(param_1 + 0x6c) = fVar4 + fVar6;
  *(float *)(param_1 + 0x70) = fVar4 + fVar6;
  fVar4 = (float)FUN_1401a3430(fVar6,(longlong)iVar2 % (longlong)iVar3 & 0xffffffff);
  fVar4 = fVar4 - (float)*(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x78) = -(uint)(0.0 <= fVar4) & (uint)fVar4;
  uVar5 = FUN_1401a3430(fVar6 * DAT_1401c86a0);
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c5e18 */

void FUN_1801c5e18(longlong param_1,float param_2)

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
    fVar4 = (float)FUN_1802851f0(DAT_1802dbb2c * fVar6);
    param_2 = param_2 + fVar4;
  }
  fVar4 = (float)FUN_1802851f0(*(undefined4 *)(param_1 + 8));
  *(float *)(param_1 + 100) = fVar4;
  *(float *)(param_1 + 0x68) = fVar4;
  iVar2 = (int)(param_2 / (fVar4 + fVar6));
  iVar3 = 1;
  if (1 < iVar2) {
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x80) = iVar3;
  if ((cVar1 != '\0') && (1 < iVar2)) {
    fVar6 = (float)FUN_1802851f0(param_2 - fVar4 * (float)iVar3);
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
  fVar4 = (float)FUN_1802851f0(fVar6,(longlong)iVar2 % (longlong)iVar3 & 0xffffffff);
  fVar4 = fVar4 - (float)*(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x78) = -(uint)(0.0 <= fVar4) & (uint)fVar4;
  uVar5 = FUN_1802851f0(fVar6 * DAT_1802dbb2c);
  *(undefined4 *)(param_1 + 0x7c) = uVar5;
  return;
}


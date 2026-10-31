/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165364 */

void FUN_10165364(uint param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  if (*(char *)(iVar1 + 0x1ed) == '\0') {
    FUN_10161186(iVar1);
  }
  if (*(char *)(iVar1 + 0x1ee) == '\x01') {
    FUN_101639ce(iVar1);
  }
  *(uint *)(iVar1 + 0x68) = param_1 & 0xffff | *(int *)(iVar1 + 0x68) << 0x10;
  *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(iVar2 + 0xd30);
  *(float *)(iVar1 + 0x58) = param_2;
  FUN_1016540f(iVar1);
  fVar4 = *(float *)(iVar1 + 0x5c) + *(float *)(iVar1 + 0x5c) + *(float *)(iVar1 + 0x54);
  *(float *)(iVar1 + 0x54) = fVar4;
  fVar3 = (float10)FUN_100fdbca(fVar4,param_2 + *(float *)(iVar1 + 0x50));
  *(float *)(iVar1 + 0x54) = (float)fVar3;
  *(undefined1 *)(*(int *)(iVar1 + 0x158) + 0xfe) = 1;
  return;
}


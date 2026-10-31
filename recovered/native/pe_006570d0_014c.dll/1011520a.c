/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011520a */

void FUN_1011520a(float param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  iVar3 = *(int *)(iVar1 + 0x224);
  if (iVar3 == *(int *)(iVar1 + 0x228)) {
    if (iVar3 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar3 / 2 + iVar3;
    }
    iVar5 = iVar3 + 1;
    if (iVar3 + 1 < iVar4) {
      iVar5 = iVar4;
    }
    iVar4 = FUN_100fa1fa(iVar5 * 4);
    if (*(int *)(iVar1 + 0x22c) != 0) {
      FUN_1025b2d0(iVar4,*(int *)(iVar1 + 0x22c),*(int *)(iVar1 + 0x224) << 2);
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x22c));
    }
    *(int *)(iVar1 + 0x22c) = iVar4;
    *(int *)(iVar1 + 0x228) = iVar5;
    iVar3 = *(int *)(iVar1 + 0x224);
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x22c);
  }
  *(undefined4 *)(iVar4 + iVar3 * 4) = *(undefined4 *)(iVar1 + 0x218);
  *(int *)(iVar1 + 0x224) = *(int *)(iVar1 + 0x224) + 1;
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    param_1 = *(float *)(iVar1 + 0x21c);
  }
  *(float *)(iVar1 + 0x218) = param_1;
  *(byte *)(iVar2 + 0x1e48) = *(byte *)(iVar2 + 0x1e48) & 0xfe;
  return;
}


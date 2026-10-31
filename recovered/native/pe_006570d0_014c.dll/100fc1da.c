/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fc1da */

void __fastcall FUN_100fc1da(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float in_XMM0_Da;
  float in_XMM1_Da;
  
  iVar3 = DAT_1039d74c;
  iVar2 = *(int *)(DAT_1039d74c + 0x14cc);
  fVar1 = *(float *)(iVar2 + 0x148);
  *(float *)(iVar2 + 0x148) = in_XMM0_Da;
  fVar5 = (float10)FUN_100fdbca(*(undefined4 *)(iVar2 + 0x160),
                                in_XMM0_Da - *(float *)(iVar3 + 0xd20));
  *(float *)(iVar2 + 0x160) = (float)fVar5;
  *(float *)(iVar2 + 0x150) = *(float *)(iVar2 + 0x148) - in_XMM1_Da;
  *(float *)(iVar2 + 0x178) = in_XMM1_Da - *(float *)(iVar3 + 0xd20);
  if (*(int *)(iVar2 + 0x1e8) != 0) {
    *(float *)(*(int *)(iVar2 + 0x1e8) + 0x1c) = *(float *)(iVar2 + 0x148);
  }
  iVar3 = *(int *)(iVar3 + 0x2308);
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0x1ee) == '\x01') {
      FUN_101639ce(iVar3);
    }
    iVar4 = (int)((in_XMM0_Da - fVar1) / in_XMM1_Da + DAT_102b70e0);
    if ((0 < iVar4) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
      *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + iVar4;
      *(int *)(iVar3 + 0x6c) = *(int *)(iVar3 + 0x6c) + iVar4;
    }
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar2 + 0x148);
  }
  return;
}


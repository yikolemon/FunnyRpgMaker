/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115acd */

void FUN_10115acd(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  fVar2 = (float10)FUN_100fdbca(*(undefined4 *)(iVar1 + 0x84),*(undefined4 *)(DAT_1039d74c + 0xd20))
  ;
  fVar3 = (float)fVar2;
  fVar2 = (float10)FUN_100ea365(*(float *)(iVar1 + 0x150) - fVar3,
                                *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 0x150) + fVar3,
                                param_1,fVar3);
  FUN_1011587f(iVar1,(float)fVar2 - *(float *)(iVar1 + 0x54),param_1);
  fVar2 = (float10)FUN_100fdbca(0,*(float *)(iVar1 + 0x84) - fVar3);
  *(float *)(iVar1 + 0xe8) = (float)fVar2;
  return;
}


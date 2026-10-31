/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10115a03 */

void FUN_10115a03(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  fVar3 = (float10)FUN_100fdbca(*(undefined4 *)(iVar1 + 0x80),*(undefined4 *)(DAT_1039d74c + 0xd1c))
  ;
  fVar4 = (float)fVar3;
  fVar3 = (float10)FUN_100ea365(*(float *)(iVar2 + 0x1e8c) - fVar4,
                                *(float *)(iVar2 + 0x1e94) + fVar4,param_1,fVar4);
  FUN_10115835(iVar1,(float)fVar3 - *(float *)(iVar1 + 0x50),param_1);
  fVar3 = (float10)FUN_100fdbca(0,*(float *)(iVar1 + 0x80) - fVar4);
  *(float *)(iVar1 + 0xe4) = (float)fVar3;
  return;
}


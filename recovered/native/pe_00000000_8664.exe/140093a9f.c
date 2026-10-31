/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093a9f */

void FUN_140093a9f(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  lVar2 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  fVar3 = (float)FUN_14007b71f(*(undefined4 *)(lVar1 + 0x90),*(undefined4 *)(DAT_140f2a910 + 0xe04))
  ;
  fVar4 = (float)FUN_140048631(*(float *)(lVar2 + 0x1fec) - fVar3,*(float *)(lVar2 + 0x1ff4) + fVar3
                               ,param_1);
  FUN_140093943(lVar1,fVar4 - *(float *)(lVar1 + 0x60),param_1);
  uVar5 = FUN_14007b71f(0,*(float *)(lVar1 + 0x90) - fVar3);
  *(undefined4 *)(lVar1 + 0xf4) = uVar5;
  return;
}


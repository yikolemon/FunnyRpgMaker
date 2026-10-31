/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a87c */

void FUN_18011a87c(undefined4 param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  fVar2 = (float)FUN_180102463(*(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(DAT_180419160 + 0xe08))
  ;
  fVar3 = (float)FUN_1800eebd5(*(float *)(lVar1 + 0x164) - fVar2,
                               *(float *)(lVar1 + 0x18c) + *(float *)(lVar1 + 0x164) + fVar2,param_1
                              );
  FUN_18011a6c1(lVar1,fVar3 - *(float *)(lVar1 + 100),param_1);
  uVar4 = FUN_180102463(0,*(float *)(lVar1 + 0x94) - fVar2);
  *(undefined4 *)(lVar1 + 0xf8) = uVar4;
  return;
}


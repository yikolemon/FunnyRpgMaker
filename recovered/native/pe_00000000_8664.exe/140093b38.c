/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093b38 */

void FUN_140093b38(undefined4 param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  fVar2 = (float)FUN_14007b71f(*(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(DAT_140f2a910 + 0xe08))
  ;
  fVar3 = (float)FUN_140048631(*(float *)(lVar1 + 0x164) - fVar2,
                               *(float *)(lVar1 + 0x18c) + *(float *)(lVar1 + 0x164) + fVar2,param_1
                              );
  FUN_14009397d(lVar1,fVar3 - *(float *)(lVar1 + 100),param_1);
  uVar4 = FUN_14007b71f(0,*(float *)(lVar1 + 0x94) - fVar2);
  *(undefined4 *)(lVar1 + 0xf8) = uVar4;
  return;
}


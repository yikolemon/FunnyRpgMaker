/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011a7e3 */

void FUN_18011a7e3(undefined4 param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  lVar2 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  fVar3 = (float)FUN_180102463(*(undefined4 *)(lVar1 + 0x90),*(undefined4 *)(DAT_180419160 + 0xe04))
  ;
  fVar4 = (float)FUN_1800eebd5(*(float *)(lVar2 + 0x1fec) - fVar3,*(float *)(lVar2 + 0x1ff4) + fVar3
                               ,param_1);
  FUN_18011a687(lVar1,fVar4 - *(float *)(lVar1 + 0x60),param_1);
  uVar5 = FUN_180102463(0,*(float *)(lVar1 + 0x90) - fVar3);
  *(undefined4 *)(lVar1 + 0xf4) = uVar5;
  return;
}


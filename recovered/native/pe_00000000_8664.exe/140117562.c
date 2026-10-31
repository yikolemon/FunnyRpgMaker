/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140117562 */

undefined4 FUN_140117562(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = DAT_140f2a910;
  fVar6 = *(float *)(DAT_140f2a910 + 0x118);
  fVar1 = *(float *)(DAT_140f2a910 + 0x1694);
  fVar7 = *(float *)(DAT_140f2a910 + 0x1330) * DAT_140211518;
  fVar2 = *(float *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x60);
  fVar4 = (float)FUN_14011640a(param_2 + -1);
  uVar5 = FUN_14007b71f(((float)(int)fVar7 + (fVar6 - fVar1)) - fVar2,
                        fVar4 + *(float *)(lVar3 + 0xe28));
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    return uVar5;
  }
  fVar6 = (float)FUN_14011640a(param_2 + 1);
  uVar5 = FUN_14004863e(uVar5,fVar6 - *(float *)(lVar3 + 0xe28));
  return uVar5;
}


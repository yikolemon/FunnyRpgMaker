/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016f592 */

undefined4 FUN_18016f592(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  lVar3 = DAT_180419160;
  fVar6 = *(float *)(DAT_180419160 + 0x118);
  fVar1 = *(float *)(DAT_180419160 + 0x1694);
  fVar7 = *(float *)(DAT_180419160 + 0x1330) * DAT_1802dbb50;
  fVar2 = *(float *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x60);
  fVar4 = (float)FUN_18016e43a(param_2 + -1);
  uVar5 = FUN_180102463(((float)(int)fVar7 + (fVar6 - fVar1)) - fVar2,
                        fVar4 + *(float *)(lVar3 + 0xe28));
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    return uVar5;
  }
  fVar6 = (float)FUN_18016e43a(param_2 + 1);
  uVar5 = FUN_1800eebe2(uVar5,fVar6 - *(float *)(lVar3 + 0xe28));
  return uVar5;
}


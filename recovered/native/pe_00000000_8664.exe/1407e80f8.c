/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407e80f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407e80f8(uint *param_1)

{
  uint uVar1;
  float fVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint uVar5;
  float fVar6;
  
  puVar4 = (uint *)(ulonglong)((int)&stack0xfffffffffffffff0 - 0x10);
  uVar3 = (ulonglong)*param_1;
  fVar6 = (float)(int)((float)puVar4[7] + _DAT_150a9f1f5);
  uVar5 = -(uint)((float)puVar4[8] < 0.0);
  fVar2 = (float)(~uVar5 & puVar4[8] | param_1[3] & uVar5);
  if (*param_1 != 0) {
    if ((*(float *)(uVar3 + 0x10) == fVar6) && (!NAN(*(float *)(uVar3 + 0x10)) && !NAN(fVar6))) {
      if ((*(float *)(uVar3 + 0x14) == fVar2) && (!NAN(*(float *)(uVar3 + 0x14)) && !NAN(fVar2))) {
        return uVar3;
      }
    }
  }
  uVar5 = ((int *)((ulonglong)param_1 & 0xffffffff))[1];
  uVar1 = *(uint *)((ulonglong)uVar5 + 0x290);
  puVar4[3] = (uint)fVar2;
  puVar4[2] = (uint)fVar6;
  puVar4[1] = (uint)param_1;
  *puVar4 = uVar5;
  puVar4[-2] = 0x407e8172;
  puVar4[-1] = 1;
  uVar3 = FUN_1407eafa5();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(uVar3 + 0x40) = *(undefined4 *)((ulonglong)uVar1 + 0x94);
    *(int *)((ulonglong)param_1 & 0xffffffff) = (int)uVar3;
  }
  return uVar3;
}


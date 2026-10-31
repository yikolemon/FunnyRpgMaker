/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004ff5b */

uint FUN_14004ff5b(longlong param_1,undefined8 *param_2,uint param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (ulonglong)param_3;
  pbVar1 = (byte *)*param_2;
  if (*pbVar1 == 0xff) {
    uVar3 = (uint)pbVar1[4] | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[3] << 8 |
            (uint)pbVar1[1] << 0x18;
    if (param_3 != 0) {
      uVar4 = -uVar3;
      if (-1 < (int)((uint)pbVar1[1] << 0x18)) {
        uVar4 = uVar3;
      }
      if (*(int *)(&DAT_1400f6cc0 + uVar2 * 4) < (int)uVar4) {
        uVar3 = (uint)((int)uVar3 < 1) * 2 + 0x7fffffff;
      }
      else {
        uVar3 = uVar3 * *(int *)(&DAT_1400f6c90 + uVar2 * 4);
      }
    }
  }
  else {
    if (*pbVar1 == 0x1e) {
      uVar3 = FUN_14004f85b(pbVar1,*(byte **)(param_1 + 0x10),param_3,(int *)0x0);
      return uVar3;
    }
    uVar4 = FUN_14004fc21(pbVar1,*(byte **)(param_1 + 0x10));
    if (param_3 != 0) {
      uVar3 = -uVar4;
      if ((int)-uVar4 < 0) {
        uVar3 = uVar4;
      }
      if (*(int *)(&DAT_1400f6cc0 + uVar2 * 4) < (int)(uVar3 * 0x10000)) {
        return (uint)((int)uVar4 < 1) * 2 + 0x7fffffff;
      }
      uVar4 = uVar4 * *(int *)(&DAT_1400f6c90 + uVar2 * 4);
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar4 < 0x8000) {
      uVar3 = 0x80000001;
      if (-0x8000 < (int)uVar4) {
        uVar3 = uVar4 << 0x10;
      }
    }
  }
  return uVar3;
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044d2db */

uint __fastcall FUN_0044d2db(int param_1,undefined4 *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  pbVar1 = (byte *)*param_2;
  if (*pbVar1 == 0xff) {
    uVar2 = (uint)pbVar1[4] | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[3] << 8 |
            (uint)pbVar1[1] << 0x18;
    if (param_3 != 0) {
      uVar3 = -uVar2;
      if (-1 < (int)((uint)pbVar1[1] << 0x18)) {
        uVar3 = uVar2;
      }
      if (*(int *)(&DAT_004e479c + param_3 * 4) < (int)uVar3) {
        uVar2 = (uint)((int)uVar2 < 1) * 2 + 0x7fffffff;
      }
      else {
        uVar2 = uVar2 * *(int *)(&DAT_004e4774 + param_3 * 4);
      }
    }
  }
  else if (*pbVar1 == 0x1e) {
    uVar2 = FUN_0044cbd2(pbVar1,*(byte **)(param_1 + 8),param_3,(int *)0x0);
  }
  else {
    uVar3 = FUN_0044cfb0(pbVar1,*(byte **)(param_1 + 8));
    if (param_3 != 0) {
      uVar2 = -uVar3;
      if ((int)-uVar3 < 0) {
        uVar2 = uVar3;
      }
      if (*(int *)(&DAT_004e479c + param_3 * 4) < (int)(uVar2 * 0x10000)) {
        return (uint)((int)uVar3 < 1) * 2 + 0x7fffffff;
      }
      uVar3 = uVar3 * *(int *)(&DAT_004e4774 + param_3 * 4);
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar3 < 0x8000) {
      uVar2 = 0x80000001;
      if (-0x8000 < (int)uVar3) {
        uVar2 = uVar3 << 0x10;
      }
    }
  }
  return uVar2;
}


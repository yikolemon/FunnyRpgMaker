/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f5b63 */

uint __fastcall FUN_101f5b63(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == -1) {
    uVar2 = (uint)(byte)pcVar1[4] | (uint)(byte)pcVar1[2] << 0x10 | (uint)(byte)pcVar1[3] << 8 |
            (uint)(byte)pcVar1[1] << 0x18;
    if (param_3 != 0) {
      uVar5 = -uVar2;
      if (-1 < (int)((uint)(byte)pcVar1[1] << 0x18)) {
        uVar5 = uVar2;
      }
      if (*(int *)(&DAT_103101fc + param_3 * 4) < (int)uVar5) {
        uVar2 = (uint)((int)uVar2 < 1) * 2 + 0x7fffffff;
      }
      else {
        uVar2 = uVar2 * *(int *)(&DAT_103101d4 + param_3 * 4);
      }
    }
  }
  else if (*pcVar1 == '\x1e') {
    uVar2 = FUN_101f545a(param_3,0);
  }
  else {
    iVar3 = FUN_101f5838();
    if (param_3 != 0) {
      iVar4 = -iVar3;
      if (-iVar3 < 0) {
        iVar4 = iVar3;
      }
      if (*(int *)(&DAT_103101fc + param_3 * 4) < iVar4 * 0x10000) {
        return (uint)(iVar3 < 1) * 2 + 0x7fffffff;
      }
      iVar3 = iVar3 * *(int *)(&DAT_103101d4 + param_3 * 4);
    }
    uVar2 = 0x7fffffff;
    if (iVar3 < 0x8000) {
      uVar2 = 0x80000001;
      if (-0x8000 < iVar3) {
        uVar2 = iVar3 << 0x10;
      }
    }
  }
  return uVar2;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020291f */

ulonglong FUN_18020291f(longlong param_1,undefined8 *param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  
  uVar5 = (ulonglong)param_3;
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == -1) {
    uVar3 = (uint)(byte)pcVar1[4] | (uint)(byte)pcVar1[2] << 0x10 | (uint)(byte)pcVar1[3] << 8 |
            (uint)(byte)pcVar1[1] << 0x18;
    uVar6 = (ulonglong)uVar3;
    if (param_3 != 0) {
      uVar2 = -uVar3;
      if (-1 < (int)((uint)(byte)pcVar1[1] << 0x18)) {
        uVar2 = uVar3;
      }
      if (*(int *)(&DAT_180339ba0 + uVar5 * 4) < (int)uVar2) {
        uVar6 = (ulonglong)((uint)((int)uVar3 < 1) * 2 + 0x7fffffff);
      }
      else {
        uVar6 = (ulonglong)(uVar3 * *(int *)(&DAT_180339b70 + uVar5 * 4));
      }
    }
  }
  else {
    if (*pcVar1 == '\x1e') {
      uVar5 = FUN_18020221f(pcVar1,*(undefined8 *)(param_1 + 0x10),param_3,0);
      return uVar5;
    }
    iVar4 = FUN_1802025e5(pcVar1,*(undefined8 *)(param_1 + 0x10));
    if (param_3 != 0) {
      iVar7 = -iVar4;
      if (-iVar4 < 0) {
        iVar7 = iVar4;
      }
      if (*(int *)(&DAT_180339ba0 + uVar5 * 4) < iVar7 * 0x10000) {
        return (ulonglong)((uint)(iVar4 < 1) * 2 + 0x7fffffff);
      }
      iVar4 = iVar4 * *(int *)(&DAT_180339b70 + uVar5 * 4);
    }
    uVar6 = 0x7fffffff;
    if (iVar4 < 0x8000) {
      uVar6 = 0x80000001;
      if (-0x8000 < iVar4) {
        uVar6 = (ulonglong)(uint)(iVar4 << 0x10);
      }
    }
  }
  return uVar6;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d1f23 */

void FUN_1400d1f23(int param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  
  if (param_1 < 0x7ffc) {
    if ((0x12 < param_1 - 0x3a4U) || ((0x60011U >> (param_1 - 0x3a4U & 0x1f) & 1) == 0)) {
      if (param_1 - 0x4b0U < 2) {
        lVar2 = 0;
        sVar4 = (short)*param_3;
        while (sVar4 != 0) {
          *(short *)(param_2 + lVar2 * 2) = sVar4;
          lVar1 = lVar2 * 2;
          lVar2 = lVar2 + 1;
          sVar4 = *(short *)((longlong)param_3 + lVar1 + 2);
        }
        *(undefined2 *)(param_2 + lVar2 * 2) = 0;
        return;
      }
      if (param_1 != 0x4e4) {
        return;
      }
    }
  }
  else if (1 < param_1 - 0x7ffcU) {
    if (param_1 - 0x7ffeU < 2) {
      lVar2 = 0;
      iVar5 = *param_3;
      while (iVar5 != 0) {
        *(int *)(param_2 + lVar2 * 4) = iVar5;
        lVar1 = lVar2 + 1;
        lVar2 = lVar2 + 1;
        iVar5 = param_3[lVar1];
      }
      *(undefined4 *)(param_2 + lVar2 * 4) = 0;
      return;
    }
    if (param_1 != 0xfde9) {
      return;
    }
  }
  lVar2 = 0;
  cVar3 = (char)*param_3;
  while (cVar3 != '\0') {
    *(char *)(param_2 + lVar2) = cVar3;
    lVar1 = lVar2 + 1;
    lVar2 = lVar2 + 1;
    cVar3 = *(char *)((longlong)param_3 + lVar1);
  }
  *(undefined1 *)(param_2 + lVar2) = 0;
  return;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d2196 */

size_t FUN_1400d2196(int param_1,int *param_2)

{
  int iVar1;
  size_t sVar2;
  ulonglong uVar3;
  
  if (param_1 < 0x7ffc) {
    if ((0x12 < param_1 - 0x3a4U) || ((0x60011U >> (param_1 - 0x3a4U & 0x1f) & 1) == 0)) {
      if (param_1 - 0x4b0U < 2) {
        sVar2 = FUN_14011cf50(param_2);
        return sVar2;
      }
      if (param_1 != 0x4e4) {
        return 0;
      }
    }
  }
  else if (1 < param_1 - 0x7ffcU) {
    if (param_1 - 0x7ffeU < 2) {
      uVar3 = 0xffffffff;
      do {
        uVar3 = (ulonglong)((int)uVar3 + 1);
        iVar1 = *param_2;
        param_2 = param_2 + 1;
      } while (iVar1 != 0);
      return uVar3;
    }
    if (param_1 != 0xfde9) {
      return 0;
    }
  }
  sVar2 = strlen((char *)param_2);
  return sVar2;
}


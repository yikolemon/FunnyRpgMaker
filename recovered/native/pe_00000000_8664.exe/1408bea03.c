/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408bea03 */

char FUN_1408bea03(uint param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_1;
  lVar4 = (ulonglong)*(uint *)(uVar5 + 0x28) - 1;
  if (lVar4 == 0) {
    FUN_1408bed7b();
    FUN_1408be91b(param_1 + 8);
    return '\x01';
  }
  iVar2 = (int)lVar4;
  if (iVar2 == 1) {
    uVar3 = FUN_1408be905(param_1 + 8);
    if (uVar3 != 0xffffffff) {
      if (uVar3 == *(byte *)((ulonglong)param_1 + 0x2c)) {
        cVar1 = FUN_1408bea98((ulonglong)param_1);
        return cVar1;
      }
      FUN_1408be91b(param_1 + 8);
    }
    return '\0';
  }
  if (iVar2 == 2) {
    cVar1 = FUN_1408beae6();
    if (((cVar1 != '\0') && (*(int *)(uVar5 + 0x40) != 9)) && (*(char *)(uVar5 + 0x2e) == '\0')) {
      *(int *)(uVar5 + 0x70) = *(int *)(uVar5 + 0x70) + 1;
      return cVar1;
    }
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}


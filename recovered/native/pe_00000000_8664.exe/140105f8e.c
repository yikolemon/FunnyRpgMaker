/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140105f8e */

void FUN_140105f8e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0x208c0;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar5 = 0x20bc0;
  }
  bVar3 = FUN_1400c85b6(&DAT_140f31838,*(undefined4 *)(param_1 + 0x1c));
  FUN_1400c82a0(param_1);
  FUN_1400c6821(*(undefined4 *)(param_1 + 0x1c));
  cVar4 = FUN_1400c5ee6(param_1,bVar3 | uVar5);
  if (cVar4 != '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar6 = 0;
      do {
        FUN_140105f8e(*(undefined8 *)(lVar2 + lVar6));
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    FUN_1400c66d9();
    return;
  }
  cVar4 = FUN_140089f36();
  if (cVar4 != '\0') {
    FUN_1401065ee(param_1,0);
    return;
  }
  return;
}


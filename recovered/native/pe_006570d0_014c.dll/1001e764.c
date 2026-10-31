/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e764 */

undefined4 __thiscall FUN_1001e764(int param_1,char param_2)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar3 < 0x5c) {
    if (iVar3 == -1) {
      return 0;
    }
    if (iVar3 == 0x5b) {
      uVar2 = *(undefined1 *)(param_1 + 0x4d);
      FUN_1001d8ea();
      iVar3 = *(int *)(param_1 + 0x48);
      uVar1 = iVar3 - 0x2e;
      if ((uVar1 < 0x10) && ((0x9001U >> (uVar1 & 0x1f) & 1) != 0)) {
        FUN_1001d8ea();
        uVar4 = FUN_1001ebea(iVar3);
        return uVar4;
      }
      *(undefined1 *)(param_1 + 0x4e) = uVar2;
      return 1;
    }
  }
  else if (iVar3 == 0x5d) {
    if (param_2 == '\0') {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x38) & 0x20000000) == 0) {
      return 0;
    }
  }
  else if ((iVar3 == 0x5c) && ((*(byte *)(param_1 + 0x3a) & 0x10) != 0)) {
    FUN_1001d8ea();
    uVar4 = FUN_1001eb52();
    return uVar4;
  }
  *(undefined1 *)(param_1 + 0x4e) = *(undefined1 *)(param_1 + 0x4d);
  FUN_1001d8ea();
  return 1;
}


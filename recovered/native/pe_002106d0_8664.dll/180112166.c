/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180112166 */

void FUN_180112166(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = DAT_180419160;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  if ((*(byte *)(lVar3 + 0x2031) & 4) == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar3 + 0x20d8);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x110) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x111) == '\0') {
    if (((uVar1 & 2) != 0) && (*(longlong *)(lVar3 + 0x1610) != 0)) {
      lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1610) + 0x418);
      if (*(longlong *)(param_1 + 0x418) == lVar2) {
        return;
      }
      cVar4 = FUN_18010757d(lVar2,param_1);
      if (cVar4 != '\0') {
        return;
      }
    }
    if (((uVar1 & 4) != 0) && (*(longlong *)(lVar3 + 0x2200) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x2200) + 0x418);
      if (*(longlong *)(param_1 + 0x418) == lVar3) {
        return;
      }
      cVar4 = FUN_18010757d(lVar3,param_1);
      if (cVar4 != '\0') {
        return;
      }
    }
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined1 *)(param_1 + 0x10f) = 1;
    return;
  }
  return;
}


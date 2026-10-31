/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180117268 */

void FUN_180117268(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_180419160;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if ((*(byte *)(DAT_180419160 + 0x2acc) & 4) != 0) {
    FUN_1800fdfea("SetKeyboardFocusHere(%d) in window \"%s\"\n",param_1,*(undefined8 *)(lVar1 + 8));
  }
  if ((*(char *)(lVar2 + 0x2428) == '\0') && (*(longlong *)(lVar2 + 0x1628) == 0)) {
    FUN_180117090(lVar1);
    uVar3 = 3;
    if (*(char *)(lVar1 + 0x110) != '\0') {
      uVar3 = 0x21;
    }
    FUN_18011711d(0xffffffff,param_1 >> 0x1f ^ 3,0x5600,uVar3);
    if (param_1 == 0xffffffff) {
      FUN_18011722e(lVar2 + 0x22e8);
      return;
    }
    *(undefined4 *)(lVar2 + 0x22e0) = 1;
    *(uint *)(lVar2 + 0x22e4) = param_1 + 1;
  }
  else if ((*(byte *)(lVar2 + 0x2acc) & 4) != 0) {
    FUN_1800fdfea("SetKeyboardFocusHere() ignored while DragDropActive!\n");
  }
  return;
}


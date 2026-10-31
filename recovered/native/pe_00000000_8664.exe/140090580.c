/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090580 */

void FUN_140090580(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_140f2a910;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  if ((*(byte *)(DAT_140f2a910 + 0x2acc) & 4) != 0) {
    FUN_1400772a6("SetKeyboardFocusHere(%d) in window \"%s\"\n",param_1,*(undefined8 *)(lVar1 + 8));
  }
  if ((*(char *)(lVar2 + 0x2428) == '\0') && (*(longlong *)(lVar2 + 0x1628) == 0)) {
    FUN_1400903a8(lVar1);
    uVar3 = 3;
    if (*(char *)(lVar1 + 0x110) != '\0') {
      uVar3 = 0x21;
    }
    FUN_140090435(0xffffffff,param_1 >> 0x1f ^ 3,0x5600,uVar3);
    if (param_1 == 0xffffffff) {
      FUN_140090546(lVar2 + 0x22e8);
      return;
    }
    *(undefined4 *)(lVar2 + 0x22e0) = 1;
    *(uint *)(lVar2 + 0x22e4) = param_1 + 1;
  }
  else if ((*(byte *)(lVar2 + 0x2acc) & 4) != 0) {
    FUN_1400772a6("SetKeyboardFocusHere() ignored while DragDropActive!\n");
  }
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10112577 */

void FUN_10112577(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if ((*(byte *)(DAT_1039d74c + 0x27b4) & 4) != 0) {
    FUN_100f99e6("SetKeyboardFocusHere(%d) in window \"%s\"\n",param_1,*(undefined4 *)(iVar1 + 4));
  }
  if ((*(char *)(iVar2 + 0x2250) == '\0') && (*(int *)(iVar2 + 0x14dc) == 0)) {
    FUN_1011238c(iVar1);
    uVar3 = 3;
    if (*(char *)(iVar1 + 0x100) != '\0') {
      uVar3 = 0x21;
    }
    FUN_1011240d(0xffffffff,param_1 >> 0x1f ^ 3,0x5600,uVar3);
    if (param_1 == 0xffffffff) {
      FUN_10112545(iVar2 + 0x2120);
    }
    else {
      *(undefined4 *)(iVar2 + 0x2118) = 1;
      *(uint *)(iVar2 + 0x211c) = param_1 + 1;
    }
  }
  else if ((*(byte *)(iVar2 + 0x27b4) & 4) != 0) {
    FUN_100f99e6("SetKeyboardFocusHere() ignored while DragDropActive!\n");
  }
  return;
}


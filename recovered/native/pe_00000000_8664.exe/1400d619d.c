/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d619d */

void FUN_1400d619d(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1400d6041();
  lVar2 = FUN_140081211();
  if (*(int *)(lVar2 + 0x134) < 0) {
    uVar3 = FUN_140077ab4(0);
    if (*(longlong *)(lVar2 + 0x138) != 0) {
      FUN_1401c5180(uVar3,*(longlong *)(lVar2 + 0x138),(longlong)*(int *)(lVar2 + 0x130) * 0x30);
      FUN_140077b90(*(undefined8 *)(lVar2 + 0x138));
    }
    *(undefined8 *)(lVar2 + 0x138) = uVar3;
    *(undefined4 *)(lVar2 + 0x134) = 0;
  }
  *(undefined4 *)(lVar2 + 0x130) = 0;
  EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_1400d8846,0);
  *(undefined1 *)(lVar1 + 0x30) = 0;
  return;
}


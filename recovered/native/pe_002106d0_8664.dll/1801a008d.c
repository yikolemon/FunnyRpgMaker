/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a008d */

void FUN_1801a008d(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_18019ff31();
  lVar2 = FUN_180107ef9();
  if (*(int *)(lVar2 + 0x134) < 0) {
    uVar3 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar2 + 0x138) != 0) {
      FUN_1802a82f0(uVar3,*(longlong *)(lVar2 + 0x138),(longlong)*(int *)(lVar2 + 0x130) * 0x30);
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x138));
    }
    *(undefined8 *)(lVar2 + 0x138) = uVar3;
    *(undefined4 *)(lVar2 + 0x134) = 0;
  }
  *(undefined4 *)(lVar2 + 0x130) = 0;
  EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_1801a277c,0);
  *(undefined1 *)(lVar1 + 0x30) = 0;
  return;
}


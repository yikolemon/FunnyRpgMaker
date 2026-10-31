/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101af3f7 */

void FUN_101af3f7(void)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_10147d77("Fonts");
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x784,"Widgets/Fonts");
    iVar2 = FUN_1010330d();
    FUN_1011e1cb(*(undefined4 *)(iVar2 + 0x2c));
    FUN_10149387();
    return;
  }
  return;
}


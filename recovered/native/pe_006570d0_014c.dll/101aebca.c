/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101aebca */

void FUN_101aebca(void)

{
  char cVar1;
  
  cVar1 = FUN_10147d77("Disable Blocks");
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x69f,"Widgets/Disable Blocks");
    FUN_1012ff1a("Disable entire section above",&DAT_103a33ed);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    FUN_10149387();
    return;
  }
  return;
}


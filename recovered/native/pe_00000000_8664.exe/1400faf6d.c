/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400faf6d */

void FUN_1400faf6d(void)

{
  char cVar1;
  
  cVar1 = FUN_1400c51fb("Bullets");
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x4b9,"Widgets/Bullets");
    FUN_1400ac536("Bullet point 1");
    FUN_1400ac536("Bullet point 2\nOn multiple lines");
    cVar1 = FUN_1400c51fb("Tree node");
    if (cVar1 != '\0') {
      FUN_1400ac536("Another bullet point");
      FUN_1400c66d9();
    }
    FUN_1400b0125();
    FUN_1400abfd5("Bullet point 3 (two calls)");
    FUN_1400b0125();
    FUN_1400ad18f("Button");
    FUN_1400c66d9();
    return;
  }
  return;
}


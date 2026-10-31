/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101acffb */

void FUN_101acffb(void)

{
  char cVar1;
  
  cVar1 = FUN_10147d77("Bullets");
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x4b9,"Widgets/Bullets");
    FUN_1012d551("Bullet point 1");
    FUN_1012d551("Bullet point 2\nOn multiple lines");
    cVar1 = FUN_10147d77("Tree node");
    if (cVar1 != '\0') {
      FUN_1012d551("Another bullet point");
      FUN_10149387();
    }
    FUN_101316d8();
    FUN_1012d08c("Bullet point 3 (two calls)");
    FUN_101316d8();
    FUN_1012e1ca("Button");
    FUN_10149387();
    return;
  }
  return;
}


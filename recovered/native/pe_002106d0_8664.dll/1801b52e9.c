/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b52e9 */

void FUN_1801b52e9(void)

{
  char cVar1;
  
  cVar1 = FUN_18014c2cb("Bullets");
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x4b9,"Widgets/Bullets");
    FUN_180133606("Bullet point 1");
    FUN_180133606("Bullet point 2\nOn multiple lines");
    cVar1 = FUN_18014c2cb("Tree node");
    if (cVar1 != '\0') {
      FUN_180133606("Another bullet point");
      FUN_18014d7a9();
    }
    FUN_1801371f5();
    FUN_1801330a5("Bullet point 3 (two calls)");
    FUN_1801371f5();
    FUN_18013425f("Button");
    FUN_18014d7a9();
    return;
  }
  return;
}


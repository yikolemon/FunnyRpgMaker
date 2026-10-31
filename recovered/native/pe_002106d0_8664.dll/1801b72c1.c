/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b72c1 */

void FUN_1801b72c1(void)

{
  char cVar1;
  
  cVar1 = FUN_18014c2cb("Disable Blocks");
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x69f,"Widgets/Disable Blocks");
    FUN_180135c3a("Disable entire section above",&DAT_18041f1f5);
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063("Demonstrate using BeginDisabled()/EndDisabled() across other sections.");
    FUN_18014d7a9();
    return;
  }
  return;
}


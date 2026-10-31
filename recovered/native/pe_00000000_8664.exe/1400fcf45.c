/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fcf45 */

void FUN_1400fcf45(void)

{
  char cVar1;
  
  cVar1 = FUN_1400c51fb("Disable Blocks");
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x69f,"Widgets/Disable Blocks");
    FUN_1400aeb6a("Disable entire section above",&DAT_140f30945);
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92("Demonstrate using BeginDisabled()/EndDisabled() across other sections.");
    FUN_1400c66d9();
    return;
  }
  return;
}


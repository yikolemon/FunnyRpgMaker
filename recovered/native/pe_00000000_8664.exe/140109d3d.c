/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140109d3d */

void FUN_140109d3d(void)

{
  byte *pbVar1;
  char cVar2;
  
  pbVar1 = (byte *)FUN_140081200();
  FUN_1400abfd5("ERROR: Docking is not enabled! See Demo > Configuration.");
  FUN_1400abfd5("Set io.ConfigFlags |= ImGuiConfigFlags_DockingEnable in your code, or ");
  FUN_140092bab(0,0);
  cVar2 = FUN_1400ad18f("click here");
  if (cVar2 != '\0') {
    *pbVar1 = *pbVar1 | 0x80;
  }
  return;
}


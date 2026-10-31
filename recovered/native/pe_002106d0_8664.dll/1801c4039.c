/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c4039 */

void FUN_1801c4039(void)

{
  byte *pbVar1;
  char cVar2;
  
  pbVar1 = (byte *)FUN_180107ee8();
  FUN_1801330a5("ERROR: Docking is not enabled! See Demo > Configuration.");
  FUN_1801330a5("Set io.ConfigFlags |= ImGuiConfigFlags_DockingEnable in your code, or ");
  FUN_180119893(0,0);
  cVar2 = FUN_18013425f("click here");
  if (cVar2 != '\0') {
    *pbVar1 = *pbVar1 | 0x80;
  }
  return;
}


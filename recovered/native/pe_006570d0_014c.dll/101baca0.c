/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101baca0 */

void FUN_101baca0(void)

{
  char cVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)FUN_1010330d();
  FUN_1012d08c("ERROR: Docking is not enabled! See Demo > Configuration.");
  FUN_1012d08c("Set io.ConfigFlags |= ImGuiConfigFlags_DockingEnable in your code, or ");
  FUN_10114a0e(0,0);
  cVar1 = FUN_1012e1ca("click here");
  if (cVar1 != '\0') {
    *pbVar2 = *pbVar2 | 0x80;
  }
  return;
}


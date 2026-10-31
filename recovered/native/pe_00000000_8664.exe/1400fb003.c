/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fb003 */

void FUN_1400fb003(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  cVar1 = FUN_1400c51fb("Collapsing Headers");
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x4cf,"Widgets/Collapsing Headers");
    FUN_1400aeb6a("Show 2nd header",&DAT_140f17ff4);
    iVar3 = 0;
    cVar1 = FUN_1400c6846("Header",0);
    if (cVar1 != '\0') {
      uVar2 = FUN_1400808b4(0);
      FUN_1400abfd5("IsItemHovered: %d",uVar2);
      do {
        FUN_1400abfd5("Some content %d",iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
    }
    iVar3 = 0;
    cVar1 = FUN_1400c68a2("Header with a close button",&DAT_140f17ff4,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_1400808b4(0);
      FUN_1400abfd5("IsItemHovered: %d",uVar2);
      do {
        FUN_1400abfd5("More content %d",iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
    }
    FUN_1400c66d9();
    return;
  }
  return;
}


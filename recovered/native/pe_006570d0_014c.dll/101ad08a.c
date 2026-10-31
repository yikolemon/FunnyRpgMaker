/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ad08a */

void FUN_101ad08a(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  cVar1 = FUN_10147d77("Collapsing Headers");
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x4cf,"Widgets/Collapsing Headers");
    FUN_1012ff1a("Show 2nd header",&DAT_1038aa0c);
    cVar1 = FUN_101494f9("Header",0);
    if (cVar1 != '\0') {
      uVar2 = FUN_10102a1a(0);
      FUN_1012d08c("IsItemHovered: %d",uVar2);
      iVar3 = 0;
      do {
        FUN_1012d08c("Some content %d",iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
    }
    cVar1 = FUN_10149544("Header with a close button",&DAT_1038aa0c,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_10102a1a(0);
      FUN_1012d08c("IsItemHovered: %d",uVar2);
      iVar3 = 0;
      do {
        FUN_1012d08c("More content %d",iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
    }
    FUN_10149387();
    return;
  }
  return;
}


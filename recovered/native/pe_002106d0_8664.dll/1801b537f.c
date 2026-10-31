/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b537f */

void FUN_1801b537f(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  cVar1 = FUN_18014c2cb("Collapsing Headers");
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x4cf,"Widgets/Collapsing Headers");
    FUN_180135c3a("Show 2nd header",&DAT_180404854);
    iVar3 = 0;
    cVar1 = FUN_18014d916("Header",0);
    if (cVar1 != '\0') {
      uVar2 = FUN_18010759c(0);
      FUN_1801330a5("IsItemHovered: %d",uVar2);
      do {
        FUN_1801330a5("Some content %d",iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
    }
    iVar3 = 0;
    cVar1 = FUN_18014d972("Header with a close button",&DAT_180404854,0);
    if (cVar1 != '\0') {
      uVar2 = FUN_18010759c(0);
      FUN_1801330a5("IsItemHovered: %d",uVar2);
      do {
        FUN_1801330a5("More content %d",iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
    }
    FUN_18014d7a9();
    return;
  }
  return;
}


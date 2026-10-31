/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019cc66 */

void FUN_1019cc66(void)

{
  char cVar1;
  
  cVar1 = FUN_1014ce39();
  if (cVar1 != '\0') {
    cVar1 = FUN_1014db73("File",1);
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x2306,"Menu/File");
      FUN_101ac3af();
      FUN_1014db88();
    }
    cVar1 = FUN_1014db73("Edit",1);
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x230c,"Menu/Edit");
      FUN_10131d08(&DAT_103359eb,"Ctrl+Z",0,1);
      FUN_10131d08("Redo","Ctrl+Y",0,0);
      FUN_10132188();
      FUN_10131d08(&DAT_1033127f,"Ctrl+X",0,1);
      FUN_10131d08(&DAT_10330487,"Ctrl+C",0,1);
      FUN_10131d08("Paste","Ctrl+V",0,1);
      FUN_1014db88();
    }
    FUN_1014cee9();
    return;
  }
  return;
}


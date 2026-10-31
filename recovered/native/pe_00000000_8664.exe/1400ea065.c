/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ea065 */

void FUN_1400ea065(void)

{
  char cVar1;
  
  cVar1 = FUN_1400ca189();
  if (cVar1 != '\0') {
    cVar1 = FUN_1400cadcc("File",1);
    if (cVar1 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x2306,"Menu/File");
      FUN_1400fa107();
      FUN_1400cadd6();
    }
    cVar1 = FUN_1400cadcc("Edit",1);
    if (cVar1 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x230c,"Menu/Edit");
      FUN_1400b06d6(&DAT_140ec6f49,"Ctrl+Z",0,1);
      FUN_1400b06d6("Redo","Ctrl+Y",0,0);
      FUN_1400b0bd1();
      FUN_1400b06d6(&DAT_140ec34b3,"Ctrl+X",0,1);
      FUN_1400b06d6(&DAT_140ec27a5,"Ctrl+C",0,1);
      FUN_1400b06d6("Paste",&DAT_140ecca7b,0,1);
      FUN_1400cadd6();
    }
    FUN_1400ca22f();
    return;
  }
  return;
}


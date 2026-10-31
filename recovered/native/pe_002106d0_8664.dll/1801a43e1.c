/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a43e1 */

void FUN_1801a43e1(void)

{
  char cVar1;
  
  cVar1 = FUN_180151259();
  if (cVar1 != '\0') {
    cVar1 = FUN_180151e9c("File",1);
    if (cVar1 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x2306,"Menu/File");
      FUN_1801b4483();
      FUN_180151ea6();
    }
    cVar1 = FUN_180151e9c("Edit",1);
    if (cVar1 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x230c,"Menu/Edit");
      FUN_1801377a6(&DAT_180365aec,"Ctrl+Z",0,1);
      FUN_1801377a6("Redo","Ctrl+Y",0,0);
      FUN_180137ca1();
      FUN_1801377a6(&DAT_18036139b,"Ctrl+X",0,1);
      FUN_1801377a6(&DAT_1803605a3,"Ctrl+C",0,1);
      FUN_1801377a6("Paste","Ctrl+V",0,1);
      FUN_180151ea6();
    }
    FUN_1801512ff();
    return;
  }
  return;
}


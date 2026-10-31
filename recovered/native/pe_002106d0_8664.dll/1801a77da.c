/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a77da */

void FUN_1801a77da(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_18010ca66("Example: Auto-resizing window",&DAT_18041f1eb,0x40);
  if (cVar1 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x2716,"Examples/Auto-resizing window");
    iVar3 = 0;
    FUN_18013309a("Window will resize every-frame to the size of its content.\nNote that you probably don\'t want to query the window size to\noutput your content because that would create a feedback loop."
                  ,0);
    FUN_18014162a("Number of lines",&DAT_180408e60,1,0x14,&DAT_18036b4b0,0);
    if (0 < DAT_180408e60) {
      iVar2 = 0;
      do {
        FUN_1801330a5("%*sThis is line %d",iVar3,&DAT_1803861e4,iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < DAT_180408e60);
    }
  }
  FUN_18010f900();
  return;
}


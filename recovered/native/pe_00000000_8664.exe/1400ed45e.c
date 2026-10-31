/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ed45e */

void FUN_1400ed45e(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_140085d7e("Example: Auto-resizing window",&DAT_140f3093b,0x40);
  if (cVar1 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x2716,"Examples/Auto-resizing window");
    iVar3 = 0;
    FUN_1400abfca("Window will resize every-frame to the size of its content.\nNote that you probably don\'t want to query the window size to\noutput your content because that would create a feedback loop."
                  ,0);
    FUN_1400ba55a("Number of lines",&DAT_140f1c600,1,0x14,&DAT_140ecbfd4,0);
    if (0 < DAT_140f1c600) {
      iVar2 = 0;
      do {
        FUN_1400abfd5("%*sThis is line %d",iVar3,&DAT_140edcdbf,iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < DAT_140f1c600);
    }
  }
  FUN_140088c18();
  return;
}


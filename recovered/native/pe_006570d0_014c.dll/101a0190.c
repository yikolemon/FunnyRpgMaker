/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101a0190 */

void FUN_101a0190(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_10107d2b("Example: Auto-resizing window",&DAT_103a33e3,0x40);
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x2716,"Examples/Auto-resizing window");
    iVar2 = 0;
    FUN_1012d079("Window will resize every-frame to the size of its content.\nNote that you probably don\'t want to query the window size to\noutput your content because that would create a feedback loop."
                 ,0);
    FUN_1013d499("Number of lines",&DAT_1038ef5c,1,0x14,&DAT_1033b386,0);
    if (0 < DAT_1038ef5c) {
      iVar3 = 0;
      do {
        FUN_1012d08c("%*sThis is line %d",iVar2,&DAT_10356101,iVar3);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < DAT_1038ef5c);
    }
  }
  FUN_1010ad44();
  return;
}


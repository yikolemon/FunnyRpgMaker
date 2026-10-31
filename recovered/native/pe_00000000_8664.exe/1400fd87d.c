/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fd87d */

void FUN_1400fd87d(void)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1400c51fb("Fonts");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x784,"Widgets/Fonts");
    lVar1 = FUN_140081200();
    FUN_14009c67a(*(undefined8 *)(lVar1 + 0x38));
    FUN_1400c66d9();
    return;
  }
  return;
}


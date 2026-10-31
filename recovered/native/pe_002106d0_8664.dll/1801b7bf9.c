/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b7bf9 */

void FUN_1801b7bf9(void)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_18014c2cb("Fonts");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x784,"Widgets/Fonts");
    lVar1 = FUN_180107ee8();
    FUN_18012374b(*(undefined8 *)(lVar1 + 0x38));
    FUN_18014d7a9();
    return;
  }
  return;
}


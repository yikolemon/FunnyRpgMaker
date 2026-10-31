/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bd371 */

void FUN_1801bd371(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_18014c2cb("Text Filter",param_2,param_3,param_4,0xfffffffffffffffe);
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0xf27,"Widgets/Text Filter");
    FUN_180124063(
                 "Not a widget per-se, but ImGuiTextFilter is a helper to perform simple filtering on text strings."
                 );
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_1804202a8) {
      FUN_18023d500(&DAT_1804202a8);
      if (DAT_1804202a8 == -1) {
        FUN_1800ffb82(&DAT_180420190,&DAT_1803861e4);
        FUN_18023d710(FUN_1801c0a0e);
        _Init_thread_footer(&DAT_1804202a8);
      }
    }
    FUN_1801330a5(
                 "Filter usage:\n  \"\"         display all lines\n  \"xxx\"      display lines containing \"xxx\"\n  \"xxx,yyy\"  display lines containing \"xxx\" or \"yyy\"\n  \"-xxx\"     hide lines containing \"xxx\""
                 );
    FUN_1800ffd62(&DAT_180420190,"Filter (inc,-exc)",0);
    lVar3 = 0;
    do {
      uVar1 = *(undefined8 *)((longlong)&PTR_s_aaa1_c_1803288c0 + lVar3);
      cVar2 = FUN_1800fff6e(&DAT_180420190,uVar1,0);
      if (cVar2 != '\0') {
        FUN_180133606("%s",uVar1);
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x40);
    FUN_18014d7a9();
    return;
  }
  return;
}


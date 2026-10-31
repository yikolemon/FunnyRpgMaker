/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140102ff5 */

void FUN_140102ff5(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_1400c51fb("Text Filter",param_2,param_3,param_4,0xfffffffffffffffe);
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0xf27,"Widgets/Text Filter");
    FUN_14009cf92(
                 "Not a widget per-se, but ImGuiTextFilter is a helper to perform simple filtering on text strings."
                 );
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2c) < DAT_140f319f8) {
      FUN_140188840(&DAT_140f319f8);
      if (DAT_140f319f8 == -1) {
        FUN_140078e3e(&DAT_140f318e0,&DAT_140edcdbf);
        FUN_140188b50(FUN_140106712);
        _Init_thread_footer(&DAT_140f319f8);
      }
    }
    FUN_1400abfd5(
                 "Filter usage:\n  \"\"         display all lines\n  \"xxx\"      display lines containing \"xxx\"\n  \"xxx,yyy\"  display lines containing \"xxx\" or \"yyy\"\n  \"-xxx\"     hide lines containing \"xxx\""
                 );
    FUN_14007901e(&DAT_140f318e0,"Filter (inc,-exc)",0);
    lVar3 = 0;
    do {
      uVar1 = *(undefined8 *)((longlong)&PTR_s_aaa1_c_140e8cc50 + lVar3);
      cVar2 = FUN_14007922a(&DAT_140f318e0,uVar1,0);
      if (cVar2 != '\0') {
        FUN_1400ac536("%s",uVar1);
      }
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x40);
    FUN_1400c66d9();
    return;
  }
  return;
}


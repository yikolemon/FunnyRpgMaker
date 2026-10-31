/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101af0cb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101af0cb(void)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_10147d77();
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x74c,"Widgets/Drag and Slider Flags");
    thunk_FUN_10130d81("ImGuiSliderFlags_AlwaysClamp",&DAT_103a3e74,0x600);
    thunk_FUN_10130d81("ImGuiSliderFlags_ClampOnInput",&DAT_103a3e74,0x200);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiSliderFlags_ClampZeroRange",&DAT_103a3e74,0x400);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiSliderFlags_Logarithmic",&DAT_103a3e74,0x20);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiSliderFlags_NoRoundToFormat",&DAT_103a3e74,0x40);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiSliderFlags_NoInput",&DAT_103a3e74,0x80);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiSliderFlags_NoSpeedTweaks",&DAT_103a3e74,0x800);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiSliderFlags_WrapAround",&DAT_103a3e74,0x100);
    FUN_10114a0e(0,0xbf800000);
    FUN_1011eaad();
    thunk_FUN_10130d81("ImGuiSliderFlags_ColorMarkers",&DAT_103a3e74,0x1000);
    FUN_1012d08c("Underlying float value: %f",(double)_DAT_1038aae8);
    FUN_10137f3c("DragFloat (0 -> 1)",&DAT_1038aae8,0x3ba3d70a,0,0x3f800000,"%.3f",DAT_103a3e74);
    FUN_10137f3c("DragFloat (0 -> +inf)",&DAT_1038aae8,0x3ba3d70a,0,0x7f7fffff,"%.3f",DAT_103a3e74);
    FUN_10137f3c("DragFloat (-inf -> 1)",&DAT_1038aae8,0x3ba3d70a,0xff7fffff,0x3f800000,"%.3f",
                 DAT_103a3e74);
    FUN_10137f3c("DragFloat (-inf -> +inf)",&DAT_1038aae8,0x3ba3d70a,0xff7fffff,0x7f7fffff,"%.3f",
                 DAT_103a3e74);
    FUN_1013838a("DragInt (0 -> 100)",&DAT_1038aaec,0x3f000000,0,100,&DAT_1033b386,DAT_103a3e74);
    FUN_101380ba("DragFloat4 (0 -> 1)",&DAT_103a3e78,0x3ba3d70a,0,0x3f800000,"%.3f",DAT_103a3e74);
    uVar2 = DAT_103a3e74 & 0xfffffeff;
    FUN_1012d08c("Underlying float value: %f",(double)_DAT_1038aaf0);
    FUN_1013d285("SliderFloat (0 -> 1)",&DAT_1038aaf0,0,0x3f800000,"%.3f",uVar2);
    FUN_1013d499("SliderInt (0 -> 100)",&DAT_1038aaf4,0,100,&DAT_1033b386,uVar2);
    FUN_1013d38e("SliderFloat4 (0 -> 1)",&DAT_103a3e88,0,0x3f800000,"%.3f",DAT_103a3e74);
    FUN_10149387();
    return;
  }
  return;
}


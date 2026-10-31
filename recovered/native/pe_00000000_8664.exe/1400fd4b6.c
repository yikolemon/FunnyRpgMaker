/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fd4b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fd4b6(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  cVar2 = FUN_1400c51fb("Drag/Slider Flags");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x74c,"Widgets/Drag and Slider Flags");
    thunk_FUN_1400af8bf("ImGuiSliderFlags_AlwaysClamp",&DAT_140f313f8,0x600);
    thunk_FUN_1400af8bf("ImGuiSliderFlags_ClampOnInput",&DAT_140f313f8,0x200);
    uVar1 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_14009cf92(
                 "Clamp value to min/max bounds when input manually with Ctrl+Click. By default Ctrl+Click allows going out of bounds."
                 );
    thunk_FUN_1400af8bf("ImGuiSliderFlags_ClampZeroRange",&DAT_140f313f8,0x400);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92("Clamp even if min==max==0.0f. Otherwise DragXXX functions don\'t clamp.");
    thunk_FUN_1400af8bf("ImGuiSliderFlags_Logarithmic",&DAT_140f313f8,0x20);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92("Enable logarithmic editing (more precision for small values).");
    thunk_FUN_1400af8bf("ImGuiSliderFlags_NoRoundToFormat",&DAT_140f313f8,0x40);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "Disable rounding underlying value to match precision of the format string (e.g. %.3f values are rounded to those 3 digits)."
                 );
    thunk_FUN_1400af8bf("ImGuiSliderFlags_NoInput",&DAT_140f313f8,0x80);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92("Disable Ctrl+Click or Enter key allowing to input text directly into the widget."
                 );
    thunk_FUN_1400af8bf("ImGuiSliderFlags_NoSpeedTweaks",&DAT_140f313f8,0x800);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "Disable keyboard modifiers altering tweak speed. Useful if you want to alter tweak speed yourself based on your own logic."
                 );
    thunk_FUN_1400af8bf("ImGuiSliderFlags_WrapAround",&DAT_140f313f8,0x100);
    FUN_140092bab(0,uVar1);
    FUN_14009cf92(
                 "Enable wrapping around from max to min and from min to max (only supported by DragXXX() functions)"
                 );
    thunk_FUN_1400af8bf("ImGuiSliderFlags_ColorMarkers",&DAT_140f313f8,0x1000);
    FUN_1400abfd5("Underlying float value: %f",(double)_DAT_140f18118);
    uVar1 = DAT_140211700;
    FUN_1400b61f2("DragFloat (0 -> 1)",&DAT_140f18118,DAT_140211700,0,CONCAT44(uVar3,0x3f800000),
                  "%.3f",DAT_140f313f8);
    FUN_1400b61f2("DragFloat (0 -> +inf)",&DAT_140f18118,uVar1,0,0x7f7fffff,"%.3f",DAT_140f313f8);
    uVar3 = DAT_1402112e0;
    FUN_1400b61f2("DragFloat (-inf -> 1)",&DAT_140f18118,uVar1,DAT_1402112e0,0x3f800000,"%.3f",
                  DAT_140f313f8);
    FUN_1400b61f2("DragFloat (-inf -> +inf)",&DAT_140f18118,uVar1,uVar3,0x7f7fffff,"%.3f",
                  DAT_140f313f8);
    FUN_1400b6661("DragInt (0 -> 100)",&DAT_140f1811c,DAT_1401c86a0,0,100,&DAT_140ecbfd4,
                  DAT_140f313f8);
    uVar5 = 1;
    FUN_1400b637e("DragFloat4 (0 -> 1)",&DAT_140f31400,uVar1,0,0x3f800000,"%.3f",DAT_140f313f8);
    uVar1 = DAT_140f313f8;
    FUN_1400abfd5("Underlying float value: %f",(double)_DAT_140f18120);
    uVar3 = DAT_1401c86c8;
    uVar4 = CONCAT44(uVar5,uVar1) & 0xfffffffffffffeff;
    FUN_1400ba2c0("SliderFloat (0 -> 1)",&DAT_140f18120,0,DAT_1401c86c8,"%.3f",uVar4);
    FUN_1400ba55a("SliderInt (0 -> 100)",&DAT_140f18124,0,100,&DAT_140ecbfd4,
                  CONCAT44((int)(uVar4 >> 0x20),uVar1) & 0xfffffffffffffeff);
    FUN_1400ba438("SliderFloat4 (0 -> 1)",&DAT_140f31410,0,uVar3,"%.3f",DAT_140f313f8);
    FUN_1400c66d9();
    return;
  }
  return;
}


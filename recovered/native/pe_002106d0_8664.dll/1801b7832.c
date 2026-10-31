/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b7832 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b7832(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  cVar2 = FUN_18014c2cb("Drag/Slider Flags");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x74c,"Widgets/Drag and Slider Flags");
    thunk_FUN_18013698f("ImGuiSliderFlags_AlwaysClamp",&DAT_18041fca8,0x600);
    thunk_FUN_18013698f("ImGuiSliderFlags_ClampOnInput",&DAT_18041fca8,0x200);
    uVar1 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180124063(
                 "Clamp value to min/max bounds when input manually with Ctrl+Click. By default Ctrl+Click allows going out of bounds."
                 );
    thunk_FUN_18013698f("ImGuiSliderFlags_ClampZeroRange",&DAT_18041fca8,0x400);
    FUN_180119893(0,uVar1);
    FUN_180124063("Clamp even if min==max==0.0f. Otherwise DragXXX functions don\'t clamp.");
    thunk_FUN_18013698f("ImGuiSliderFlags_Logarithmic",&DAT_18041fca8,0x20);
    FUN_180119893(0,uVar1);
    FUN_180124063("Enable logarithmic editing (more precision for small values).");
    thunk_FUN_18013698f("ImGuiSliderFlags_NoRoundToFormat",&DAT_18041fca8,0x40);
    FUN_180119893(0,uVar1);
    FUN_180124063(
                 "Disable rounding underlying value to match precision of the format string (e.g. %.3f values are rounded to those 3 digits)."
                 );
    thunk_FUN_18013698f("ImGuiSliderFlags_NoInput",&DAT_18041fca8,0x80);
    FUN_180119893(0,uVar1);
    FUN_180124063("Disable Ctrl+Click or Enter key allowing to input text directly into the widget."
                 );
    thunk_FUN_18013698f("ImGuiSliderFlags_NoSpeedTweaks",&DAT_18041fca8,0x800);
    FUN_180119893(0,uVar1);
    FUN_180124063(
                 "Disable keyboard modifiers altering tweak speed. Useful if you want to alter tweak speed yourself based on your own logic."
                 );
    thunk_FUN_18013698f("ImGuiSliderFlags_WrapAround",&DAT_18041fca8,0x100);
    FUN_180119893(0,uVar1);
    FUN_180124063(
                 "Enable wrapping around from max to min and from min to max (only supported by DragXXX() functions)"
                 );
    thunk_FUN_18013698f("ImGuiSliderFlags_ColorMarkers",&DAT_18041fca8,0x1000);
    FUN_1801330a5("Underlying float value: %f",(double)_DAT_180404978);
    uVar1 = DAT_1802de990;
    FUN_18013d2c2("DragFloat (0 -> 1)",&DAT_180404978,DAT_1802de990,0,CONCAT44(uVar3,0x3f800000),
                  "%.3f",DAT_18041fca8);
    FUN_18013d2c2("DragFloat (0 -> +inf)",&DAT_180404978,uVar1,0,0x7f7fffff,"%.3f",DAT_18041fca8);
    uVar3 = DAT_1802de560;
    FUN_18013d2c2("DragFloat (-inf -> 1)",&DAT_180404978,uVar1,DAT_1802de560,0x3f800000,"%.3f",
                  DAT_18041fca8);
    FUN_18013d2c2("DragFloat (-inf -> +inf)",&DAT_180404978,uVar1,uVar3,0x7f7fffff,"%.3f",
                  DAT_18041fca8);
    FUN_18013d731("DragInt (0 -> 100)",&DAT_18040497c,DAT_1802dbb2c,0,100,&DAT_18036b4b0,
                  DAT_18041fca8);
    uVar5 = 1;
    FUN_18013d44e("DragFloat4 (0 -> 1)",&DAT_18041fcb0,uVar1,0,0x3f800000,"%.3f",DAT_18041fca8);
    uVar1 = DAT_18041fca8;
    FUN_1801330a5("Underlying float value: %f",(double)_DAT_180404980);
    uVar3 = DAT_1802ac570;
    uVar4 = CONCAT44(uVar5,uVar1) & 0xfffffffffffffeff;
    FUN_180141390("SliderFloat (0 -> 1)",&DAT_180404980,0,DAT_1802ac570,"%.3f",uVar4);
    FUN_18014162a("SliderInt (0 -> 100)",&DAT_180404984,0,100,&DAT_18036b4b0,
                  CONCAT44((int)(uVar4 >> 0x20),uVar1) & 0xfffffffffffffeff);
    FUN_180141508("SliderFloat4 (0 -> 1)",&DAT_18041fcc0,0,uVar3,"%.3f",DAT_18041fca8);
    FUN_18014d7a9();
    return;
  }
  return;
}


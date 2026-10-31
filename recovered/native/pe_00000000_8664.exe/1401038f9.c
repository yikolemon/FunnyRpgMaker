/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401038f9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401038f9(void)

{
  double dVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  float local_30 [2];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  cVar3 = FUN_1400c51fb("Tooltips");
  if (cVar3 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x101e,"Widgets/Tooltips");
    FUN_1400b1021("General");
    FUN_14009cf92(
                 "Tooltip are typically created by using a IsItemHovered() + SetTooltip() sequence.\n\nWe provide a helper SetItemTooltip() function to perform the two with standards flags."
                 );
    local_28 = (ulonglong)DAT_140211724;
    FUN_1400ad187("Basic",&local_28);
    FUN_140093dc2("I am a tooltip");
    FUN_1400ad187("Fancy",&local_28);
    cVar3 = FUN_140093d6d();
    if (cVar3 != '\0') {
      FUN_1400abfd5("I am a fancy tooltip");
      local_40 = 0;
      local_48 = 0x7f7fffff;
      local_50 = 0x7f7fffff;
      local_58 = 0;
      local_38 = 4;
      FUN_1400c9827("Curve",&DAT_140f1c330,7,0);
      dVar1 = (double)FUN_14008124c();
      fVar5 = (float)FUN_1401a86e0((float)dVar1);
      FUN_1400abfd5("Sin(time) = %f",(double)fVar5);
      thunk_FUN_140088c18();
    }
    FUN_1400b1021("Always On");
    FUN_1400afd2d(&DAT_140ec9399,&DAT_140f31bd0,0);
    uVar2 = DAT_1401c86a4;
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400afd2d("Always On (Simple)",&DAT_140f31bd0,1);
    FUN_140092bab(0,uVar2);
    FUN_1400afd2d("Always On (Advanced)",&DAT_140f31bd0,2);
    if (DAT_140f31bd0 == 2) {
      cVar3 = FUN_140093bd3();
      if (cVar3 != '\0') {
        local_30[0] = (float)FUN_14008ff20();
        local_30[0] = local_30[0] * _DAT_1402116f0;
        local_30[1] = 0.0;
        dVar1 = (double)FUN_14008124c();
        fVar5 = (float)FUN_1401a86e0((float)dVar1);
        FUN_1400afd51(fVar5 * DAT_1401c86a0 + DAT_1401c86a0,local_30,0);
        thunk_FUN_140088c18();
      }
    }
    else if (DAT_140f31bd0 == 1) {
      FUN_140080f0f("I am following you around.");
    }
    FUN_1400b1021("Custom");
    FUN_14009cf92(
                 "Passing ImGuiHoveredFlags_ForTooltip to IsItemHovered() is the preferred way to standardize tooltip activation details across your application. You may however decide to use custom flags for a specific tooltip instance."
                 );
    FUN_1400ad187("Manual",&local_28);
    cVar3 = FUN_1400808b4(0x1000);
    if (cVar3 != '\0') {
      FUN_140080f0f("I am a manually emitted tooltip.");
    }
    FUN_1400ad187("DelayNone",&local_28);
    cVar3 = FUN_1400808b4(0x4000);
    if (cVar3 != '\0') {
      FUN_140080f0f("I am a tooltip with no delay.");
    }
    FUN_1400ad187("DelayShort",&local_28);
    cVar3 = FUN_1400808b4(0x28000);
    if (cVar3 != '\0') {
      lVar4 = FUN_14007a54a();
      FUN_140080f0f("I am a tooltip with a short delay (%0.2f sec).",
                    (double)*(float *)(lVar4 + 0x534));
    }
    FUN_1400ad187("DelayLong",&local_28);
    cVar3 = FUN_1400808b4(0x30000);
    if (cVar3 != '\0') {
      lVar4 = FUN_14007a54a();
      FUN_140080f0f("I am a tooltip with a long delay (%0.2f sec).",
                    (double)*(float *)(lVar4 + 0x538));
    }
    FUN_1400ad187("Stationary",&local_28);
    cVar3 = FUN_1400808b4(0x2000);
    if (cVar3 != '\0') {
      FUN_140080f0f("I am a tooltip requiring mouse to be stationary before activating.");
    }
    FUN_14008f898(1);
    FUN_1400ad187("Disabled item",&local_28);
    cVar3 = FUN_1400808b4(0x1000);
    if (cVar3 != '\0') {
      FUN_140080f0f("I am a a tooltip for a disabled item.");
    }
    FUN_14008f98e();
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_78);
}


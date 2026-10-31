/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bdc75 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bdc75(void)

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
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_78;
  cVar3 = FUN_18014c2cb("Tooltips");
  if (cVar3 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x101e,"Widgets/Tooltips");
    FUN_1801380f1("General");
    FUN_180124063(
                 "Tooltip are typically created by using a IsItemHovered() + SetTooltip() sequence.\n\nWe provide a helper SetItemTooltip() function to perform the two with standards flags."
                 );
    local_28 = (ulonglong)DAT_1802de9b4;
    FUN_180134257("Basic",&local_28);
    FUN_18011ab06("I am a tooltip");
    FUN_180134257("Fancy",&local_28);
    cVar3 = FUN_18011aab1();
    if (cVar3 != '\0') {
      FUN_1801330a5("I am a fancy tooltip");
      local_40 = 0;
      local_48 = 0x7f7fffff;
      local_50 = 0x7f7fffff;
      local_58 = 0;
      local_38 = 4;
      FUN_1801508f7("Curve",&DAT_180408b90,7,0);
      dVar1 = (double)FUN_180107f34();
      fVar5 = (float)FUN_18028a830((float)dVar1);
      FUN_1801330a5("Sin(time) = %f",(double)fVar5);
      thunk_FUN_18010f900();
    }
    FUN_1801380f1("Always On");
    FUN_180136dfd(&DAT_180368294,&DAT_180420480,0);
    uVar2 = DAT_1802bb8e0;
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180136dfd("Always On (Simple)",&DAT_180420480,1);
    FUN_180119893(0,uVar2);
    FUN_180136dfd("Always On (Advanced)",&DAT_180420480,2);
    if (DAT_180420480 == 2) {
      cVar3 = FUN_18011a917();
      if (cVar3 != '\0') {
        local_30[0] = (float)FUN_180116c08();
        local_30[0] = local_30[0] * _DAT_1802de980;
        local_30[1] = 0.0;
        dVar1 = (double)FUN_180107f34();
        fVar5 = (float)FUN_18028a830((float)dVar1);
        FUN_180136e21(fVar5 * DAT_1802dbb2c + DAT_1802dbb2c,local_30,0);
        thunk_FUN_18010f900();
      }
    }
    else if (DAT_180420480 == 1) {
      FUN_180107bf7("I am following you around.");
    }
    FUN_1801380f1("Custom");
    FUN_180124063(
                 "Passing ImGuiHoveredFlags_ForTooltip to IsItemHovered() is the preferred way to standardize tooltip activation details across your application. You may however decide to use custom flags for a specific tooltip instance."
                 );
    FUN_180134257("Manual",&local_28);
    cVar3 = FUN_18010759c(0x1000);
    if (cVar3 != '\0') {
      FUN_180107bf7("I am a manually emitted tooltip.");
    }
    FUN_180134257("DelayNone",&local_28);
    cVar3 = FUN_18010759c(0x4000);
    if (cVar3 != '\0') {
      FUN_180107bf7("I am a tooltip with no delay.");
    }
    FUN_180134257("DelayShort",&local_28);
    cVar3 = FUN_18010759c(0x28000);
    if (cVar3 != '\0') {
      lVar4 = FUN_18010128e();
      FUN_180107bf7("I am a tooltip with a short delay (%0.2f sec).",
                    (double)*(float *)(lVar4 + 0x534));
    }
    FUN_180134257("DelayLong",&local_28);
    cVar3 = FUN_18010759c(0x30000);
    if (cVar3 != '\0') {
      lVar4 = FUN_18010128e();
      FUN_180107bf7("I am a tooltip with a long delay (%0.2f sec).",
                    (double)*(float *)(lVar4 + 0x538));
    }
    FUN_180134257("Stationary",&local_28);
    cVar3 = FUN_18010759c(0x2000);
    if (cVar3 != '\0') {
      FUN_180107bf7("I am a tooltip requiring mouse to be stationary before activating.");
    }
    FUN_180116580(1);
    FUN_180134257("Disabled item",&local_28);
    cVar3 = FUN_18010759c(0x1000);
    if (cVar3 != '\0') {
      FUN_180107bf7("I am a a tooltip for a disabled item.");
    }
    FUN_180116676();
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_78);
}


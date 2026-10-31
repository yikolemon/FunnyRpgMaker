/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b4483 */

void FUN_1801b4483(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  ulonglong local_80;
  
  local_80 = DAT_180402640 ^ (ulonglong)auStack_c8;
  FUN_180107e9e("imgui_demo.cpp",0x231d,"Examples/Menu");
  FUN_1801377a6("(demo menu)",0,0,0);
  FUN_1801377a6(&DAT_180360f1c,0,0,1);
  FUN_1801377a6(&DAT_1803662c4,&DAT_18036c464,0,1);
  cVar3 = FUN_180151e9c("Open Recent",1);
  if (cVar3 != '\0') {
    FUN_1801377a6("fish_hat.c",0,0,1);
    FUN_1801377a6("fish_hat.inl",0,0,1);
    FUN_1801377a6("fish_hat.h",0,0,1);
    cVar3 = FUN_180151e9c("More..",1);
    if (cVar3 != '\0') {
      FUN_1801377a6("Hello",0,0,1);
      FUN_1801377a6("Sailor",0,0,1);
      cVar3 = FUN_180151e9c("Recurse..",1);
      if (cVar3 != '\0') {
        FUN_1801b4483();
        FUN_180151ea6();
      }
      FUN_180151ea6();
    }
    FUN_180151ea6();
  }
  iVar7 = 0;
  FUN_1801377a6(&DAT_180368bae,"Ctrl+S",0,1);
  FUN_1801377a6("Save As..",0,0,1);
  FUN_180137ca1();
  cVar3 = FUN_180151e9c("Options",1);
  if (cVar3 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x2339,"Examples/Menu/Options");
    FUN_18015247e("Enabled",&DAT_1803861e4,&DAT_180404755,1);
    fStack_84 = (float)FUN_18011a43e();
    fStack_84 = fStack_84 * DAT_1802dc2d0;
    local_88 = 0.0;
    FUN_180110d11("child",&local_88,1,0);
    do {
      FUN_1801330a5("Scrolling Text %d",iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 10);
    FUN_180111339();
    local_a0 = 0;
    local_a8 = "%.3f";
    FUN_180141390("Value",&DAT_180404758,0,DAT_1802ac570);
    local_a0 = 0;
    local_a8 = "%.3f";
    FUN_180145fe3("Input",&DAT_180404758,DAT_1802dc268,0);
    FUN_180139992("Combo",&DAT_18041f898,&DAT_1803861d6,0xffffffff);
    FUN_180151ea6();
  }
  cVar3 = FUN_180151e9c("Colors",1);
  if (cVar3 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x234a,"Examples/Menu/Colors");
    fVar8 = (float)FUN_180116c08();
    uVar2 = DAT_1802bb8e0;
    uVar1 = DAT_1802ac570;
    iVar7 = 0;
    do {
      uVar5 = FUN_180101d79(iVar7);
      FUN_180119e05(&local_88);
      uVar6 = FUN_180116bd5();
      uVar4 = FUN_18010129b(iVar7,uVar1);
      local_90 = CONCAT44(fStack_84 + fVar8,local_88 + fVar8);
      local_a0 = 0;
      local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
      FUN_180192d20(uVar6,&local_88,&local_90,uVar4);
      local_90 = CONCAT44(fVar8,fVar8);
      FUN_18013783d(&local_90);
      FUN_180119893(0,uVar2);
      FUN_1801377a6(uVar5,0,0,1);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x3f);
    FUN_180151ea6();
  }
  cVar3 = FUN_180151e9c("Options",1);
  if (cVar3 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x235d,"Examples/Menu/Append to an existing menu");
    FUN_180135c3a("SomeOption",&DAT_18040475c);
    FUN_180151ea6();
  }
  FUN_180151e9c("Disabled",0);
  FUN_1801377a6("Checked",0,1,1);
  FUN_180137ca1();
  FUN_1801377a6(&DAT_180361c1b,&DAT_18036e078,0,1);
  if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_80 ^ (ulonglong)auStack_c8);
}


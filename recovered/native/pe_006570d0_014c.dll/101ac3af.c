/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ac3af */

void FUN_101ac3af(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined8 local_24;
  float local_1c;
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  FUN_101032c6("imgui_demo.cpp",0x231d,"Examples/Menu");
  FUN_10131d08("(demo menu)",0,0,0);
  FUN_10131d08(&DAT_10330e00,0,0,1);
  FUN_10131d08(&DAT_103361c3,&DAT_1033c33a,0,1);
  cVar1 = FUN_1014db73("Open Recent",1);
  if (cVar1 != '\0') {
    FUN_10131d08("fish_hat.c",0,0,1);
    FUN_10131d08("fish_hat.inl",0,0,1);
    FUN_10131d08("fish_hat.h",0,0,1);
    cVar1 = FUN_1014db73("More..",1);
    if (cVar1 != '\0') {
      FUN_10131d08("Hello",0,0,1);
      FUN_10131d08("Sailor",0,0,1);
      cVar1 = FUN_1014db73("Recurse..",1);
      if (cVar1 != '\0') {
        FUN_101ac3af();
        FUN_1014db88();
      }
      FUN_1014db88();
    }
    FUN_1014db88();
  }
  FUN_10131d08(&DAT_10338aad,"Ctrl+S",0,1);
  FUN_10131d08("Save As..",0,0,1);
  FUN_10132188();
  cVar1 = FUN_1014db73("Options",1);
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x2339,"Examples/Menu/Options");
    FUN_1014e1b4("Enabled",&DAT_10356101,&DAT_1038a925,1);
    fVar4 = (float10)FUN_101155d9();
    local_48 = (float)fVar4;
    fStack_18 = local_48 * DAT_102b7100;
    iVar3 = 0;
    local_1c = 0.0;
    FUN_1010c081("child",&local_1c,1,0);
    do {
      FUN_1012d08c("Scrolling Text %d",iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 10);
    FUN_1010c644();
    FUN_1013d285("Value",&DAT_1038a928,0,0x3f800000,"%.3f",0);
    FUN_101418cb("Input",&DAT_1038a928,0x3dcccccd,0,"%.3f",0);
    FUN_10133e42("Combo",&DAT_103a3a7c,&DAT_103560f3,0xffffffff);
    FUN_1014db88();
  }
  cVar1 = FUN_1014db73("Colors",1);
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x234a,"Examples/Menu/Colors");
    fVar4 = (float10)FUN_10111f20();
    local_4c = (float)fVar4;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    iVar3 = 0;
    local_44 = local_4c;
    fStack_40 = local_4c;
    fStack_3c = local_4c;
    fStack_38 = local_4c;
    local_34 = local_4c;
    do {
      local_50 = FUN_100fd567(iVar3);
      FUN_10114f9f(&local_1c);
      FUN_10111ef5();
      uVar2 = FUN_100fcb39(iVar3,0x3f800000);
      local_24 = CONCAT44(fStack_18 + fStack_40,local_1c + local_44);
      FUN_1018b85a(&local_1c,&local_24,uVar2,0,0);
      local_24 = CONCAT44(local_34,local_34);
      FUN_10131d8e(&local_24);
      FUN_10114a0e(0,0xbf800000);
      FUN_10131d08(local_50,0,0,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x3f);
    FUN_1014db88();
  }
  cVar1 = FUN_1014db73("Options",1);
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x235d,"Examples/Menu/Append to an existing menu");
    FUN_1012ff1a("SomeOption",&DAT_1038a92c);
    FUN_1014db88();
  }
  FUN_1014db73("Disabled",0);
  FUN_10131d08("Checked",0,1,1);
  FUN_10132188();
  FUN_10131d08(&DAT_10331b0b,"Alt+F4",0,1);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


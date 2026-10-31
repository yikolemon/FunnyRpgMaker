/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fa107 */

void FUN_1400fa107(void)

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
  
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_c8;
  FUN_1400811b6("imgui_demo.cpp",0x231d,"Examples/Menu");
  FUN_1400b06d6("(demo menu)",0,0,0);
  FUN_1400b06d6(&DAT_140ec3089,0,0,1);
  FUN_1400b06d6(&DAT_140ec763d,&DAT_140ecccd8,0,1);
  cVar3 = FUN_1400cadcc("Open Recent",1);
  if (cVar3 != '\0') {
    FUN_1400b06d6("fish_hat.c",0,0,1);
    FUN_1400b06d6("fish_hat.inl",0,0,1);
    FUN_1400b06d6("fish_hat.h",0,0,1);
    cVar3 = FUN_1400cadcc("More..",1);
    if (cVar3 != '\0') {
      FUN_1400b06d6("Hello",0,0,1);
      FUN_1400b06d6("Sailor",0,0,1);
      cVar3 = FUN_1400cadcc("Recurse..",1);
      if (cVar3 != '\0') {
        FUN_1400fa107();
        FUN_1400cadd6();
      }
      FUN_1400cadd6();
    }
    FUN_1400cadd6();
  }
  iVar7 = 0;
  FUN_1400b06d6(&DAT_140ec9c59,"Ctrl+S",0,1);
  FUN_1400b06d6("Save As..",0,0,1);
  FUN_1400b0bd1();
  cVar3 = FUN_1400cadcc("Options",1);
  if (cVar3 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x2339,"Examples/Menu/Options");
    FUN_1400cb3ae("Enabled",&DAT_140edcdbf,&DAT_140f17ef5,1);
    fStack_84 = (float)FUN_140093756();
    fStack_84 = fStack_84 * DAT_1401c86c0;
    local_88 = 0.0;
    FUN_14008a029("child",&local_88,1,0);
    do {
      FUN_1400abfd5("Scrolling Text %d",iVar7);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 10);
    FUN_14008a651();
    local_a0 = 0;
    local_a8 = "%.3f";
    FUN_1400ba2c0("Value",&DAT_140f17ef8,0,DAT_1401c86c8);
    local_a0 = 0;
    local_a8 = "%.3f";
    FUN_1400bef13("Input",&DAT_140f17ef8,DAT_140210018,0);
    FUN_1400b28c2("Combo",&DAT_140f30fe8,&DAT_140edcdb1,0xffffffff);
    FUN_1400cadd6();
  }
  cVar3 = FUN_1400cadcc("Colors",1);
  if (cVar3 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x234a,"Examples/Menu/Colors");
    fVar8 = (float)FUN_14008ff20();
    uVar2 = DAT_1401c86c8;
    uVar1 = DAT_1401c86a4;
    iVar7 = 0;
    do {
      uVar5 = FUN_14007b035(iVar7);
      FUN_14009311d(&local_88);
      uVar6 = FUN_14008feed();
      uVar4 = FUN_14007a557(iVar7,uVar2);
      local_90 = CONCAT44(fStack_84 + fVar8,local_88 + fVar8);
      local_a0 = 0;
      local_a8 = (char *)((ulonglong)local_a8 & 0xffffffff00000000);
      FUN_1400de294(uVar6,&local_88,&local_90,uVar4);
      local_90 = CONCAT44(fVar8,fVar8);
      FUN_1400b076d(&local_90);
      FUN_140092bab(0,uVar1);
      FUN_1400b06d6(uVar5,0,0,1);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x3f);
    FUN_1400cadd6();
  }
  cVar3 = FUN_1400cadcc("Options",1);
  if (cVar3 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x235d,"Examples/Menu/Append to an existing menu");
    FUN_1400aeb6a("SomeOption",&DAT_140f17efc);
    FUN_1400cadd6();
  }
  FUN_1400cadcc("Disabled",0);
  FUN_1400b06d6("Checked",0,1,1);
  FUN_1400b0bd1();
  FUN_1400b06d6(&DAT_140ec3b24,&DAT_140ece125,0,1);
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_c8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_c8);
}


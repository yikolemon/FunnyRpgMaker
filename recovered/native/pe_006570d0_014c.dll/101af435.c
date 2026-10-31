/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101af435 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101af435(void)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar6;
  undefined1 auVar5 [16];
  undefined1 local_a0 [40];
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_68;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  cVar3 = FUN_10147d77("Images");
  if (cVar3 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x794,"Widgets/Images");
    iVar4 = FUN_1010330d();
    FUN_1012d238(
                "Below we are displaying the font texture (which is the only texture we have access to in this demo). Use the \'ImTextureID\' type as storage to pass pointers or identifier to your own texture data. Hover the texture for a zoomed view!"
                );
    iVar4 = *(int *)(iVar4 + 0x2c);
    local_30 = *(undefined4 *)(iVar4 + 0x20);
    uStack_2c = *(undefined4 *)(iVar4 + 0x24);
    uStack_28 = *(undefined4 *)(iVar4 + 0x28);
    uStack_24 = *(undefined4 *)(iVar4 + 0x2c);
    uVar2 = *(undefined8 *)(*(int *)(iVar4 + 0x30) + 0x1c);
    iVar4 = (int)uVar2;
    iVar6 = (int)((ulonglong)uVar2 >> 0x20);
    local_a0._4_4_ = (undefined4)iVar6;
    local_a0._0_4_ = (float)iVar4;
    local_a0._8_8_ = 0;
    FUN_1012d08c("%.0fx%.0f",(double)iVar4,(double)iVar6);
    FUN_10132656("Image()/ImageWithBg() function");
    local_38 = 0;
    local_40 = DAT_102b70a0;
    iVar4 = FUN_100fcb2d();
    fVar1 = DAT_1028b430;
    if (DAT_1028b430 < *(float *)(iVar4 + 0xa0)) {
      iVar4 = FUN_100fcb2d();
      fVar1 = *(float *)(iVar4 + 0xa0);
    }
    FUN_100fd0a3(0x18,fVar1);
    local_50 = _DAT_102b8a10;
    fStack_4c = (float)_UNK_102b8a14;
    uStack_48 = _UNK_102b8a18;
    uStack_44 = _UNK_102b8a1c;
    local_60 = _DAT_102b8f20;
    uStack_5c = _UNK_102b8f24;
    uStack_58 = _UNK_102b8f28;
    uStack_54 = _UNK_102b8f2c;
    local_68 = local_a0._0_8_;
    FUN_1012f842(local_30,uStack_2c,uStack_28,uStack_24,&local_68,&local_38,&local_40,&local_60,
                 &local_50);
    FUN_100fd4c4(1);
    FUN_10132656("Interactive Image Viewer");
    FUN_1010c3e4(&local_50);
    FUN_101b5a8f();
    FUN_101b5b8e(local_30,uStack_2c,uStack_28,uStack_24,(int)(float)local_a0._4_4_);
    FUN_101032c6("imgui_demo.cpp",0x7c0,"Widgets/Images/Textured buttons");
    FUN_10132656("Textured Buttons");
    FUN_1012d238("And now some textured buttons..");
    auVar5._8_8_ = _UNK_103028f8;
    auVar5._0_8_ = DAT_103028f0;
    auVar5 = divps(auVar5,local_a0._0_16_);
    iVar4 = 0;
    do {
      FUN_10113358(iVar4);
      if (iVar4 != 0) {
        local_50 = (float)(iVar4 + -1);
        fStack_4c = local_50;
        FUN_100fd3bc(0xb,&local_50);
      }
      local_68 = DAT_103028f0;
      local_70 = 0;
      local_a0._0_8_ = auVar5._0_8_;
      local_78 = local_a0._0_8_;
      local_50 = _DAT_102b8f20;
      fStack_4c = (float)_UNK_102b8f24;
      uStack_48 = _UNK_102b8f28;
      uStack_44 = _UNK_102b8f2c;
      local_60 = _DAT_102b8a10;
      uStack_5c = _UNK_102b8a14;
      uStack_58 = _UNK_102b8a18;
      uStack_54 = _UNK_102b8a1c;
      cVar3 = FUN_1012fe9f(&DAT_10356101,local_30,uStack_2c,uStack_28,uStack_24,&local_68,&local_70,
                           &local_78,&local_50,&local_60);
      if (cVar3 != '\0') {
        DAT_103a3e98 = DAT_103a3e98 + 1;
      }
      if (iVar4 != 0) {
        FUN_100fd4c4(1);
      }
      FUN_10113568();
      FUN_10114a0e(0,0xbf800000);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 8);
    FUN_10131e26();
    FUN_1012d08c("Pressed %d times.",DAT_103a3e98);
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


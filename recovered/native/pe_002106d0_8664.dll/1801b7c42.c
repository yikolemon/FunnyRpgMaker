/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b7c42 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b7c42(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_168;
  cVar8 = FUN_18014c2cb("Images");
  if (cVar8 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x794,"Widgets/Images");
    lVar9 = FUN_180107ee8();
    FUN_1801332a0(
                 "Below we are displaying the font texture (which is the only texture we have access to in this demo). Use the \'ImTextureID\' type as storage to pass pointers or identifier to your own texture data. Hover the texture for a zoomed view!"
                 );
    lVar9 = *(longlong *)(lVar9 + 0x38);
    local_b8 = *(undefined8 *)(lVar9 + 0x28);
    uStack_b0 = *(undefined8 *)(lVar9 + 0x30);
    uVar1 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x1c);
    iVar10 = (int)uVar1;
    iVar11 = (int)((ulonglong)uVar1 >> 0x20);
    fVar13 = (float)iVar10;
    fVar14 = (float)iVar11;
    FUN_1801330a5("%.0fx%.0f",(double)iVar10,(double)iVar11);
    FUN_1801380f1("Image()/ImageWithBg() function");
    local_c0 = 0;
    local_c8 = DAT_1802dc280;
    lVar9 = FUN_18010128e();
    fVar12 = DAT_1802ac570;
    if (DAT_1802ac570 < *(float *)(lVar9 + 0xa0)) {
      lVar9 = FUN_18010128e();
      fVar12 = *(float *)(lVar9 + 0xa0);
    }
    FUN_180101870(0x18,fVar12);
    uVar6 = _UNK_1802de9a8;
    uVar5 = _DAT_1802de9a0;
    uVar4 = _UNK_1802de5c8;
    uVar1 = _DAT_1802de5c0;
    local_d8 = _DAT_1802de5c0;
    uStack_d0 = _UNK_1802de5c8;
    local_e8 = _DAT_1802de9a0;
    uStack_e0 = _UNK_1802de9a8;
    local_f0 = CONCAT44(fVar14,fVar13);
    local_108 = (undefined4)local_b8;
    uStack_104 = local_b8._4_4_;
    uStack_100 = (undefined4)uStack_b0;
    uStack_fc = uStack_b0._4_4_;
    local_148 = &local_e8;
    local_140 = &local_d8;
    FUN_1801354ec(&local_108,&local_f0,&local_c0,&local_c8);
    FUN_180101ccb(1);
    FUN_1801380f1("Interactive Image Viewer");
    FUN_180111069(&local_d8);
    uVar3 = (undefined4)local_d8;
    FUN_1801bec1a(&DAT_180404988);
    local_148 = (undefined8 *)CONCAT44(local_148._4_4_,(int)fVar14);
    FUN_1801bed07(&DAT_180404988,CONCAT44(fVar14 + fVar14,uVar3),&local_b8,(int)fVar13);
    FUN_180107e9e("imgui_demo.cpp",0x7c0,"Widgets/Images/Textured buttons");
    FUN_1801380f1("Textured Buttons");
    FUN_1801332a0("And now some textured buttons..");
    uVar7 = DAT_180329240;
    uVar3 = DAT_1802bb8e0;
    auVar2._8_8_ = _UNK_180329248;
    auVar2._0_8_ = DAT_180329240;
    auVar15._4_4_ = fVar14;
    auVar15._0_4_ = fVar13;
    auVar15._8_8_ = 0;
    auVar15 = divps(auVar2,auVar15);
    iVar10 = 0;
    do {
      FUN_18011810d(iVar10);
      if (iVar10 != 0) {
        local_d8 = CONCAT44((float)(iVar10 + -1),(float)(iVar10 + -1));
        FUN_180101bbb(0xb,&local_d8);
      }
      local_f0 = uVar7;
      local_110 = 0;
      local_118 = auVar15._0_8_;
      local_d8 = uVar5;
      uStack_d0 = uVar6;
      local_e8 = uVar1;
      uStack_e0 = uVar4;
      local_128 = (undefined4)local_b8;
      uStack_124 = local_b8._4_4_;
      uStack_120 = (undefined4)uStack_b0;
      uStack_11c = uStack_b0._4_4_;
      local_148 = &local_118;
      local_140 = &local_d8;
      local_138 = &local_e8;
      cVar8 = FUN_180135b75(&DAT_1803861e4,&local_128,&local_f0,&local_110);
      if (cVar8 != '\0') {
        DAT_18041fcd0 = DAT_18041fcd0 + 1;
      }
      if (iVar10 != 0) {
        FUN_180101ccb(1);
      }
      FUN_18011834f();
      FUN_180119893(0,uVar3);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 8);
    FUN_1801378da();
    FUN_1801330a5("Pressed %d times.",DAT_18041fcd0);
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_a0 ^ (ulonglong)auStack_168)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_a0 ^ (ulonglong)auStack_168);
}


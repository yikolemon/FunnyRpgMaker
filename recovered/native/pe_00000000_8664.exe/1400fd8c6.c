/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400fd8c6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fd8c6(void)

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
  
  local_a0 = DAT_140f17b40 ^ (ulonglong)auStack_168;
  cVar8 = FUN_1400c51fb("Images");
  if (cVar8 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x794,"Widgets/Images");
    lVar9 = FUN_140081200();
    FUN_1400ac1d0(
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
    FUN_1400abfd5("%.0fx%.0f",(double)iVar10,(double)iVar11);
    FUN_1400b1021("Image()/ImageWithBg() function");
    local_c0 = 0;
    local_c8 = DAT_1401c8660;
    lVar9 = FUN_14007a54a();
    fVar12 = DAT_1401c86c8;
    if (DAT_1401c86c8 < *(float *)(lVar9 + 0xa0)) {
      lVar9 = FUN_14007a54a();
      fVar12 = *(float *)(lVar9 + 0xa0);
    }
    FUN_14007ab2c(0x18,fVar12);
    uVar6 = _UNK_140211718;
    uVar5 = _DAT_140211710;
    uVar4 = _UNK_140211338;
    uVar1 = _DAT_140211330;
    local_d8 = _DAT_140211330;
    uStack_d0 = _UNK_140211338;
    local_e8 = _DAT_140211710;
    uStack_e0 = _UNK_140211718;
    local_f0 = CONCAT44(fVar14,fVar13);
    local_108 = (undefined4)local_b8;
    uStack_104 = local_b8._4_4_;
    uStack_100 = (undefined4)uStack_b0;
    uStack_fc = uStack_b0._4_4_;
    local_148 = &local_e8;
    local_140 = &local_d8;
    FUN_1400ae41c(&local_108,&local_f0,&local_c0,&local_c8);
    FUN_14007af87(1);
    FUN_1400b1021("Interactive Image Viewer");
    FUN_14008a381(&local_d8);
    uVar3 = (undefined4)local_d8;
    FUN_14010489e(&DAT_140f18128);
    local_148 = (undefined8 *)CONCAT44(local_148._4_4_,(int)fVar14);
    FUN_14010498b(&DAT_140f18128,CONCAT44(fVar14 + fVar14,uVar3),&local_b8,(int)fVar13);
    FUN_1400811b6("imgui_demo.cpp",0x7c0,"Widgets/Images/Textured buttons");
    FUN_1400b1021("Textured Buttons");
    FUN_1400ac1d0("And now some textured buttons..");
    uVar7 = DAT_140e8d5d0;
    uVar3 = DAT_1401c86a4;
    auVar2._8_8_ = _UNK_140e8d5d8;
    auVar2._0_8_ = DAT_140e8d5d0;
    auVar15._4_4_ = fVar14;
    auVar15._0_4_ = fVar13;
    auVar15._8_8_ = 0;
    auVar15 = divps(auVar2,auVar15);
    iVar10 = 0;
    do {
      FUN_140091425(iVar10);
      if (iVar10 != 0) {
        local_d8 = CONCAT44((float)(iVar10 + -1),(float)(iVar10 + -1));
        FUN_14007ae77(0xb,&local_d8);
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
      cVar8 = FUN_1400aeaa5(&DAT_140edcdbf,&local_128,&local_f0,&local_110);
      if (cVar8 != '\0') {
        DAT_140f31420 = DAT_140f31420 + 1;
      }
      if (iVar10 != 0) {
        FUN_14007af87(1);
      }
      FUN_140091667();
      FUN_140092bab(0,uVar3);
      iVar10 = iVar10 + 1;
    } while (iVar10 != 8);
    FUN_1400b080a();
    FUN_1400abfd5("Pressed %d times.",DAT_140f31420);
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_a0 ^ (ulonglong)auStack_168)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_a0 ^ (ulonglong)auStack_168);
}


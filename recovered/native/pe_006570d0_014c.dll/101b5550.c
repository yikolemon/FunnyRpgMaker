/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b5550 */

void FUN_101b5550(void)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  undefined4 *puVar5;
  float local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  cVar1 = FUN_10147d77();
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x1135,"Widgets/Vertical Sliders");
    local_28 = DAT_103025d0;
    FUN_100fd3bc(0xe,&local_28);
    local_28 = DAT_10302a20;
    FUN_1013da21("##int",&local_28,&DAT_103a4538,0,5,&DAT_1033b386,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_101131fa();
    pfVar3 = (float *)&DAT_1038ecf0;
    iVar2 = 0;
    do {
      if (iVar2 != 0) {
        FUN_10114a0e(0,0xbf800000);
      }
      FUN_10113358();
      local_3c = (float)iVar2 / DAT_103025a4;
      FUN_100faedd(local_3c,0x3f000000,0x3f000000,&local_38,&local_28);
      local_38 = CONCAT44((undefined4)local_28,(undefined4)local_38);
      uStack_30 = CONCAT44(DAT_102b8820._4_4_,local_18);
      local_28 = CONCAT44((undefined4)local_28,(undefined4)local_38);
      uStack_20 = local_18;
      uStack_1c = DAT_102b8820._4_4_;
      FUN_100fcd80(7);
      FUN_100faedd(local_3c,0x3f19999a,0x3f000000,&local_38,&local_28);
      local_38 = CONCAT44((undefined4)local_28,(undefined4)local_38);
      uStack_30 = CONCAT44(DAT_102b8820._4_4_,local_18);
      local_28 = CONCAT44((undefined4)local_28,(undefined4)local_38);
      uStack_20 = local_18;
      uStack_1c = DAT_102b8820._4_4_;
      FUN_100fcd80(8);
      FUN_100faedd(local_3c,0x3f333333,0x3f000000,&local_38,&local_28);
      local_38 = CONCAT44((undefined4)local_28,(undefined4)local_38);
      uStack_30 = CONCAT44(DAT_102b8820._4_4_,local_18);
      local_28 = CONCAT44((undefined4)local_28,(undefined4)local_38);
      uStack_20 = local_18;
      uStack_1c = DAT_102b8820._4_4_;
      FUN_100fcd80(9);
      FUN_100faedd(local_3c,0x3f666666,0x3f666666,&local_38,&local_28);
      local_38 = CONCAT44((undefined4)local_28,(undefined4)local_38);
      uStack_30 = CONCAT44(DAT_102b8820._4_4_,local_18);
      local_28 = CONCAT44((undefined4)local_28,(undefined4)local_38);
      uStack_20 = local_18;
      uStack_1c = DAT_102b8820._4_4_;
      FUN_100fcd80(0x14);
      local_28 = DAT_10302a20;
      FUN_1013d9c3(&DAT_10330e62,&local_28,pfVar3,0,0x3f800000,&DAT_10356101);
      cVar1 = FUN_1010bee1();
      if (cVar1 == '\0') {
        cVar1 = FUN_10102a1a();
        if (cVar1 != '\0') goto LAB_101b5824;
      }
      else {
LAB_101b5824:
        FUN_10103022("%.3f",(double)*pfVar3);
      }
      FUN_100fce8e();
      FUN_10113568();
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar2 != 7);
    FUN_10113568();
    FUN_10114a0e(0,0xbf800000);
    FUN_101131fa();
    local_28 = DAT_10302a30;
    fVar4 = 0.0;
    do {
      if (fVar4 != 0.0) {
        FUN_10114a0e(0,0xbf800000);
      }
      FUN_10115649();
      iVar2 = 0;
      local_3c = fVar4;
      do {
        FUN_10113358();
        FUN_1013d9c3(&DAT_10330e62,&local_28,&DAT_1038ed0c + (int)fVar4,0,0x3f800000,&DAT_10356101);
        cVar1 = FUN_1010bee1();
        if (cVar1 == '\0') {
          cVar1 = FUN_10102a1a();
          if (cVar1 != '\0') goto LAB_101b58fb;
        }
        else {
LAB_101b58fb:
          FUN_10103022("%.3f");
        }
        FUN_10113568();
        iVar2 = iVar2 + 1;
      } while (iVar2 != 3);
      FUN_1011462f();
      fVar4 = (float)((int)local_3c + 1);
    } while (fVar4 != 5.60519e-45);
    FUN_10113568();
    FUN_10114a0e(0,0xbf800000);
    FUN_101131fa();
    puVar5 = &DAT_1038ecf0;
    iVar2 = 0;
    do {
      if (iVar2 != 0) {
        FUN_10114a0e(0,0xbf800000);
      }
      FUN_10113358();
      FUN_100fd0a3(0x15);
      local_38 = DAT_10302a40;
      FUN_1013d9c3(&DAT_10330e62,&local_38,puVar5,0,0x3f800000,"%.2f\nsec");
      FUN_100fd4c4();
      FUN_10113568();
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar2 != 4);
    FUN_10113568();
    FUN_100fd4c4();
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


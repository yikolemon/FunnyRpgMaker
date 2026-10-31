/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011e1cb */

void FUN_1011e1cb(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  uint local_68;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  uint local_18;
  
  iVar2 = DAT_1039d74c;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar5 = DAT_1039d74c + 0xcc0;
  FUN_10111871();
  thunk_FUN_10130d81("io.BackendFlags: RendererHasTextures",iVar2 + 0x34,0x10);
  FUN_10111961();
  FUN_1011e997();
  cVar1 = FUN_10137f3c("FontSizeBase",iVar5,0x3e4ccccd,0x40a00000,0x42c80000,&DAT_10338657,0);
  if (cVar1 != '\0') {
    *(undefined4 *)(iVar2 + 0x1208) = *(undefined4 *)(iVar2 + 0xcc0);
  }
  FUN_10114a0e(0,0);
  fVar7 = (float10)FUN_10111f20();
  FUN_1012d08c(" (out %.2f)",(double)fVar7);
  FUN_10114a0e(0,0xbf800000);
  FUN_1011eaad();
  FUN_10137f3c("FontScaleMain",iVar2 + 0xcc4,0x3ca3d70a,0x3f000000,0x40800000,"%.3f",0);
  FUN_10137f3c("FontScaleDpi",iVar2 + 0xcc8,0x3ca3d70a,0x3f000000,0x40800000,"%.3f",0);
  if ((*(byte *)(iVar2 + 0x34) & 0x10) == 0) {
    FUN_1012d551();
    FUN_1012d551();
    FUN_10114a0e(0,0xbf800000);
    FUN_10131c6c("docs/BACKENDS.md","https://github.com/ocornut/imgui/blob/master/docs/BACKENDS.md")
    ;
  }
  FUN_1012d551();
  FUN_1012d551();
  FUN_10114a0e(0,0xbf800000);
  FUN_10131c6c("#8465","https://github.com/ocornut/imgui/issues/8465");
  FUN_1012d551();
  FUN_10114a0e(0,0xbf800000);
  FUN_10131c6c("dearimgui.com/faq","https://www.dearimgui.com/faq/");
  FUN_10132656();
  FUN_1012ff1a("Show font preview",iVar2 + 0x281c);
  pcVar3 = "NULL";
  if (*(char **)(param_1 + 0x298) != (char *)0x0) {
    pcVar3 = *(char **)(param_1 + 0x298);
  }
  cVar1 = FUN_10147bc2("Loader","Loader: \'%s\'",pcVar3);
  if (cVar1 != '\0') {
    iVar5 = *(int *)(param_1 + 0x294);
    FUN_10111871();
    FUN_10111871();
    FUN_10130e0c("stb_truetype",0);
    FUN_10115d65();
    FUN_10111961();
    FUN_10114a0e(0,0xbf800000);
    iVar2 = FUN_10196a84();
    cVar1 = FUN_10130e0c("FreeType",iVar5 == iVar2);
    if (cVar1 != '\0') {
      FUN_1018e77e();
    }
    if (iVar5 == iVar2) {
      local_30 = CONCAT44(local_30._4_4_,*(undefined4 *)(param_1 + 0x2a0));
      FUN_1012d08c("Shared FreeType Loader Flags:  0x%08X",*(undefined4 *)(param_1 + 0x2a0));
      cVar1 = FUN_10197045();
      if (cVar1 != '\0') {
        iVar5 = *(int *)(param_1 + 0x54);
        if (iVar5 == 0) {
          *(undefined4 *)(param_1 + 0x2a0) = (undefined4)local_30;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x5c);
          iVar4 = 0;
          do {
            FUN_1018e667(param_1,*(undefined4 *)(iVar2 + iVar4));
            iVar4 = iVar4 + 4;
          } while (iVar5 << 2 != iVar4);
          iVar5 = *(int *)(param_1 + 0x54);
          iVar2 = *(int *)(param_1 + 0x5c);
          *(undefined4 *)(param_1 + 0x2a0) = (undefined4)local_30;
          if (iVar5 != 0) {
            iVar4 = 0;
            do {
              FUN_101908d5(param_1,*(undefined4 *)(iVar2 + iVar4));
              iVar4 = iVar4 + 4;
            } while (iVar5 << 2 != iVar4);
          }
        }
      }
    }
    FUN_10111961();
    FUN_10149387();
  }
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 != 0) {
    iVar2 = 0;
    do {
      FUN_101132aa();
      FUN_1011eb0c();
      FUN_10113568();
      iVar2 = iVar2 + 4;
    } while (iVar5 << 2 != iVar2);
  }
  FUN_10132656();
  local_30 = 0;
  cVar1 = FUN_1012e1b7("Compact",&local_30);
  if (cVar1 != '\0') {
    FUN_1018e6ee();
  }
  FUN_10114a0e(0,0xbf800000);
  local_30 = 0;
  cVar1 = FUN_1012e1b7(&DAT_10330abf,&local_30);
  if (cVar1 != '\0') {
    FUN_10191ca8(param_1,0xffffffff,0xffffffff);
  }
  FUN_10114a0e(0,0xbf800000);
  local_30 = 0;
  cVar1 = FUN_1012e1b7("Clear All",&local_30);
  if (cVar1 != '\0') {
    FUN_10190667();
  }
  FUN_10115d65();
  if (0 < *(int *)(param_1 + 0x34)) {
    iVar5 = 0;
    do {
      if (iVar5 != 0) {
        FUN_10114a0e(0,0xbf800000);
      }
      FUN_1012d08c("Tex: %dx%d");
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x34));
  }
  dVar8 = (double)*(int *)(*(int *)(param_1 + 0x290) + 0x88);
  if (dVar8 < 0.0) {
    fVar7 = (float10)FUN_10270500(dVar8);
    dVar8 = (double)fVar7;
  }
  else {
    dVar8 = SQRT(dVar8);
  }
  dVar9 = (double)*(int *)(*(int *)(param_1 + 0x290) + 0x90);
  if (dVar9 < 0.0) {
    fVar7 = (float10)FUN_10270500(dVar9);
    dVar9 = (double)fVar7;
  }
  else {
    dVar9 = SQRT(dVar9);
  }
  FUN_1012d08c("Packed rects: %d, area: about %d px ~%dx%d px",
               *(undefined4 *)(*(int *)(param_1 + 0x290) + 0x84),
               *(undefined4 *)(*(int *)(param_1 + 0x290) + 0x88),(int)dVar8,(int)dVar8);
  FUN_1012d08c("incl. Discarded rects: %d, area: about %d px ~%dx%d px",
               *(undefined4 *)(*(int *)(param_1 + 0x290) + 0x8c),
               *(undefined4 *)(*(int *)(param_1 + 0x290) + 0x90),(int)dVar9,(int)dVar9);
  cVar1 = FUN_10147bc2("Rects Index","Rects Index (%d)",
                       *(undefined4 *)(*(int *)(param_1 + 0x290) + 0x84));
  if (cVar1 == '\0') {
    local_20 = 0;
    local_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
  }
  else {
    FUN_100fd0a3(0x18,0x3f800000);
    fVar7 = (float10)FUN_101155d9();
    local_30 = (ulonglong)(uint)((float)fVar7 * DAT_102b8f14) << 0x20;
    cVar1 = FUN_1015f834("##table",2,0x20007c0,&local_30,0);
    if (cVar1 == '\0') {
      local_68 = 0xffffffff;
    }
    else {
      iVar5 = *(int *)(*(int *)(param_1 + 0x290) + 0x68);
      if (iVar5 == 0) {
        local_68 = 0xffffffff;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_1 + 0x290) + 0x70);
        local_68 = 0xffffffff;
        iVar4 = 0;
        do {
          if ((*(uint *)(iVar2 + iVar4) >> 0x1e & 1) != 0) {
            uVar6 = (iVar2 + iVar4) - *(int *)(*(int *)(param_1 + 0x290) + 0x70) >> 2 |
                    *(uint *)(iVar2 + iVar4) & 0x3ff00000;
            local_20 = 0;
            local_30 = 0;
            uStack_28 = 0;
            uStack_24 = 0;
            FUN_10190088(uVar6,&local_30);
            FUN_100fa588(&local_34,0,"ID:%08X, used:%d, { w:%3d, h:%3d } { x:%4d, y:%4d }",uVar6,
                         *(uint *)(iVar2 + iVar4) >> 0x1e & 1,local_30._4_2_,local_30._6_2_,
                         (undefined2)local_30);
            FUN_101657a1();
            local_3c = 0;
            FUN_10133727(local_34,0,0);
            cVar1 = FUN_10102a1a();
            if (cVar1 != '\0') {
              local_68 = uVar6;
            }
            FUN_101657a1();
            local_3c = CONCAT44((float)(local_30._4_4_ >> 0x10),(float)(local_30._4_4_ & 0xffff));
            FUN_1012fb09(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                         *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),&local_3c);
          }
          iVar4 = iVar4 + 4;
        } while (iVar5 << 2 != iVar4);
      }
      FUN_1016304e();
    }
    FUN_100fd4c4();
    FUN_10149387();
    local_20 = 0;
    local_30 = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    if (local_68 != 0xffffffff) {
      FUN_10190088(local_68,&local_30);
    }
  }
  iVar5 = *(int *)(param_1 + 0x34);
  if (0 < iVar5) {
    iVar2 = 0;
    do {
      if (iVar2 == iVar5 + -1) {
        FUN_1014949d(1,2);
      }
      FUN_1011f1bd(*(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar2 * 4));
      iVar2 = iVar2 + 1;
      iVar5 = *(int *)(param_1 + 0x34);
    } while (iVar2 < iVar5);
  }
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


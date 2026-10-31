/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019cf6f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019cf6f(void)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  undefined8 local_88;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  char local_25;
  int local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_88;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcd20;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  puVar1 = &local_88;
  if ((*(int *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x18) < DAT_103a4ca0) &&
     (FUN_1022c0d0(&DAT_103a4ca0), puVar1 = (undefined8 *)local_20, DAT_103a4ca0 == -1)) {
    local_14 = 0;
    FUN_101bace4();
    FUN_1022c3a0(&LAB_101bb2e1);
    local_14 = 0xffffffff;
    FUN_1022c180(&DAT_103a4ca0);
    puVar1 = (undefined8 *)local_20;
  }
  local_20 = (undefined1 *)puVar1;
  local_25 = FUN_10107d2b("Example: Documents",&DAT_103a33dc,0x400);
  if ((local_25 == '\0') && (DAT_1038efa4 != 2)) {
    FUN_1010ad44();
    *unaff_FS_OFFSET = local_1c;
    return;
  }
  FUN_101032c6("imgui_demo.cpp",0x2a7c,"Examples/Documents");
  cVar2 = FUN_1014c8c1();
  if (cVar2 != '\0') {
    cVar2 = FUN_1014db73("File",1);
    if (cVar2 != '\0') {
      if (DAT_103a4c80 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = 0;
        iVar11 = 0;
        do {
          iVar10 = iVar10 + (uint)*(byte *)(DAT_103a4c88 + 0x24 + iVar11);
          iVar11 = iVar11 + 0x38;
        } while (DAT_103a4c80 * 0x38 - iVar11 != 0);
      }
      local_14 = 0xffffffff;
      cVar2 = FUN_1014db73(&DAT_103361c3,iVar10 < DAT_103a4c80);
      if (cVar2 != '\0') {
        if (DAT_103a4c80 != 0) {
          iVar8 = DAT_103a4c80 * 0x38;
          iVar11 = DAT_103a4c88;
          do {
            if (*(char *)(iVar11 + 0x24) == '\0') {
              local_14 = 0xffffffff;
              cVar2 = FUN_10131d08(iVar11,0,0,1);
              if (cVar2 != '\0') {
                *(undefined1 *)(iVar11 + 0x24) = 1;
              }
            }
            iVar11 = iVar11 + 0x38;
            iVar8 = iVar8 + -0x38;
          } while (iVar8 != 0);
        }
        local_14 = 0xffffffff;
        FUN_1014db88();
      }
      cVar2 = FUN_10131d08("Close All Documents",0,0,iVar10 != 0);
      if ((cVar2 != '\0') && (DAT_103a4c80 != 0)) {
        iVar11 = DAT_103a4c80 * 0x38;
        iVar10 = DAT_103a4c88;
        do {
          iVar8 = DAT_103a4c90;
          iVar5 = DAT_103a4c94;
          if (DAT_103a4c8c == DAT_103a4c90) {
            if (DAT_103a4c8c == 0) {
              iVar5 = 8;
            }
            else {
              iVar5 = DAT_103a4c8c / 2 + DAT_103a4c8c;
            }
            iVar8 = DAT_103a4c8c + 1;
            if (DAT_103a4c8c + 1 < iVar5) {
              iVar8 = iVar5;
            }
            local_14 = 0xffffffff;
            iVar5 = FUN_100fa1fa(iVar8 * 4);
            if (DAT_103a4c94 != 0) {
              local_24 = iVar5;
              FUN_1025b2d0(iVar5,DAT_103a4c94,DAT_103a4c8c << 2);
              FUN_100fa2cb(DAT_103a4c94);
              iVar5 = local_24;
            }
          }
          DAT_103a4c94 = iVar5;
          DAT_103a4c90 = iVar8;
          *(int *)(DAT_103a4c94 + DAT_103a4c8c * 4) = iVar10;
          DAT_103a4c8c = DAT_103a4c8c + 1;
          iVar10 = iVar10 + 0x38;
          iVar11 = iVar11 + -0x38;
        } while (iVar11 != 0);
      }
      local_14 = 0xffffffff;
      cVar2 = FUN_10131d08(&DAT_10331afb,0,0,1);
      if (cVar2 != '\0') {
        DAT_103a33dc = 0;
      }
      FUN_1014db88();
    }
    FUN_1014caf3();
  }
  if (0 < DAT_103a4c80) {
    iVar11 = 0x24;
    iVar10 = 0;
    do {
      iVar8 = DAT_103a4c88;
      if (iVar10 != 0) {
        FUN_10114a0e(0,0xbf800000);
      }
      local_24 = iVar8 + iVar11 + -0x24;
      FUN_101132aa(local_24);
      cVar2 = FUN_1012ff1a(local_24,iVar8 + iVar11);
      if ((cVar2 != '\0') && (*(char *)(iVar8 + iVar11) == '\0')) {
        *(undefined1 *)(iVar8 + iVar11) = 0;
        *(undefined1 *)(iVar8 + 2 + iVar11) = 0;
      }
      FUN_10113568();
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 0x38;
    } while (iVar10 < DAT_103a4c80);
  }
  fVar12 = (float10)FUN_10111f20();
  local_48 = (float)fVar12;
  FUN_1011520a(local_48 * DAT_102b8f14);
  FUN_10133e42("Output",&DAT_1038efa4,&DAT_10355f58,0xffffffff);
  FUN_101154f4();
  if (DAT_1038efa4 == 1) {
    FUN_10114a0e(0,0xbf800000);
    FUN_1012ff1a("Reorderable Tabs",&DAT_1038efa8);
  }
  local_2c = 4;
  if (DAT_1038efa4 == 2) {
    FUN_10114a0e(0,0xbf800000);
    local_88 = 0;
    bVar3 = FUN_1012e1b7("Redock all",&local_88);
    local_2c = (uint)(bVar3 ^ 1) * 3 + 1;
  }
  FUN_10132188();
  if (DAT_1038efa4 == 2) {
    pbVar6 = (byte *)FUN_1010330d();
    if ((*pbVar6 & 0x80) == 0) {
      FUN_101baca0();
    }
    else {
      FUN_101bb3a0();
      local_38 = FUN_10113594("MyDockSpace");
      local_88 = 0;
      iVar10 = 0;
      FUN_1011c2a7(local_38,&local_88,0,0);
      if (0 < DAT_103a4c80) {
        iVar5 = 0;
        iVar11 = DAT_103a4c80;
        iVar8 = DAT_103a4c88;
        do {
          if (*(char *)(iVar8 + 0x24 + iVar10) == '\x01') {
            local_24 = iVar8 + iVar10;
            pcVar9 = (char *)(iVar8 + iVar10 + 0x24);
            local_14 = 0xffffffff;
            local_30 = iVar8;
            FUN_10111e98(local_38,local_2c);
            uVar4 = FUN_10107d2b(local_24,pcVar9,(uint)*(byte *)(iVar8 + iVar10 + 0x26) << 0x12);
            local_34 = CONCAT31(local_34._1_3_,uVar4);
            if ((*pcVar9 == '\0') && (*(char *)(local_30 + 0x26 + iVar10) == '\x01')) {
              *pcVar9 = '\x01';
              iVar11 = DAT_103a4c90;
              iVar8 = DAT_103a4c94;
              if (DAT_103a4c8c == DAT_103a4c90) {
                if (DAT_103a4c8c == 0) {
                  iVar8 = 8;
                }
                else {
                  iVar8 = DAT_103a4c8c / 2 + DAT_103a4c8c;
                }
                iVar11 = DAT_103a4c8c + 1;
                if (DAT_103a4c8c + 1 < iVar8) {
                  iVar11 = iVar8;
                }
                iVar8 = FUN_100fa1fa(iVar11 * 4);
                if (DAT_103a4c94 != 0) {
                  local_30 = iVar8;
                  FUN_1025b2d0(iVar8,DAT_103a4c94,DAT_103a4c8c << 2);
                  FUN_100fa2cb(DAT_103a4c94);
                  iVar8 = local_30;
                }
              }
              DAT_103a4c94 = iVar8;
              DAT_103a4c90 = iVar11;
              *(int *)(DAT_103a4c94 + DAT_103a4c8c * 4) = local_24;
              DAT_103a4c8c = DAT_103a4c8c + 1;
            }
            iVar11 = local_24;
            FUN_101bb3da(local_24);
            if ((char)local_34 != '\0') {
              FUN_101bb51c(iVar11);
            }
            FUN_1010ad44();
            iVar11 = DAT_103a4c80;
            iVar8 = DAT_103a4c88;
          }
          iVar5 = iVar5 + 1;
          iVar10 = iVar10 + 0x38;
        } while (iVar5 < iVar11);
      }
    }
  }
  else if ((DAT_1038efa4 == 1) &&
          (cVar2 = FUN_1014e2f8("##tabs",DAT_1038efa8 | 0xc0), cVar2 != '\0')) {
    if (DAT_1038efa8 == 1) {
      FUN_101bb3a0();
    }
    if (DAT_103a4c80 != 0) {
      iVar8 = DAT_103a4c80 * 0x38;
      iVar10 = DAT_103a4c88;
      iVar11 = DAT_103a4c88;
      do {
        if (*(char *)(iVar11 + 0x24) == '\x01') {
          local_14 = 0xffffffff;
          FUN_101b75f6(&local_88,0x40,"%s###doc%d",iVar11,*(undefined4 *)(iVar11 + 0x20));
          uVar4 = FUN_1014fafc(&local_88,iVar11 + 0x24,*(undefined1 *)(iVar11 + 0x26));
          local_24 = CONCAT31(local_24._1_3_,uVar4);
          if ((*(char *)(iVar11 + 0x24) == '\0') && (*(char *)(iVar11 + 0x26) == '\x01')) {
            *(undefined1 *)(iVar11 + 0x24) = 1;
            if (DAT_103a4c8c == DAT_103a4c90) {
              if (DAT_103a4c8c == 0) {
                iVar5 = 8;
              }
              else {
                iVar5 = DAT_103a4c8c / 2 + DAT_103a4c8c;
              }
              local_34 = DAT_103a4c8c + 1;
              if (DAT_103a4c8c + 1 < iVar5) {
                local_34 = iVar5;
              }
              iVar5 = FUN_100fa1fa(local_34 * 4);
              if (DAT_103a4c94 != 0) {
                local_2c = iVar5;
                FUN_1025b2d0(iVar5,DAT_103a4c94,DAT_103a4c8c << 2);
                FUN_100fa2cb(DAT_103a4c94);
                iVar5 = local_2c;
              }
              DAT_103a4c90 = local_34;
              DAT_103a4c94 = iVar5;
            }
            *(int *)(DAT_103a4c94 + DAT_103a4c8c * 4) = iVar10;
            DAT_103a4c8c = DAT_103a4c8c + 1;
          }
          FUN_101bb3da(iVar11);
          if ((char)local_24 != '\0') {
            FUN_101bb51c(iVar11);
            FUN_10150ac8();
          }
        }
        iVar11 = iVar11 + 0x38;
        iVar10 = iVar10 + 0x38;
        iVar8 = iVar8 + -0x38;
      } while (iVar8 != 0);
    }
    local_14 = 0xffffffff;
    FUN_1014e72b();
  }
  if (local_25 == '\0') {
    local_14 = 0xffffffff;
    FUN_1010ad44();
    goto code_r0x1019da2d;
  }
  if (DAT_103a4c98 != 0) {
    local_14 = 0xffffffff;
    if (DAT_103a4c9c == '\x01') {
      FUN_10115ea4("Rename",0);
    }
    cVar2 = FUN_10116736("Rename",0);
    if (cVar2 == '\0') {
      DAT_103a4c98 = 0;
    }
    else {
      fVar12 = (float10)FUN_10111f20();
      local_44 = (float)fVar12;
      FUN_100fb68f(local_44 * DAT_10302588);
      cVar2 = FUN_10141729("###Name",DAT_103a4c98,(undefined4)DAT_10302590,DAT_10302590._4_4_,0,0);
      if (cVar2 != '\0') {
        FUN_1011648c();
        DAT_103a4c98 = 0;
      }
      if (DAT_103a4c9c == '\x01') {
        FUN_10112577(0xffffffff);
      }
      FUN_101165cb();
    }
    DAT_103a4c9c = '\0';
  }
  iVar10 = DAT_103a4c94;
  if (DAT_103a4c8c != 0) {
    if (DAT_103a4c8c < 1) {
      if (DAT_103a4c94 != 0) goto LAB_1019d9fb;
    }
    else {
      iVar11 = 0;
      iVar8 = 0;
      do {
        iVar11 = iVar11 + (uint)*(byte *)(*(int *)(DAT_103a4c94 + iVar8 * 4) + 0x26);
        iVar8 = iVar8 + 1;
      } while (DAT_103a4c8c != iVar8);
      if (iVar11 == 0) {
        iVar11 = 0;
        do {
          iVar8 = *(int *)(iVar10 + iVar11 * 4);
          *(undefined1 *)(iVar8 + 0x24) = 0;
          *(undefined1 *)(iVar8 + 0x26) = 0;
          iVar11 = iVar11 + 1;
        } while (DAT_103a4c8c != iVar11);
LAB_1019d9fb:
        DAT_103a4c90 = 0;
        DAT_103a4c8c = 0;
        local_14 = 0xffffffff;
        FUN_100fa2cb(iVar10);
        DAT_103a4c94 = 0;
      }
      else {
        local_14 = 0xffffffff;
        cVar2 = FUN_10115db9("Save?",0);
        if (cVar2 == '\0') {
          FUN_10115ea4("Save?",0);
        }
        cVar2 = FUN_1011677e("Save?",0,0x40);
        if (cVar2 != '\0') {
          FUN_1012d08c("Save change to the following items?");
          fVar12 = (float10)FUN_101155d9();
          local_40 = (float)fVar12;
          local_88 = CONCAT44(local_40 * _DAT_103025a0,0x80800000);
          uVar7 = FUN_10113594("frame");
          cVar2 = FUN_1010c3c7(uVar7,&local_88,0x80,0);
          iVar10 = DAT_103a4c94;
          if ((cVar2 != '\0') && (DAT_103a4c8c != 0)) {
            iVar8 = DAT_103a4c8c * 4;
            iVar11 = 0;
            do {
              if (*(char *)(*(int *)(iVar10 + iVar11) + 0x26) == '\x01') {
                local_14 = 0xffffffff;
                FUN_1012d08c("%s",*(int *)(iVar10 + iVar11));
              }
              iVar11 = iVar11 + 4;
            } while (iVar8 != iVar11);
          }
          local_14 = 0xffffffff;
          FUN_1010c644();
          fVar12 = (float10)FUN_10111f20();
          local_3c = (float)fVar12;
          local_88 = (ulonglong)(uint)(local_3c * DAT_103025a4);
          cVar2 = FUN_1012e1b7(&DAT_10333f37,&local_88);
          iVar10 = DAT_103a4c94;
          if (cVar2 != '\0') {
            if (DAT_103a4c8c != 0) {
              iVar11 = DAT_103a4c8c * 4;
              iVar8 = 0;
              do {
                iVar5 = *(int *)(iVar10 + iVar8);
                if (*(char *)(iVar5 + 0x26) == '\x01') {
                  *(undefined1 *)(iVar5 + 0x26) = 0;
                }
                *(undefined1 *)(iVar5 + 0x24) = 0;
                *(undefined1 *)(iVar5 + 0x26) = 0;
                iVar8 = iVar8 + 4;
              } while (iVar11 != iVar8);
            }
            local_14 = 0xffffffff;
            if (iVar10 != 0) {
              DAT_103a4c90 = 0;
              DAT_103a4c8c = 0;
              FUN_100fa2cb(iVar10);
              DAT_103a4c94 = 0;
            }
            FUN_1011648c();
          }
          FUN_10114a0e(0,0xbf800000);
          cVar2 = FUN_1012e1b7(&DAT_10335a8b,&local_88);
          iVar10 = DAT_103a4c94;
          if (cVar2 != '\0') {
            if (DAT_103a4c8c != 0) {
              iVar11 = DAT_103a4c8c * 4;
              iVar8 = 0;
              do {
                iVar5 = *(int *)(iVar10 + iVar8);
                *(undefined1 *)(iVar5 + 0x24) = 0;
                *(undefined1 *)(iVar5 + 0x26) = 0;
                iVar8 = iVar8 + 4;
              } while (iVar11 != iVar8);
            }
            local_14 = 0xffffffff;
            if (iVar10 != 0) {
              DAT_103a4c90 = 0;
              DAT_103a4c8c = 0;
              FUN_100fa2cb(iVar10);
              DAT_103a4c94 = 0;
            }
            FUN_1011648c();
          }
          FUN_10114a0e(0,0xbf800000);
          cVar2 = FUN_1012e1b7("Cancel",&local_88);
          if (cVar2 != '\0') {
            if (DAT_103a4c94 != 0) {
              DAT_103a4c90 = 0;
              DAT_103a4c8c = 0;
              FUN_100fa2cb(DAT_103a4c94);
              DAT_103a4c94 = 0;
            }
            FUN_1011648c();
          }
          FUN_101165cb();
        }
      }
    }
  }
  local_14 = 0xffffffff;
  FUN_1010ad44();
code_r0x1019da2d:
  *unaff_FS_OFFSET = local_1c;
  return;
}


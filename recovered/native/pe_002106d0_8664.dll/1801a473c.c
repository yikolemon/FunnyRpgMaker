/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a473c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a473c(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  int iVar13;
  float fVar14;
  undefined8 local_a8;
  undefined4 local_68;
  char local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2c) < DAT_180420c80) && (FUN_18023d500(&DAT_180420c80), DAT_180420c80 == -1)) {
    FUN_1801c4082(&DAT_180420c50);
    FUN_18023d710(FUN_1801c4694);
    _Init_thread_footer(&DAT_180420c80);
  }
  local_61 = FUN_18010ca66("Example: Documents",&DAT_18041f1e4,0x400);
  if ((local_61 == '\0') && (DAT_180408ea8 != 2)) {
    FUN_18010f900();
    return;
  }
  FUN_180107e9e("imgui_demo.cpp",0x2a7c);
  cVar1 = FUN_180150cda();
  if (cVar1 != '\0') {
    cVar1 = FUN_180151e9c("File",1);
    if (cVar1 != '\0') {
      if ((longlong)DAT_180420c50 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        lVar10 = 0;
        do {
          iVar8 = iVar8 + (uint)*(byte *)(DAT_180420c58 + 0x24 + lVar10);
          lVar10 = lVar10 + 0x38;
        } while ((longlong)DAT_180420c50 * 0x38 - lVar10 != 0);
      }
      cVar1 = FUN_180151e9c(&DAT_1803662c4,iVar8 < DAT_180420c50);
      if (cVar1 != '\0') {
        if ((longlong)DAT_180420c50 != 0) {
          lVar7 = (longlong)DAT_180420c50 * 0x38;
          lVar10 = DAT_180420c58;
          do {
            if ((*(char *)(lVar10 + 0x24) == '\0') &&
               (cVar1 = FUN_1801377a6(lVar10,0,0,1), cVar1 != '\0')) {
              *(undefined1 *)(lVar10 + 0x24) = 1;
            }
            lVar10 = lVar10 + 0x38;
            lVar7 = lVar7 + -0x38;
          } while (lVar7 != 0);
        }
        FUN_180151ea6();
      }
      cVar1 = FUN_1801377a6("Close All Documents",0,0,iVar8 != 0);
      if ((cVar1 != '\0') && ((longlong)DAT_180420c50 != 0)) {
        lVar7 = (longlong)DAT_180420c50 * 0x38;
        lVar10 = DAT_180420c58;
        iVar8 = DAT_180420c60;
        do {
          if (iVar8 == DAT_180420c64) {
            if (iVar8 == 0) {
              iVar3 = 8;
            }
            else {
              iVar3 = iVar8 / 2 + iVar8;
            }
            iVar13 = iVar8 + 1;
            if (iVar8 + 1 < iVar3) {
              iVar13 = iVar3;
            }
            lVar5 = FUN_1800fe7f8((longlong)iVar13 << 3);
            if (DAT_180420c68 != 0) {
              FUN_1802a82f0(lVar5,DAT_180420c68,(longlong)DAT_180420c60 << 3);
              FUN_1800fe8d4(DAT_180420c68);
            }
            _DAT_180420c60 = CONCAT44(iVar13,DAT_180420c60);
            iVar8 = DAT_180420c60;
            DAT_180420c68 = lVar5;
          }
          *(longlong *)(DAT_180420c68 + (longlong)iVar8 * 8) = lVar10;
          iVar8 = DAT_180420c60 + 1;
          _DAT_180420c60 = CONCAT44(DAT_180420c64,iVar8);
          lVar10 = lVar10 + 0x38;
          lVar7 = lVar7 + -0x38;
        } while (lVar7 != 0);
      }
      cVar1 = FUN_1801377a6(&DAT_180361c0b,0,0,1);
      if (cVar1 != '\0') {
        DAT_18041f1e4 = 0;
      }
      FUN_180151ea6();
    }
    FUN_180150f05();
  }
  uVar4 = DAT_1802bb8e0;
  if (0 < DAT_180420c50) {
    lVar10 = 0x24;
    lVar7 = 0;
    do {
      lVar5 = DAT_180420c58;
      if (lVar10 != 0x24) {
        FUN_180119893(0,uVar4);
      }
      lVar9 = lVar5 + lVar10 + -0x24;
      FUN_180118054(lVar9);
      cVar1 = FUN_180135c3a(lVar9,(char *)(lVar5 + lVar10));
      if ((cVar1 != '\0') && (*(char *)(lVar5 + lVar10) == '\0')) {
        *(undefined1 *)(lVar5 + lVar10) = 0;
        *(undefined1 *)(lVar5 + 2 + lVar10) = 0;
      }
      FUN_18011834f();
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + 0x38;
    } while (lVar7 < DAT_180420c50);
  }
  fVar14 = (float)FUN_180116c08();
  FUN_18011a05a(fVar14 * DAT_1802de988);
  FUN_180139992("Output",&DAT_180408ea8,&DAT_18038603b,0xffffffff);
  FUN_18011a356();
  if (DAT_180408ea8 == 1) {
    FUN_180119893(0,DAT_1802bb8e0);
    FUN_180135c3a("Reorderable Tabs");
  }
  iVar8 = 4;
  if (DAT_180408ea8 == 2) {
    FUN_180119893(0,DAT_1802bb8e0);
    local_a8 = 0;
    bVar2 = FUN_180134257("Redock all");
    iVar8 = (uint)(bVar2 ^ 1) + (uint)(bVar2 ^ 1) * 2 + 1;
  }
  FUN_180137ca1();
  if (DAT_180408ea8 == 2) {
    pbVar6 = (byte *)FUN_180107ee8();
    if ((*pbVar6 & 0x80) == 0) {
      FUN_1801c4039();
    }
    else {
      FUN_1801c4724(&DAT_180420c50);
      local_68 = FUN_18011837d("MyDockSpace");
      local_a8 = 0;
      FUN_180121774(local_68,&local_a8,0,0);
      if (0 < DAT_180420c50) {
        lVar7 = 0;
        lVar5 = 0;
        lVar10 = DAT_180420c58;
        iVar3 = DAT_180420c50;
        do {
          if (*(char *)(lVar10 + 0x24 + lVar7) == '\x01') {
            pcVar12 = (char *)(lVar10 + lVar7 + 0x24);
            FUN_180116b7f(local_68,iVar8);
            cVar1 = FUN_18010ca66(lVar10 + lVar7,pcVar12);
            if ((*pcVar12 == '\0') && (*(char *)(lVar10 + 0x26 + lVar7) == '\x01')) {
              *pcVar12 = '\x01';
              iVar3 = DAT_180420c60;
              if (DAT_180420c60 == DAT_180420c64) {
                if (DAT_180420c60 == 0) {
                  iVar3 = 8;
                }
                else {
                  iVar3 = DAT_180420c60 / 2 + DAT_180420c60;
                }
                iVar13 = DAT_180420c60 + 1;
                if (DAT_180420c60 + 1 < iVar3) {
                  iVar13 = iVar3;
                }
                lVar9 = FUN_1800fe7f8((longlong)iVar13 << 3);
                if (DAT_180420c68 != 0) {
                  FUN_1802a82f0(lVar9);
                  FUN_1800fe8d4(DAT_180420c68);
                }
                _DAT_180420c60 = CONCAT44(iVar13,DAT_180420c60);
                iVar3 = DAT_180420c60;
                DAT_180420c68 = lVar9;
              }
              *(longlong *)(DAT_180420c68 + (longlong)iVar3 * 8) = lVar10 + lVar7;
              DAT_180420c60 = DAT_180420c60 + 1;
            }
            FUN_1801c476c(&DAT_180420c50);
            if (cVar1 != '\0') {
              FUN_1801c48be(&DAT_180420c50);
            }
            FUN_18010f900();
            lVar10 = DAT_180420c58;
            iVar3 = DAT_180420c50;
          }
          lVar5 = lVar5 + 1;
          lVar7 = lVar7 + 0x38;
        } while (lVar5 < iVar3);
      }
    }
  }
  else if ((DAT_180408ea8 == 1) && (cVar1 = FUN_1801525a2("##tabs"), cVar1 != '\0')) {
    if (DAT_180408eac == '\x01') {
      FUN_1801c4724(&DAT_180420c50);
    }
    if ((longlong)DAT_180420c50 != 0) {
      lVar5 = (longlong)DAT_180420c50 * 0x38;
      lVar10 = DAT_180420c58;
      lVar7 = DAT_180420c58;
      do {
        if (*(char *)(lVar10 + 0x24) == '\x01') {
          FUN_1801c07f5(&local_a8,0x40,"%s###doc%d",lVar10,*(undefined4 *)(lVar10 + 0x20));
          cVar1 = FUN_180153cc1(&local_a8,(undefined1 *)(lVar10 + 0x24));
          if ((*(char *)(lVar10 + 0x24) == '\0') && (*(char *)(lVar10 + 0x26) == '\x01')) {
            *(undefined1 *)(lVar10 + 0x24) = 1;
            iVar8 = DAT_180420c60;
            if (DAT_180420c60 == DAT_180420c64) {
              if (DAT_180420c60 == 0) {
                iVar8 = 8;
              }
              else {
                iVar8 = DAT_180420c60 / 2 + DAT_180420c60;
              }
              iVar3 = DAT_180420c60 + 1;
              if (DAT_180420c60 + 1 < iVar8) {
                iVar3 = iVar8;
              }
              lVar9 = FUN_1800fe7f8((longlong)iVar3 << 3);
              if (DAT_180420c68 != 0) {
                FUN_1802a82f0(lVar9);
                FUN_1800fe8d4(DAT_180420c68);
              }
              _DAT_180420c60 = CONCAT44(iVar3,DAT_180420c60);
              iVar8 = DAT_180420c60;
              DAT_180420c68 = lVar9;
            }
            *(longlong *)(DAT_180420c68 + (longlong)iVar8 * 8) = lVar7;
            DAT_180420c60 = DAT_180420c60 + 1;
          }
          FUN_1801c476c(&DAT_180420c50);
          if (cVar1 != '\0') {
            FUN_1801c48be(&DAT_180420c50);
            FUN_180154c1a();
          }
        }
        lVar10 = lVar10 + 0x38;
        lVar7 = lVar7 + 0x38;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    FUN_180152a30();
  }
  if (local_61 == '\0') {
    FUN_18010f900();
    return;
  }
  if (DAT_180420c70 != 0) {
    if (DAT_180420c78 == '\x01') {
      FUN_18011ac8e("Rename");
    }
    cVar1 = FUN_18011b56a("Rename");
    if (cVar1 == '\0') {
      DAT_180420c70 = 0;
    }
    else {
      fVar14 = (float)FUN_180116c08();
      FUN_1800ffdb5(fVar14 * DAT_1802dbb40);
      cVar1 = FUN_180145e1f("###Name",DAT_180420c70,0x20,0x40,0,0);
      if (cVar1 != '\0') {
        FUN_18011b292();
        DAT_180420c70 = 0;
      }
      if (DAT_180420c78 == '\x01') {
        FUN_180117268(0xffffffff);
      }
      FUN_18011b3ef();
    }
    DAT_180420c78 = '\0';
  }
  lVar10 = DAT_180420c68;
  if ((_DAT_180420c60 & 0xffffffff) != 0) {
    if (DAT_180420c60 < 1) {
      if (DAT_180420c68 == 0) goto LAB_1801a51a5;
    }
    else {
      iVar8 = 0;
      uVar11 = 0;
      do {
        iVar8 = iVar8 + (uint)*(byte *)(*(longlong *)(DAT_180420c68 + uVar11 * 8) + 0x26);
        uVar11 = uVar11 + 1;
      } while ((_DAT_180420c60 & 0xffffffff) != uVar11);
      if (iVar8 != 0) {
        cVar1 = FUN_18011ab75("Save?",0);
        if (cVar1 == '\0') {
          FUN_18011ac8e("Save?",0);
        }
        cVar1 = FUN_18011b5be("Save?",0,0x40);
        if (cVar1 != '\0') {
          FUN_1801330a5("Save change to the following items?");
          fVar14 = (float)FUN_18011a43e();
          local_a8 = CONCAT44(fVar14 * _DAT_180328f00,0x80800000);
          uVar4 = FUN_18011837d("frame");
          cVar1 = FUN_180111048(uVar4,&local_a8,0x80,0);
          lVar10 = DAT_180420c68;
          if (cVar1 != '\0') {
            lVar7 = (longlong)DAT_180420c60;
            if (lVar7 != 0) {
              lVar5 = 0;
              do {
                if (*(char *)(*(longlong *)(lVar10 + lVar5) + 0x26) == '\x01') {
                  FUN_1801330a5("%s");
                }
                lVar5 = lVar5 + 8;
              } while (lVar7 * 8 != lVar5);
            }
          }
          FUN_180111339();
          fVar14 = (float)FUN_180116c08();
          local_a8 = (ulonglong)(uint)(fVar14 * DAT_180328f04);
          cVar1 = FUN_180134257(&DAT_180364038);
          lVar10 = DAT_180420c68;
          if (cVar1 != '\0') {
            lVar7 = (longlong)DAT_180420c60;
            if (lVar7 != 0) {
              lVar5 = 0;
              do {
                lVar9 = *(longlong *)(lVar10 + lVar5);
                if (*(char *)(lVar9 + 0x26) == '\x01') {
                  *(undefined1 *)(lVar9 + 0x26) = 0;
                }
                *(undefined1 *)(lVar9 + 0x24) = 0;
                *(undefined1 *)(lVar9 + 0x26) = 0;
                lVar5 = lVar5 + 8;
              } while (lVar7 * 8 != lVar5);
            }
            if (lVar10 != 0) {
              _DAT_180420c60 = 0;
              FUN_1800fe8d4();
              DAT_180420c68 = 0;
            }
            FUN_18011b292();
          }
          FUN_180119893(0,DAT_1802bb8e0);
          cVar1 = FUN_180134257(&DAT_180365b8c);
          lVar10 = DAT_180420c68;
          if (cVar1 != '\0') {
            lVar7 = (longlong)DAT_180420c60;
            if (lVar7 != 0) {
              lVar5 = 0;
              do {
                lVar9 = *(longlong *)(lVar10 + lVar5);
                *(undefined1 *)(lVar9 + 0x24) = 0;
                *(undefined1 *)(lVar9 + 0x26) = 0;
                lVar5 = lVar5 + 8;
              } while (lVar7 * 8 != lVar5);
            }
            if (lVar10 != 0) {
              _DAT_180420c60 = 0;
              FUN_1800fe8d4();
              DAT_180420c68 = 0;
            }
            FUN_18011b292();
          }
          FUN_180119893(0,DAT_1802bb8e0);
          cVar1 = FUN_180134257("Cancel",&local_a8);
          if (cVar1 != '\0') {
            if (DAT_180420c68 != 0) {
              _DAT_180420c60 = 0;
              FUN_1800fe8d4();
              DAT_180420c68 = 0;
            }
            FUN_18011b292();
          }
          FUN_18011b3ef();
        }
        goto LAB_1801a51a5;
      }
      uVar11 = 0;
      do {
        lVar7 = *(longlong *)(lVar10 + uVar11 * 8);
        *(undefined1 *)(lVar7 + 0x24) = 0;
        *(undefined1 *)(lVar7 + 0x26) = 0;
        uVar11 = uVar11 + 1;
      } while ((_DAT_180420c60 & 0xffffffff) != uVar11);
    }
    _DAT_180420c60 = 0;
    FUN_1800fe8d4();
    DAT_180420c68 = 0;
  }
LAB_1801a51a5:
  FUN_18010f900();
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ea3c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ea3c0(void)

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
               0x2c) < DAT_140f323d0) && (FUN_140188840(&DAT_140f323d0), DAT_140f323d0 == -1)) {
    FUN_140109d86(&DAT_140f323a0);
    FUN_140188b50(FUN_14010a398);
    _Init_thread_footer(&DAT_140f323d0);
  }
  local_61 = FUN_140085d7e("Example: Documents",&DAT_140f30934,0x400);
  if ((local_61 == '\0') && (DAT_140f1c648 != 2)) {
    FUN_140088c18();
    return;
  }
  FUN_1400811b6("imgui_demo.cpp",0x2a7c);
  cVar1 = FUN_1400c9c0a();
  if (cVar1 != '\0') {
    cVar1 = FUN_1400cadcc("File",1);
    if (cVar1 != '\0') {
      if ((longlong)DAT_140f323a0 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = 0;
        lVar10 = 0;
        do {
          iVar8 = iVar8 + (uint)*(byte *)(DAT_140f323a8 + 0x24 + lVar10);
          lVar10 = lVar10 + 0x38;
        } while ((longlong)DAT_140f323a0 * 0x38 - lVar10 != 0);
      }
      cVar1 = FUN_1400cadcc(&DAT_140ec763d,iVar8 < DAT_140f323a0);
      if (cVar1 != '\0') {
        if ((longlong)DAT_140f323a0 != 0) {
          lVar7 = (longlong)DAT_140f323a0 * 0x38;
          lVar10 = DAT_140f323a8;
          do {
            if ((*(char *)(lVar10 + 0x24) == '\0') &&
               (cVar1 = FUN_1400b06d6(lVar10,0,0,1), cVar1 != '\0')) {
              *(undefined1 *)(lVar10 + 0x24) = 1;
            }
            lVar10 = lVar10 + 0x38;
            lVar7 = lVar7 + -0x38;
          } while (lVar7 != 0);
        }
        FUN_1400cadd6();
      }
      cVar1 = FUN_1400b06d6("Close All Documents",0,0,iVar8 != 0);
      if ((cVar1 != '\0') && ((longlong)DAT_140f323a0 != 0)) {
        lVar7 = (longlong)DAT_140f323a0 * 0x38;
        lVar10 = DAT_140f323a8;
        iVar8 = DAT_140f323b0;
        do {
          if (iVar8 == DAT_140f323b4) {
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
            lVar5 = FUN_140077ab4((longlong)iVar13 << 3);
            if (DAT_140f323b8 != 0) {
              FUN_1401c5180(lVar5,DAT_140f323b8,(longlong)DAT_140f323b0 << 3);
              FUN_140077b90(DAT_140f323b8);
            }
            _DAT_140f323b0 = CONCAT44(iVar13,DAT_140f323b0);
            iVar8 = DAT_140f323b0;
            DAT_140f323b8 = lVar5;
          }
          *(longlong *)(DAT_140f323b8 + (longlong)iVar8 * 8) = lVar10;
          iVar8 = DAT_140f323b0 + 1;
          _DAT_140f323b0 = CONCAT44(DAT_140f323b4,iVar8);
          lVar10 = lVar10 + 0x38;
          lVar7 = lVar7 + -0x38;
        } while (lVar7 != 0);
      }
      cVar1 = FUN_1400b06d6(&DAT_140ec3b14,0,0,1);
      if (cVar1 != '\0') {
        DAT_140f30934 = 0;
      }
      FUN_1400cadd6();
    }
    FUN_1400c9e35();
  }
  uVar4 = DAT_1401c86a4;
  if (0 < DAT_140f323a0) {
    lVar10 = 0x24;
    lVar7 = 0;
    do {
      lVar5 = DAT_140f323a8;
      if (lVar10 != 0x24) {
        FUN_140092bab(0,uVar4);
      }
      lVar9 = lVar5 + lVar10 + -0x24;
      FUN_14009136c(lVar9);
      cVar1 = FUN_1400aeb6a(lVar9,(char *)(lVar5 + lVar10));
      if ((cVar1 != '\0') && (*(char *)(lVar5 + lVar10) == '\0')) {
        *(undefined1 *)(lVar5 + lVar10) = 0;
        *(undefined1 *)(lVar5 + 2 + lVar10) = 0;
      }
      FUN_140091667();
      lVar7 = lVar7 + 1;
      lVar10 = lVar10 + 0x38;
    } while (lVar7 < DAT_140f323a0);
  }
  fVar14 = (float)FUN_14008ff20();
  FUN_140093372(fVar14 * DAT_1402116f8);
  FUN_1400b28c2("Output",&DAT_140f1c648,&DAT_140edcc16,0xffffffff);
  FUN_14009366e();
  if (DAT_140f1c648 == 1) {
    FUN_140092bab(0,DAT_1401c86a4);
    FUN_1400aeb6a("Reorderable Tabs");
  }
  iVar8 = 4;
  if (DAT_140f1c648 == 2) {
    FUN_140092bab(0,DAT_1401c86a4);
    local_a8 = 0;
    bVar2 = FUN_1400ad187("Redock all");
    iVar8 = (uint)(bVar2 ^ 1) + (uint)(bVar2 ^ 1) * 2 + 1;
  }
  FUN_1400b0bd1();
  if (DAT_140f1c648 == 2) {
    pbVar6 = (byte *)FUN_140081200();
    if ((*pbVar6 & 0x80) == 0) {
      FUN_140109d3d();
    }
    else {
      FUN_14010a428(&DAT_140f323a0);
      local_68 = FUN_140091695("MyDockSpace");
      local_a8 = 0;
      FUN_14009aa30(local_68,&local_a8,0,0);
      if (0 < DAT_140f323a0) {
        lVar7 = 0;
        lVar5 = 0;
        lVar10 = DAT_140f323a8;
        iVar3 = DAT_140f323a0;
        do {
          if (*(char *)(lVar10 + 0x24 + lVar7) == '\x01') {
            pcVar12 = (char *)(lVar10 + lVar7 + 0x24);
            FUN_14008fe97(local_68,iVar8);
            cVar1 = FUN_140085d7e(lVar10 + lVar7,pcVar12);
            if ((*pcVar12 == '\0') && (*(char *)(lVar10 + 0x26 + lVar7) == '\x01')) {
              *pcVar12 = '\x01';
              iVar3 = DAT_140f323b0;
              if (DAT_140f323b0 == DAT_140f323b4) {
                if (DAT_140f323b0 == 0) {
                  iVar3 = 8;
                }
                else {
                  iVar3 = DAT_140f323b0 / 2 + DAT_140f323b0;
                }
                iVar13 = DAT_140f323b0 + 1;
                if (DAT_140f323b0 + 1 < iVar3) {
                  iVar13 = iVar3;
                }
                lVar9 = FUN_140077ab4((longlong)iVar13 << 3);
                if (DAT_140f323b8 != 0) {
                  FUN_1401c5180(lVar9);
                  FUN_140077b90(DAT_140f323b8);
                }
                _DAT_140f323b0 = CONCAT44(iVar13,DAT_140f323b0);
                iVar3 = DAT_140f323b0;
                DAT_140f323b8 = lVar9;
              }
              *(longlong *)(DAT_140f323b8 + (longlong)iVar3 * 8) = lVar10 + lVar7;
              DAT_140f323b0 = DAT_140f323b0 + 1;
            }
            FUN_14010a470(&DAT_140f323a0);
            if (cVar1 != '\0') {
              FUN_14010a5c2(&DAT_140f323a0);
            }
            FUN_140088c18();
            lVar10 = DAT_140f323a8;
            iVar3 = DAT_140f323a0;
          }
          lVar5 = lVar5 + 1;
          lVar7 = lVar7 + 0x38;
        } while (lVar5 < iVar3);
      }
    }
  }
  else if ((DAT_140f1c648 == 1) && (cVar1 = FUN_1400cb4d2("##tabs"), cVar1 != '\0')) {
    if (DAT_140f1c64c == '\x01') {
      FUN_14010a428(&DAT_140f323a0);
    }
    if ((longlong)DAT_140f323a0 != 0) {
      lVar5 = (longlong)DAT_140f323a0 * 0x38;
      lVar10 = DAT_140f323a8;
      lVar7 = DAT_140f323a8;
      do {
        if (*(char *)(lVar10 + 0x24) == '\x01') {
          FUN_1401064f9(&local_a8,0x40,"%s###doc%d",lVar10,*(undefined4 *)(lVar10 + 0x20));
          cVar1 = FUN_1400ccbf1(&local_a8,(undefined1 *)(lVar10 + 0x24));
          if ((*(char *)(lVar10 + 0x24) == '\0') && (*(char *)(lVar10 + 0x26) == '\x01')) {
            *(undefined1 *)(lVar10 + 0x24) = 1;
            iVar8 = DAT_140f323b0;
            if (DAT_140f323b0 == DAT_140f323b4) {
              if (DAT_140f323b0 == 0) {
                iVar8 = 8;
              }
              else {
                iVar8 = DAT_140f323b0 / 2 + DAT_140f323b0;
              }
              iVar3 = DAT_140f323b0 + 1;
              if (DAT_140f323b0 + 1 < iVar8) {
                iVar3 = iVar8;
              }
              lVar9 = FUN_140077ab4((longlong)iVar3 << 3);
              if (DAT_140f323b8 != 0) {
                FUN_1401c5180(lVar9);
                FUN_140077b90(DAT_140f323b8);
              }
              _DAT_140f323b0 = CONCAT44(iVar3,DAT_140f323b0);
              iVar8 = DAT_140f323b0;
              DAT_140f323b8 = lVar9;
            }
            *(longlong *)(DAT_140f323b8 + (longlong)iVar8 * 8) = lVar7;
            DAT_140f323b0 = DAT_140f323b0 + 1;
          }
          FUN_14010a470(&DAT_140f323a0);
          if (cVar1 != '\0') {
            FUN_14010a5c2(&DAT_140f323a0);
            FUN_1400cdb4a();
          }
        }
        lVar10 = lVar10 + 0x38;
        lVar7 = lVar7 + 0x38;
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    FUN_1400cb960();
  }
  if (local_61 == '\0') {
    FUN_140088c18();
    return;
  }
  if (DAT_140f323c0 != 0) {
    if (DAT_140f323c8 == '\x01') {
      FUN_140093f4a("Rename");
    }
    cVar1 = FUN_140094826("Rename");
    if (cVar1 == '\0') {
      DAT_140f323c0 = 0;
    }
    else {
      fVar14 = (float)FUN_14008ff20();
      FUN_140079071(fVar14 * DAT_140e8d290);
      cVar1 = FUN_1400bed4f("###Name",DAT_140f323c0,0x20,0x40,0,0);
      if (cVar1 != '\0') {
        FUN_14009454e();
        DAT_140f323c0 = 0;
      }
      if (DAT_140f323c8 == '\x01') {
        FUN_140090580(0xffffffff);
      }
      FUN_1400946ab();
    }
    DAT_140f323c8 = '\0';
  }
  lVar10 = DAT_140f323b8;
  if ((_DAT_140f323b0 & 0xffffffff) != 0) {
    if (DAT_140f323b0 < 1) {
      if (DAT_140f323b8 == 0) goto LAB_1400eae29;
    }
    else {
      iVar8 = 0;
      uVar11 = 0;
      do {
        iVar8 = iVar8 + (uint)*(byte *)(*(longlong *)(DAT_140f323b8 + uVar11 * 8) + 0x26);
        uVar11 = uVar11 + 1;
      } while ((_DAT_140f323b0 & 0xffffffff) != uVar11);
      if (iVar8 != 0) {
        cVar1 = FUN_140093e31("Save?",0);
        if (cVar1 == '\0') {
          FUN_140093f4a("Save?",0);
        }
        cVar1 = FUN_14009487a("Save?",0,0x40);
        if (cVar1 != '\0') {
          FUN_1400abfd5("Save change to the following items?");
          fVar14 = (float)FUN_140093756();
          local_a8 = CONCAT44(fVar14 * _DAT_140e8d294,0x80800000);
          uVar4 = FUN_140091695("frame");
          cVar1 = FUN_14008a360(uVar4,&local_a8,0x80,0);
          lVar10 = DAT_140f323b8;
          if (cVar1 != '\0') {
            lVar7 = (longlong)DAT_140f323b0;
            if (lVar7 != 0) {
              lVar5 = 0;
              do {
                if (*(char *)(*(longlong *)(lVar10 + lVar5) + 0x26) == '\x01') {
                  FUN_1400abfd5("%s");
                }
                lVar5 = lVar5 + 8;
              } while (lVar7 * 8 != lVar5);
            }
          }
          FUN_14008a651();
          fVar14 = (float)FUN_14008ff20();
          local_a8 = (ulonglong)(uint)(fVar14 * DAT_140e8d298);
          cVar1 = FUN_1400ad187(&DAT_140ec5ad8);
          lVar10 = DAT_140f323b8;
          if (cVar1 != '\0') {
            lVar7 = (longlong)DAT_140f323b0;
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
              _DAT_140f323b0 = 0;
              FUN_140077b90();
              DAT_140f323b8 = 0;
            }
            FUN_14009454e();
          }
          FUN_140092bab(0,DAT_1401c86a4);
          cVar1 = FUN_1400ad187(&DAT_140ec6fe1);
          lVar10 = DAT_140f323b8;
          if (cVar1 != '\0') {
            lVar7 = (longlong)DAT_140f323b0;
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
              _DAT_140f323b0 = 0;
              FUN_140077b90();
              DAT_140f323b8 = 0;
            }
            FUN_14009454e();
          }
          FUN_140092bab(0,DAT_1401c86a4);
          cVar1 = FUN_1400ad187("Cancel",&local_a8);
          if (cVar1 != '\0') {
            if (DAT_140f323b8 != 0) {
              _DAT_140f323b0 = 0;
              FUN_140077b90();
              DAT_140f323b8 = 0;
            }
            FUN_14009454e();
          }
          FUN_1400946ab();
        }
        goto LAB_1400eae29;
      }
      uVar11 = 0;
      do {
        lVar7 = *(longlong *)(lVar10 + uVar11 * 8);
        *(undefined1 *)(lVar7 + 0x24) = 0;
        *(undefined1 *)(lVar7 + 0x26) = 0;
        uVar11 = uVar11 + 1;
      } while ((_DAT_140f323b0 & 0xffffffff) != uVar11);
    }
    _DAT_140f323b0 = 0;
    FUN_140077b90();
    DAT_140f323b8 = 0;
  }
LAB_1400eae29:
  FUN_140088c18();
  return;
}


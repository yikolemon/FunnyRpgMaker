/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d6d67 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_1400d6d67(HWND param_1,uint param_2,ulonglong param_3,int *param_4,uint *param_5)

{
  uint *puVar1;
  sbyte sVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  BOOL BVar7;
  longlong lVar8;
  HWND pHVar9;
  LRESULT LVar10;
  uint uVar11;
  sbyte sVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  LRESULT LVar15;
  ulonglong extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  ulonglong uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStackY_b8 [32];
  tagTRACKMOUSEEVENT local_80;
  tagTRACKMOUSEEVENT local_68;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStackY_b8;
  local_50 = param_3;
  lVar8 = FUN_1400d7598(param_5);
  if (lVar8 == 0) goto LAB_1400d733f;
  LVar10 = 0;
  LVar15 = 0;
  uVar11 = (uint)param_3;
  if ((int)param_2 < 0x200) {
    if ((int)param_2 < 0x7e) {
      if ((int)param_2 < 0x1a) {
        if (param_2 - 7 < 2) {
          FUN_140077566(param_5,param_2 == 7);
          *(undefined4 *)(lVar8 + 0x60) = 0;
        }
        else {
          if (param_2 != 2) goto switchD_1400d6dea_caseD_20f;
          if (*(HWND *)(lVar8 + 8) == param_1) {
            LVar15 = 0;
            if (*(int *)(lVar8 + 0x10) != 0) {
              local_68.cbSize = 0x18;
              local_68.dwFlags = 0x80000000;
              local_68.dwHoverTime = 0;
              local_68.hwndTrack = param_1;
              TrackMouseEvent(&local_68);
              *(undefined8 *)(lVar8 + 8) = 0;
              *(undefined4 *)(lVar8 + 0x10) = 0;
              FUN_140076eaa(param_5,DAT_1402112e0,DAT_1402112e0);
            }
            goto switchD_1400d6dea_caseD_20f;
          }
        }
      }
      else if (param_2 == 0x1a) {
        if (param_3 == 0x2f) goto LAB_1400d723f;
      }
      else if (param_2 == 0x20) {
        if ((short)param_4 == 1) {
          cVar3 = FUN_1400d64a7(param_5,*(undefined4 *)(lVar8 + 0x28));
          LVar15 = 1;
          if (cVar3 != '\0') goto switchD_1400d6dea_caseD_20f;
        }
      }
      else {
        if (param_2 != 0x51) goto switchD_1400d6dea_caseD_20f;
        FUN_1400d76aa(param_5);
      }
    }
    else {
      uVar4 = param_2 - 0x100;
      if (uVar4 < 0x10) {
        if ((0x33U >> (uVar4 & 0x1f) & 1) == 0) {
          if (uVar4 != 2) {
            if (uVar4 == 0xf) {
              LVar10 = DefWindowProcW(param_1,0x10f,param_3,(LPARAM)param_4);
              LVar15 = 1;
              if (((uint)param_4 >> 0xb & 1) == 0) {
                LVar15 = LVar10;
              }
              goto switchD_1400d6dea_caseD_20f;
            }
            goto LAB_1400d70c6;
          }
          BVar7 = IsWindowUnicode(param_1);
          if (BVar7 == 0) {
            local_68._0_8_ = local_68._0_8_ & 0xffffffffffff0000;
            MultiByteToWideChar(*(UINT *)(lVar8 + 0x2c),1,(LPCSTR)&local_50,2,(LPWSTR)&local_68,1);
            FUN_1400767b4(param_5,local_68._0_8_ & 0xffff);
          }
          else if (param_3 - 1 < 0xffff) {
            FUN_1400768c4(param_5,param_3 & 0xffffffff);
          }
        }
        else if (param_3 < 0x100) {
          param_2 = param_2 & 0xfffffffb;
          FUN_1400d75d4(param_5);
          iVar5 = FUN_1400d6a22(param_3,param_4);
          if (iVar5 == 0x262 && param_2 != 0x100) {
            FUN_1400d765a(param_5,0x262,1,param_3 & 0xffffffff);
LAB_1400d7385:
            FUN_1400d765a(param_5,iVar5,param_2 == 0x100,param_3 & 0xffffffff);
          }
          else if (iVar5 != 0) goto LAB_1400d7385;
          if (param_3 == 0x12) {
            cVar3 = FUN_1400d7695(0xa4);
            if ((bool)cVar3 == (param_2 == 0x100)) {
              FUN_1400d765a(param_5,0x211,param_2 == 0x100,0xa4);
            }
            cVar3 = FUN_1400d7695(0xa5);
            if ((bool)cVar3 == (param_2 == 0x100)) {
              uVar13 = 0x215;
              uVar14 = 0xa5;
LAB_1400d7540:
              FUN_1400d765a(param_5,uVar13,param_2 == 0x100,uVar14);
            }
          }
          else if (uVar11 == 0x11) {
            cVar3 = FUN_1400d7695(0xa2);
            if ((bool)cVar3 == (param_2 == 0x100)) {
              FUN_1400d765a(param_5,0x20f,param_2 == 0x100,0xa2);
            }
            cVar3 = FUN_1400d7695(0xa3);
            if ((bool)cVar3 == (param_2 == 0x100)) {
              uVar13 = 0x213;
              uVar14 = 0xa3;
              goto LAB_1400d7540;
            }
          }
          else if (uVar11 == 0x10) {
            cVar3 = FUN_1400d7695(0xa0);
            if ((bool)cVar3 == (param_2 == 0x100)) {
              FUN_1400d765a(param_5,0x210,param_2 == 0x100,0xa0);
            }
            cVar3 = FUN_1400d7695(0xa1);
            if ((bool)cVar3 == (param_2 == 0x100)) {
              uVar13 = 0x214;
              uVar14 = 0xa1;
              goto LAB_1400d7540;
            }
          }
        }
      }
      else {
LAB_1400d70c6:
        if (param_2 != 0x7e) {
          if (param_2 != 0xa0) goto switchD_1400d6dea_caseD_20f;
          goto switchD_1400d6dea_caseD_200;
        }
LAB_1400d723f:
        *(undefined1 *)(lVar8 + 0x30) = 1;
      }
    }
    goto LAB_1400d733f;
  }
  LVar15 = LVar10;
  if (0x285 < (int)param_2) {
    if (param_2 - 0x2a2 < 2) {
      if (*(int *)(lVar8 + 0x10) == (param_2 != 0x2a3) + 1) {
        if (*(HWND *)(lVar8 + 8) == param_1) {
          *(undefined8 *)(lVar8 + 8) = 0;
        }
        *(undefined4 *)(lVar8 + 0x10) = 0;
        fVar17 = DAT_1402112e0;
        fVar18 = DAT_1402112e0;
        goto LAB_1400d733a;
      }
    }
    else if (param_2 == 0x286) {
      BVar7 = IsWindowUnicode(param_1);
      if (BVar7 == 0) {
        BVar7 = IsDBCSLeadByte((BYTE)(param_3 >> 8));
        if (BVar7 != 0) {
          local_50 = (ulonglong)(ushort)((ushort)param_3 << 8 | (ushort)param_3 >> 8);
        }
        local_68._0_8_ = local_68._0_8_ & 0xffffffffffff0000;
        MultiByteToWideChar(*(UINT *)(lVar8 + 0x2c),1,(LPCSTR)&local_50,2,(LPWSTR)&local_68,1);
        FUN_1400768c4(param_5,local_68._0_8_ & 0xffff);
        LVar15 = 1;
        goto switchD_1400d6dea_caseD_20f;
      }
    }
    else {
      if (param_2 != 0x2e0) goto switchD_1400d6dea_caseD_20f;
      if (*(char *)((longlong)param_5 + 0x5b) == '\x01') {
        SetWindowPos(param_1,(HWND)0x0,*param_4,param_4[1],param_4[2] - *param_4,
                     param_4[3] - param_4[1],0x14);
        LVar15 = 0;
        goto switchD_1400d6dea_caseD_20f;
      }
    }
    goto LAB_1400d733f;
  }
  if (0x19 < param_2 - 0x200) goto switchD_1400d6dea_caseD_20f;
  switch(param_2) {
  case 0x200:
switchD_1400d6dea_caseD_200:
    uVar6 = FUN_1400d75a0();
    iVar5 = (param_2 != 0x200) + 1;
    *(HWND *)(lVar8 + 8) = param_1;
    uVar16 = extraout_XMM0_Qa;
    if (*(int *)(lVar8 + 0x10) != iVar5) {
      local_68.cbSize = 0x18;
      local_68.dwFlags = 0x80000000;
      local_68.dwHoverTime = 0;
      local_80.cbSize = 0x18;
      local_80.dwFlags = (uint)(param_2 != 0x200) << 4 | 2;
      local_80.dwHoverTime = 0;
      local_80.hwndTrack = param_1;
      local_68.hwndTrack = param_1;
      if (*(int *)(lVar8 + 0x10) != 0) {
        TrackMouseEvent(&local_68);
      }
      TrackMouseEvent(&local_80);
      *(int *)(lVar8 + 0x10) = iVar5;
      uVar16 = extraout_XMM0_Qa_00;
    }
    local_68._0_8_ =
         CONCAT44((int)((uint)((uVar16 & 0xffff0000ffff) >> 0x20) |
                       (uint)((((ulonglong)param_4 >> 0x10) << 0x30) >> 0x20)) >> 0x10,
                  (int)((uint)(uVar16 & 0xffff0000ffff) |
                       (uint)(((ulonglong)param_4 & 0xffff) << 0x10)) >> 0x10);
    if (((byte)(*param_5 >> 10) & 1 & param_2 == 0x200) == 1) {
      ClientToScreen(param_1,(LPPOINT)&local_68);
    }
    else if (param_2 == 0xa0 && (*param_5 & 0x400) == 0) {
      ScreenToClient(param_1,(LPPOINT)&local_68);
    }
    FUN_14007743c(param_5,uVar6);
    fVar18 = (float)(int)local_68.dwFlags;
    fVar17 = (float)(int)local_68.cbSize;
LAB_1400d733a:
    FUN_140076eaa(param_5,fVar17,fVar18);
    break;
  case 0x201:
  case 0x203:
  case 0x204:
  case 0x206:
  case 0x207:
  case 0x209:
  case 0x20b:
  case 0x20d:
    uVar6 = FUN_1400d75a0();
    uVar4 = 2;
    if ((param_2 - 0x207 & 0xfffffffd) != 0) {
      uVar4 = (uint)((param_2 & 0xfffffffd) == 0x204);
    }
    if ((param_2 == 0x20d) || (param_2 == 0x20b)) {
      uVar4 = ((uVar11 & 0xffff0000) != 0x10000) + 3;
    }
    pHVar9 = GetCapture();
    uVar11 = *(uint *)(lVar8 + 0x14);
    if ((uVar11 != 0) && (pHVar9 != param_1)) {
      *(undefined4 *)(lVar8 + 0x14) = 0;
      uVar11 = 0;
    }
    if (pHVar9 == (HWND)0x0 && uVar11 == 0) {
      SetCapture(param_1);
      uVar11 = *(uint *)(lVar8 + 0x14);
    }
    *(uint *)(lVar8 + 0x14) = uVar11 | 1 << uVar4;
    FUN_14007743c(param_5,uVar6);
    FUN_140077084(param_5,uVar4,1);
    break;
  case 0x202:
  case 0x205:
  case 0x208:
  case 0x20c:
    uVar6 = FUN_1400d75a0();
    sVar12 = 2;
    if (param_2 != 0x208) {
      sVar12 = param_2 == 0x205;
    }
    sVar2 = ((uVar11 & 0xffff0000) != 0x10000) + 3;
    if (param_2 != 0x20c) {
      sVar2 = sVar12;
    }
    puVar1 = (uint *)(lVar8 + 0x14);
    *puVar1 = *puVar1 & (-2 << sVar2 | 0xfffffffeU >> 0x20 - sVar2);
    if ((*puVar1 == 0) && (pHVar9 = GetCapture(), pHVar9 == param_1)) {
      ReleaseCapture();
    }
    FUN_14007743c(param_5,uVar6);
    FUN_140077084(param_5,sVar2,0);
    LVar15 = 0;
    goto switchD_1400d6dea_caseD_20f;
  case 0x20a:
    fVar18 = (float)((int)uVar11 >> 0x10) / DAT_140e82338;
    fVar17 = 0.0;
    goto LAB_1400d7272;
  case 0x20e:
    fVar17 = (float)((int)uVar11 >> 0x10) / _DAT_140e82334;
    fVar18 = 0.0;
LAB_1400d7272:
    FUN_1400772fe(param_5,fVar17,fVar18);
    break;
  default:
    goto switchD_1400d6dea_caseD_20f;
  case 0x219:
    if (uVar11 == 7) {
      *(undefined1 *)(lVar8 + 0x41) = 1;
    }
  }
LAB_1400d733f:
  LVar15 = 0;
switchD_1400d6dea_caseD_20f:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStackY_b8);
  }
  return LVar15;
}


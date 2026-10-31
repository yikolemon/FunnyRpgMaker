/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10199805 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT FUN_10199805(HWND param_1,uint param_2,uint param_3,int *param_4,uint *param_5)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  HWND pHVar5;
  LRESULT LVar6;
  BOOL BVar7;
  uint uVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  LRESULT LVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 local_3c;
  int local_38;
  tagTRACKMOUSEEVENT local_34;
  tagTRACKMOUSEEVENT local_24;
  uint local_14;
  
  uVar8 = param_3;
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  iVar4 = FUN_10199fcf();
  piVar2 = param_4;
  LVar13 = 0;
  if (iVar4 == 0) goto LAB_10199a7c;
  sVar10 = (short)param_4;
  if ((int)param_2 < 0x200) {
    if ((int)param_2 < 0x7e) {
      if ((int)param_2 < 0x1a) {
        if (1 < param_2 - 7) {
          LVar13 = 0;
          if (((param_2 != 2) || (*(HWND *)(iVar4 + 4) != param_1)) || (*(int *)(iVar4 + 8) == 0))
          goto LAB_10199a7c;
          local_24.cbSize = 0x10;
          local_24.dwFlags = 0x80000000;
          local_24.hwndTrack = param_1;
          local_24.dwHoverTime = 0;
          TrackMouseEvent(&local_24);
          *(undefined4 *)(iVar4 + 4) = 0;
          *(undefined4 *)(iVar4 + 8) = 0;
          goto LAB_10199c62;
        }
        FUN_100f9c80(param_2 == 7);
        *(undefined4 *)(iVar4 + 0x40) = 0;
      }
      else if (param_2 == 0x1a) {
        if (uVar8 == 0x2f) goto LAB_10199c98;
      }
      else {
        if (param_2 != 0x20) {
          LVar13 = 0;
          if (param_2 == 0x51) {
            FUN_1019a0b1();
          }
          goto LAB_10199a7c;
        }
        if ((sVar10 == 1) && (cVar3 = FUN_10198ca6(), cVar3 != '\0')) {
          LVar13 = 1;
          goto LAB_10199a7c;
        }
      }
    }
    else {
      uVar12 = param_2 - 0x100;
      if (uVar12 < 0x10) {
        if ((0x33U >> (uVar12 & 0x1f) & 1) == 0) {
          if (uVar12 != 2) {
            if (uVar12 == 0xf) {
              LVar6 = DefWindowProcW(param_1,0x10f,uVar8,(LPARAM)param_4);
              LVar13 = 1;
              if (((uint)piVar2 >> 0xb & 1) == 0) {
                LVar13 = LVar6;
              }
              goto LAB_10199a7c;
            }
            goto LAB_10199b25;
          }
          BVar7 = IsWindowUnicode(param_1);
          if (BVar7 != 0) {
            LVar13 = 0;
            if (0xfffe < uVar8 - 1) goto LAB_10199a7c;
            goto LAB_10199e97;
          }
          local_24.cbSize = local_24.cbSize & 0xffff0000;
          MultiByteToWideChar(*(UINT *)(iVar4 + 0x24),1,(LPCSTR)&param_3,2,(LPWSTR)&local_24,1);
          FUN_100f8f50(local_24.cbSize & 0xffff);
        }
        else if (uVar8 < 0x100) {
          param_2 = param_2 & 0xfffffffb;
          local_3c = CONCAT31(local_3c._1_3_,param_2 == 0x100);
          FUN_10199ff7();
          iVar4 = FUN_1019930b(uVar8,piVar2);
          uVar12 = (uint)piVar2 >> 0x10 & 0xff;
          if (iVar4 == 0x262 && (char)local_3c == '\0') {
            FUN_1019a076(1,uVar8,uVar12);
LAB_10199dc7:
            FUN_1019a076(param_2 == 0x100,uVar8,uVar12);
          }
          else if (iVar4 != 0) goto LAB_10199dc7;
          if (uVar8 == 0x12) {
            cVar3 = FUN_1019a0a3();
            if ((bool)cVar3 == (param_2 == 0x100)) {
              FUN_1019a076(param_2 == 0x100,0xa4,uVar12);
            }
            cVar3 = FUN_1019a0a3();
            if ((bool)cVar3 == (param_2 == 0x100)) {
              uVar15 = 0xa5;
LAB_10199f85:
              FUN_1019a076(param_2 == 0x100,uVar15,uVar12);
            }
          }
          else if (uVar8 == 0x11) {
            cVar3 = FUN_1019a0a3();
            if ((bool)cVar3 == (param_2 == 0x100)) {
              FUN_1019a076(param_2 == 0x100,0xa2,uVar12);
            }
            cVar3 = FUN_1019a0a3();
            if ((bool)cVar3 == (param_2 == 0x100)) {
              uVar15 = 0xa3;
              goto LAB_10199f85;
            }
          }
          else if (uVar8 == 0x10) {
            cVar3 = FUN_1019a0a3();
            if ((bool)cVar3 == (param_2 == 0x100)) {
              FUN_1019a076(param_2 == 0x100,0xa0,uVar12);
            }
            cVar3 = FUN_1019a0a3();
            if ((bool)cVar3 == (param_2 == 0x100)) {
              uVar15 = 0xa1;
              goto LAB_10199f85;
            }
          }
        }
      }
      else {
LAB_10199b25:
        if (param_2 == 0x7e) {
LAB_10199c98:
          *(undefined1 *)(iVar4 + 0x28) = 1;
        }
        else if (param_2 == 0xa0) goto switchD_10199863_caseD_200;
      }
    }
    goto switchD_10199863_caseD_20f;
  }
  if (0x285 < (int)param_2) {
    if (param_2 - 0x2a2 < 2) {
      if (*(int *)(iVar4 + 8) == (param_2 != 0x2a3) + 1) {
        if (*(HWND *)(iVar4 + 4) == param_1) {
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        *(undefined4 *)(iVar4 + 8) = 0;
LAB_10199c62:
        fVar16 = -3.4028235e+38;
        fVar14 = -3.4028235e+38;
        goto LAB_10199da4;
      }
    }
    else {
      if (param_2 == 0x286) {
        BVar7 = IsWindowUnicode(param_1);
        LVar13 = 0;
        if (BVar7 != 0) goto LAB_10199a7c;
        BVar7 = IsDBCSLeadByte((BYTE)(uVar8 >> 8));
        if (BVar7 != 0) {
          param_3 = (uint)(ushort)((ushort)uVar8 << 8 | (ushort)uVar8 >> 8);
        }
        local_24.cbSize = local_24.cbSize & 0xffff0000;
        LVar13 = 1;
        MultiByteToWideChar(*(UINT *)(iVar4 + 0x24),1,(LPCSTR)&param_3,2,(LPWSTR)&local_24,1);
        uVar8 = local_24.cbSize & 0xffff;
LAB_10199e97:
        FUN_100f904e(uVar8);
        goto LAB_10199a7c;
      }
      if ((param_2 == 0x2e0) && (*(char *)((int)param_5 + 0x47) == '\x01')) {
        SetWindowPos(param_1,(HWND)0x0,*param_4,param_4[1],param_4[2] - *param_4,
                     param_4[3] - param_4[1],0x14);
      }
    }
    goto switchD_10199863_caseD_20f;
  }
  if (0x19 < param_2 - 0x200) goto switchD_10199863_caseD_20f;
  switch(param_2) {
  case 0x200:
switchD_10199863_caseD_200:
    uVar15 = FUN_10199fd6();
    iVar9 = (param_2 != 0x200) + 1;
    *(HWND *)(iVar4 + 4) = param_1;
    if (*(int *)(iVar4 + 8) != iVar9) {
      local_24.cbSize = 0x10;
      local_24.dwFlags = 0x80000000;
      local_24.hwndTrack = param_1;
      local_24.dwHoverTime = 0;
      local_34.cbSize = 0x10;
      local_34.dwFlags = (uint)(param_2 != 0x200) << 4 | 2;
      local_34.hwndTrack = param_1;
      local_34.dwHoverTime = 0;
      local_3c = uVar15;
      local_38 = iVar9;
      if (*(int *)(iVar4 + 8) != 0) {
        TrackMouseEvent(&local_24);
      }
      TrackMouseEvent(&local_34);
      *(int *)(iVar4 + 8) = local_38;
      uVar15 = local_3c;
    }
    local_24.cbSize = (DWORD)sVar10;
    local_24.dwFlags = (int)piVar2 >> 0x10;
    if (((byte)(*param_5 >> 10) & 1 & param_2 == 0x200) == 1) {
      ClientToScreen(param_1,(LPPOINT)&local_24);
    }
    else if (param_2 == 0xa0 && (*param_5 & 0x400) == 0) {
      ScreenToClient(param_1,(LPPOINT)&local_24);
    }
    FUN_100f9b5e(uVar15);
    fVar16 = (float)(int)local_24.dwFlags;
    fVar14 = (float)(int)local_24.cbSize;
LAB_10199da4:
    FUN_100f960e(fVar14,fVar16);
    LVar13 = 0;
    goto LAB_10199a7c;
  case 0x201:
  case 0x203:
  case 0x204:
  case 0x206:
  case 0x207:
  case 0x209:
  case 0x20b:
  case 0x20d:
    local_3c = FUN_10199fd6();
    uVar11 = 2;
    if ((param_2 - 0x207 & 0xfffffffd) != 0) {
      uVar11 = (uint)((param_2 & 0xfffffffd) == 0x204);
    }
    if ((param_2 == 0x20d) || (param_2 == 0x20b)) {
      uVar11 = ((uVar8 & 0xffff0000) != 0x10000) + 3;
    }
    pHVar5 = GetCapture();
    uVar8 = *(uint *)(iVar4 + 0xc);
    if ((uVar8 != 0) && (pHVar5 != param_1)) {
      *(undefined4 *)(iVar4 + 0xc) = 0;
      uVar8 = 0;
    }
    if (pHVar5 == (HWND)0x0 && uVar8 == 0) {
      SetCapture(param_1);
      uVar8 = *(uint *)(iVar4 + 0xc);
    }
    *(uint *)(iVar4 + 0xc) = uVar8 | 1 << uVar11;
    FUN_100f9b5e(local_3c);
    uVar15 = 1;
    goto LAB_10199a74;
  case 0x202:
  case 0x205:
  case 0x208:
  case 0x20c:
    uVar15 = FUN_10199fd6();
    uVar12 = 2;
    if (param_2 != 0x208) {
      uVar12 = (uint)(param_2 == 0x205);
    }
    uVar11 = ((uVar8 & 0xffff0000) != 0x10000) + 3;
    if (param_2 != 0x20c) {
      uVar11 = uVar12;
    }
    puVar1 = (uint *)(iVar4 + 0xc);
    *puVar1 = *puVar1 & (-2 << (sbyte)uVar11 | 0xfffffffeU >> 0x20 - (sbyte)uVar11);
    if ((*puVar1 == 0) && (pHVar5 = GetCapture(), pHVar5 == param_1)) {
      ReleaseCapture();
    }
    FUN_100f9b5e(uVar15);
    uVar15 = 0;
LAB_10199a74:
    FUN_100f97e2(uVar11,uVar15);
    break;
  case 0x20a:
    fVar16 = (float)((int)uVar8 >> 0x10) / DAT_10301bf0;
    fVar14 = 0.0;
    goto LAB_10199ce1;
  case 0x20e:
    fVar14 = (float)((int)uVar8 >> 0x10) / _DAT_10301bec;
    fVar16 = 0.0;
LAB_10199ce1:
    FUN_100f9a2a(fVar14,fVar16);
    break;
  case 0x219:
    if (uVar8 == 7) {
      *(undefined1 *)(iVar4 + 0x31) = 1;
    }
  }
switchD_10199863_caseD_20f:
  LVar13 = 0;
LAB_10199a7c:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return LVar13;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b6786 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1400b6786(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             char param_10,undefined8 param_11)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  void *_Buf1;
  LPCWSTR pWVar13;
  HANDLE hFile;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *******pppppppuVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  WCHAR local_388 [264];
  undefined8 *******local_178 [2];
  longlong local_168;
  ulonglong local_160;
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  FILETIME local_e8;
  undefined1 local_df [7];
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  longlong local_c0;
  FILETIME local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  FILETIME local_98;
  longlong local_90;
  longlong local_88;
  undefined8 *******local_80;
  undefined1 *local_78;
  longlong local_70;
  LPCWSTR local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_c0 = param_2;
  local_90 = param_4;
  local_88 = param_3;
  local_70 = param_1;
  GetCurrentDirectoryW(0x104,local_388);
  lVar9 = *param_5;
  if ((lVar9 != -1) && (param_5[1] != -1)) {
    local_68 = (LPCWSTR)FUN_1400afcf6(*(longlong *)(local_88 + lVar9) + local_70);
    CreateDirectoryW(local_68,(LPSECURITY_ATTRIBUTES)0x0);
    thunk_FUN_1400ddcd0(local_68);
    local_68 = (LPCWSTR)FUN_1400afcf6(*(longlong *)(local_88 + lVar9) + local_70);
    SetCurrentDirectoryW(local_68);
    thunk_FUN_1400ddcd0(local_68);
  }
  plVar19 = (longlong *)(param_5[3] + local_88);
  puVar20 = (undefined1 *)0x0;
  local_78 = local_df;
  if (param_10 != '\0') {
    local_78 = puVar20;
  }
  do {
    if ((undefined1 *)param_5[2] <= puVar20) {
      SetCurrentDirectoryW(local_388);
      return 0;
    }
    if ((*(byte *)(plVar19 + 1) & 0x10) == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   4) < DAT_1401ccd48) && (FUN_1400dd790(&DAT_1401ccd48), DAT_1401ccd48 == -1)) {
        DAT_1401ccd40 = _malloc_base(0x1000000);
        _Init_thread_footer(&DAT_1401ccd48);
      }
      if (DAT_1401ccd40 == 0) {
        return 0xffffffff;
      }
      lVar9 = FUN_1400afcf6(*plVar19 + local_70);
      cVar7 = FUN_1400b6615(lVar9);
      if (cVar7 == '\0') {
        local_68 = (LPCWSTR)lVar9;
        uVar10 = FUN_140114300(lVar9,&DAT_140173b02);
        if (param_10 == '\0') {
          uVar11 = FUN_1400b4554(*(undefined4 *)(local_90 + 0x28),param_8,param_9,param_5,plVar19,
                                 local_88,local_c0,local_70,param_11);
          FUN_1400b464a(param_11,uVar11,local_df);
        }
        thunk_FUN_1400ddcd0(local_68);
        if (plVar19[6] != 0) {
          lVar9 = FUN_140114548(param_6);
          lVar14 = plVar19[5] + *(longlong *)(local_90 + 8);
          if (lVar9 != (int)lVar14) {
            FUN_140113fe4(param_6,lVar14,0);
          }
          lVar9 = plVar19[7];
          lVar14 = plVar19[8];
          if (lVar9 == -1) {
            uVar15 = plVar19[6];
            if (lVar14 == -1) {
              if (uVar15 != 0) {
                uVar18 = 0;
                do {
                  uVar17 = uVar15 - uVar18;
                  if (0xffffff < uVar17) {
                    uVar17 = 0x1000000;
                  }
                  FUN_1400b4c30(DAT_1401ccd40,uVar17,param_6,local_78,uVar15 + uVar18);
                  FUN_1400b21f0(DAT_1401ccd40,uVar17,uVar10);
                  uVar18 = uVar17 + uVar18;
                  uVar15 = plVar19[6];
                } while (uVar18 < uVar15);
              }
              goto LAB_1400b6c87;
            }
            lVar12 = _malloc_base(uVar15 + lVar14);
            FUN_1400b4c30(lVar12,lVar14,param_6,local_78,uVar15);
            FUN_1400d27a2(lVar12,plVar19[8] + lVar12);
            bVar1 = *(byte *)(local_90 + 0x30);
            uVar15 = plVar19[6];
            if ((bVar1 != 0xff) &&
               (lVar9 = uVar15 + (ulonglong)bVar1 * -0x800,
               (ulonglong)bVar1 * 0x800 <= uVar15 && lVar9 != 0)) {
              local_68 = (LPCWSTR)plVar19[8];
              lVar14 = lVar12 + (longlong)local_68 + (ulonglong)bVar1 * 0x400;
              FUN_140135ff0(uVar15 + lVar12 + (longlong)local_68 + (ulonglong)bVar1 * -0x400,lVar14)
              ;
              FUN_1400b4c30(lVar14,lVar9,param_6,local_78,(longlong)local_68 + uVar15);
              uVar15 = plVar19[6];
            }
            FUN_1400b21f0(plVar19[8] + lVar12,uVar15,uVar10);
          }
          else if (lVar14 == -1) {
            lVar14 = plVar19[6];
            lVar12 = _malloc_base(lVar14 + lVar9);
            FUN_1400b4c30(lVar12,lVar9,param_6,local_78,lVar14);
            lVar9 = plVar19[7];
            FUN_1400b1612(lVar12,lVar9 + lVar12);
            FUN_1400b21f0(lVar9 + lVar12,plVar19[6],uVar10);
          }
          else {
            lVar2 = plVar19[6];
            lVar12 = _malloc_base(lVar9 + lVar14 + lVar2);
            FUN_1400b4c30(lVar12,lVar14,param_6,local_78,lVar2);
            FUN_1400d27a2(lVar12,plVar19[8] + lVar12);
            bVar1 = *(byte *)(local_90 + 0x30);
            uVar15 = plVar19[7];
            if ((bVar1 != 0xff) &&
               (lVar9 = uVar15 + (ulonglong)bVar1 * -0x800,
               (ulonglong)bVar1 * 0x800 <= uVar15 && lVar9 != 0)) {
              local_68 = (LPCWSTR)plVar19[8];
              lVar14 = lVar12 + (longlong)local_68 + (ulonglong)bVar1 * 0x400;
              FUN_140135ff0(uVar15 + lVar12 + (longlong)local_68 + (ulonglong)bVar1 * -0x400,lVar14)
              ;
              FUN_1400b4c30(lVar14,lVar9,param_6,local_78,(longlong)local_68 + plVar19[6]);
              uVar15 = plVar19[7];
            }
            lVar9 = uVar15 + plVar19[8] + lVar12;
            FUN_1400b1612(plVar19[8] + lVar12,lVar9);
            FUN_1400b21f0(lVar9,plVar19[6],uVar10);
          }
          thunk_FUN_1401212e0(lVar12);
        }
LAB_1400b6c87:
        FUN_140115998(uVar10);
        local_80 = local_178;
        FUN_14000f628(local_80,L"game.dat");
        local_80 = (undefined8 *******)local_158;
        FUN_14000f628(local_80,L"cdatabase.dat");
        local_80 = (undefined8 *******)local_138;
        FUN_14000f628(local_80,L"database.dat");
        local_80 = (undefined8 *******)local_118;
        FUN_14000f628(local_80,L"commonevent.dat");
        local_80 = (undefined8 *******)local_118;
        local_d8 = (undefined8 *)0x0;
        puStack_d0 = (undefined8 *)0x0;
        local_c8 = 0;
        local_b8 = (FILETIME)&local_f8;
        local_98 = (FILETIME)local_178;
        FUN_1400411ce(&local_d8,4,&local_98,&local_b8);
        lVar9 = 0x40;
        do {
          local_68 = (LPCWSTR)lVar9;
          FUN_140005242(local_158 + lVar9);
          lVar9 = (longlong)local_68 + -0x20;
        } while (lVar9 != -0x40);
        uVar10 = FUN_1400afcf6(*plVar19 + local_70);
        FUN_14000f628(local_178,uVar10);
        local_68 = (LPCWSTR)uVar10;
        pppppppuVar16 = local_178;
        if (7 < local_160) {
          pppppppuVar16 = local_178[0];
        }
        puVar4 = local_d8;
        puVar5 = puStack_d0;
        if (local_168 != 0) {
          lVar9 = local_168 * 2;
          lVar14 = 0;
          do {
            iVar8 = tolower((uint)*(ushort *)((longlong)pppppppuVar16 + lVar14));
            *(short *)((longlong)pppppppuVar16 + lVar14) = (short)iVar8;
            lVar14 = lVar14 + 2;
            puVar4 = local_d8;
            puVar5 = puStack_d0;
          } while (lVar9 != lVar14);
        }
        for (; puVar6 = puStack_d0, bVar3 = puVar4 != puStack_d0, puStack_d0 = puVar5, bVar3;
            puVar4 = puVar4 + 4) {
          local_f8 = puVar4;
          if (7 < (ulonglong)puVar4[3]) {
            local_f8 = (undefined8 *)*puVar4;
          }
          local_f0 = puVar4[2];
          cVar7 = FUN_1400b7544(local_178,&local_f8);
          if (cVar7 != '\0') {
            uVar10 = FUN_140114300(local_68,&DAT_140173b08);
            FUN_140113fe4(uVar10,0,2);
            lVar9 = FUN_140114548(uVar10);
            if (0x3d < lVar9) {
              FUN_140113fe4(uVar10,0,0);
              _Buf1 = (void *)_malloc_base(0x3e);
              FUN_1400b2242(_Buf1,0x3e,uVar10);
              if ((_Buf1 != (void *)0x0) &&
                 (iVar8 = memcmp(_Buf1,
                                 "Extracting data from encrypted files violates the guidelines.",
                                 0x3e), iVar8 == 0)) {
                FUN_140113fe4(uVar10,0x3e,0);
                lVar9 = lVar9 + -0x3e;
                local_b8.dwLowDateTime = 0;
                local_b8.dwHighDateTime = 0;
                uStack_b0 = 0;
                local_a8 = 0;
                FUN_14008c2ca(&local_b8,lVar9);
                FUN_1400b2242(local_b8,lVar9,uVar10);
                FUN_140115998(uVar10);
                uVar10 = FUN_140114300(local_68,&DAT_140173b02);
                FUN_1400b21f0(local_b8,lVar9,uVar10);
                FUN_140016e5c(&local_b8);
              }
              thunk_FUN_1401212e0(_Buf1);
            }
            FUN_140115998(uVar10);
            break;
          }
          puVar5 = puStack_d0;
          puStack_d0 = puVar6;
        }
        thunk_FUN_1400ddcd0(local_68);
        pWVar13 = (LPCWSTR)FUN_1400afcf6(*plVar19 + local_70);
        hFile = CreateFileW(pWVar13,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
        local_68 = pWVar13;
        thunk_FUN_1400ddcd0(pWVar13);
        local_b8 = *(FILETIME *)(plVar19 + 2);
        local_98 = *(FILETIME *)(plVar19 + 3);
        local_e8 = *(FILETIME *)(plVar19 + 4);
        SetFileTime(hFile,&local_b8,&local_98,&local_e8);
        CloseHandle(hFile);
        pWVar13 = (LPCWSTR)FUN_1400afcf6(*plVar19 + local_70);
        SetFileAttributesW(pWVar13,*(uint *)(plVar19 + 1) & 0xfffffff9);
        local_68 = pWVar13;
        thunk_FUN_1400ddcd0(pWVar13);
        FUN_140005242(local_178);
        FUN_140041304(&local_d8);
      }
    }
    else {
      FUN_1400b6786(local_70,local_c0,local_88,local_90,plVar19[5] + local_c0,param_6,param_7,
                    param_8,param_9,param_10,param_11);
    }
    puVar20 = (undefined1 *)(ulonglong)((int)puVar20 + 1);
    plVar19 = plVar19 + 9;
  } while( true );
}


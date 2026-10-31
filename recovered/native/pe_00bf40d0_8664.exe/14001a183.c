/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001a183 */

bool FUN_14001a183(HANDLE param_1,LPCVOID param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD dwErrCode;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  LPVOID pvVar9;
  undefined1 (*lpBuffer) [32];
  undefined8 uVar10;
  longlong lVar11;
  char *pcVar12;
  LPCVOID pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e0 [6];
  ushort local_1da;
  ushort local_1cc;
  short local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b4;
  uint local_18c;
  undefined4 local_188;
  uint local_150;
  uint local_14c;
  undefined8 local_100;
  uint local_f8;
  uint local_f4;
  undefined1 *local_d8;
  LPVOID local_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  uint local_6c;
  undefined1 (*local_68) [32];
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_78 = CONCAT44(local_78._4_4_,param_4);
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_98 = param_3;
  BVar3 = ReadProcessMemory(param_1,param_2,&local_228,0x40,&local_90);
  if (BVar3 == 0) {
    return false;
  }
  if (local_90 < 0x40) {
    return false;
  }
  FUN_1400b3c00((undefined1 (*) [32])local_1e0,0,0x108);
  BVar3 = ReadProcessMemory(param_1,(LPCVOID)((longlong)uStack_1f0._4_4_ + (longlong)param_2),
                            (undefined1 (*) [32])local_1e0,0x108,&local_90);
  if (BVar3 == 0) {
    return false;
  }
  if (local_90 < 0x108) {
    return false;
  }
  if (local_1c8 != 0x20b) {
    SetLastError(9);
    return false;
  }
  local_100 = 0;
  if (local_1da != 0) {
    pvVar13 = (LPCVOID)((ulonglong)(uStack_1f0._4_4_ + (uint)local_1cc + 0x18) + (longlong)param_2);
    uVar15 = 0;
    do {
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = 0;
      BVar3 = ReadProcessMemory(param_1,pvVar13,&local_c8,0x28,&local_90);
      if (BVar3 == 0) {
        return false;
      }
      if (local_90 < 0x28) {
        return false;
      }
      if (((local_f8 == 0) && (uStack_bc <= local_150)) && (local_150 < (uint)local_b8 + uStack_bc))
      {
        local_f8 = uStack_bc;
        local_f4 = (uint)local_b8;
      }
      uVar15 = uVar15 + 1;
      pvVar13 = (LPCVOID)((longlong)pvVar13 + 0x28);
    } while (uVar15 < local_1da);
  }
  uVar15 = (ulonglong)local_150;
  if ((uVar15 != 0) && (local_14c == 0)) {
    BVar3 = ReadProcessMemory(param_1,(LPCVOID)((longlong)param_2 + uVar15),&local_c8,0x14,
                              (SIZE_T *)0x0);
    if (BVar3 == 0) {
      return false;
    }
    pvVar13 = (LPCVOID)(uVar15 + (longlong)param_2);
    while( true ) {
      pvVar13 = (LPCVOID)((longlong)pvVar13 + 0x14);
      local_14c = local_14c + 0x14;
      if (uStack_bc == 0) break;
      BVar3 = ReadProcessMemory(param_1,pvVar13,&local_c8,0x14,(SIZE_T *)0x0);
      if (BVar3 == 0) {
        return false;
      }
    }
    dwErrCode = GetLastError();
    OutputDebugStringW(
                      L"[This PE file has an import table, but the import table size is marked as 0. This is an error.If it is not repaired, the launched program will not work properly, Detours has automatically repaired its import table size for you! ! !]\r\n"
                      );
    DVar4 = GetLastError();
    if (DVar4 != dwErrCode) {
      SetLastError(dwErrCode);
    }
  }
  lVar11 = (local_78 & 0xffffffff) * 0x14;
  uVar5 = (uint)lVar11;
  if ((int)((ulonglong)lVar11 >> 0x20) != 0) {
    return false;
  }
  uVar2 = (local_14c / 0x14) * 0x14;
  uVar6 = uVar5 + uVar2;
  if (!CARRY4(uVar5,uVar2)) {
    uVar5 = uVar6 + 7 & 0xfffffff8;
    local_a0 = (ulonglong)uVar5;
    if (uVar6 <= uVar5) {
      if (0x7ffffff < (uint)local_78) {
        return false;
      }
      local_6c = (uint)local_78 * 0x20 + uVar5;
      if (CARRY4((uint)local_78 * 0x20,uVar5)) {
        return false;
      }
      local_88 = (ulonglong)local_6c;
      if ((uint)local_78 != 0) {
        local_68 = (undefined1 (*) [32])(local_78 & 0xffffffff);
        uVar15 = 0;
        uVar5 = local_6c;
        do {
          sVar8 = strlen(*(char **)(local_98 + uVar15 * 8));
          local_6c = uVar5 + ((uint)sVar8 & 0xfffffffc) + 4;
          if (local_6c < uVar5) {
            return false;
          }
          uVar15 = uVar15 + 1;
          uVar5 = local_6c;
        } while (local_68 != (undefined1 (*) [32])uVar15);
      }
      local_80 = (ulonglong)local_6c;
      local_68 = (undefined1 (*) [32])thunk_FUN_1400863a0(local_80);
      bVar17 = false;
      FUN_1400b3c00(local_68,0,local_80);
      pvVar9 = FUN_14001b3b3(param_1,(ulonglong)param_2,
                             (LPCVOID)((longlong)param_2 +
                                      (ulonglong)local_1bc +
                                      (ulonglong)local_1c0 + (ulonglong)local_1c4 +
                                      (ulonglong)local_1b4),local_6c);
      if (pvVar9 != (LPVOID)0x0) {
        local_c8 = local_c8 & 0xffffffff00000000;
        if ((ulonglong)local_150 != 0) {
          BVar3 = ReadProcessMemory(param_1,(LPCVOID)((ulonglong)local_150 + (longlong)param_2),
                                    *local_68 + (local_78 & 0xffffffff) * 0x14,(ulonglong)uVar2,
                                    &local_90);
          bVar17 = false;
          if ((BVar3 == 0) || (local_90 < uVar2)) goto code_r0x00014001a802;
        }
        local_80 = (ulonglong)(uint)((int)pvVar9 - (int)param_2);
        lpBuffer = local_68;
        uVar15 = local_88;
        local_d0 = pvVar9;
        if ((uint)local_78 != 0) {
          local_78 = local_78 & 0xffffffff;
          local_d8 = *local_68 + 1;
          bVar17 = false;
          uVar14 = 0;
          lVar11 = local_98;
          do {
            uVar5 = local_6c - (int)uVar15;
            uVar16 = (ulonglong)uVar5;
            local_88 = uVar15;
            uVar10 = FUN_14001b536(*lpBuffer + (uVar15 & 0xffffffff),uVar16,
                                   *(longlong *)(lVar11 + uVar14 * 8));
            lpBuffer = local_68;
            lVar11 = local_98;
            if ((int)uVar10 < 0) goto code_r0x00014001a802;
            if (1 < uVar5) {
              pcVar12 = local_d8 + (uVar15 & 0xffffffff);
              do {
                if ((pcVar12[-1] == '?') && (*pcVar12 == '?')) {
                  pcVar12[-1] = '6';
                  pcVar12[0] = '4';
                  break;
                }
                uVar16 = uVar16 - 1;
                pcVar12 = pcVar12 + 1;
              } while (1 < uVar16);
            }
            iVar7 = (int)uVar14 * 0x20;
            uVar5 = iVar7 + (int)local_a0;
            iVar1 = (int)local_80;
            *(uint *)(*local_68 + uVar14 * 0x14) = uVar5 + iVar1;
            *(undefined8 *)(*local_68 + uVar5) = 0x8000000000000001;
            *(undefined8 *)(*local_68 + (ulonglong)uVar5 + 8) = 0;
            uVar15 = (ulonglong)(uint)(iVar7 + 0x10 + (int)local_a0);
            *(uint *)(*local_68 + uVar14 * 0x14 + 0x10) = iVar1 + 0x10 + uVar5;
            *(undefined8 *)(*local_68 + uVar15) = 0x8000000000000001;
            *(undefined8 *)(*local_68 + uVar15 + 8) = 0;
            *(undefined8 *)(*local_68 + uVar14 * 0x14 + 4) = 0;
            iVar7 = (int)local_88;
            *(int *)(*local_68 + uVar14 * 0x14 + 0xc) = iVar7 + iVar1;
            sVar8 = strlen(*(char **)(local_98 + uVar14 * 8));
            uVar15 = (ulonglong)(iVar7 + ((uint)sVar8 & 0xfffffffc) + 4);
            uVar14 = uVar14 + 1;
          } while (uVar14 != local_78);
        }
        BVar3 = WriteProcessMemory(param_1,local_d0,lpBuffer,uVar15 & 0xffffffff,(SIZE_T *)0x0);
        bVar17 = false;
        if (BVar3 != 0) {
          local_150 = (uint)local_80;
          if (local_f8 == 0) {
            local_f4 = local_6c;
            local_f8 = local_150;
          }
          local_14c = local_6c;
          BVar3 = FUN_14001b6cc(param_1,param_2,(ulonglong)local_18c,0x40,(PDWORD)&local_c8);
          if (BVar3 != 0) {
            local_188 = 0;
            BVar3 = WriteProcessMemory(param_1,param_2,&local_228,0x40,(SIZE_T *)0x0);
            if (BVar3 != 0) {
              BVar3 = WriteProcessMemory(param_1,(LPVOID)((longlong)uStack_1f0._4_4_ +
                                                         (longlong)param_2),local_1e0,0x108,
                                         (SIZE_T *)0x0);
              if (BVar3 != 0) {
                BVar3 = VirtualProtectEx(param_1,param_2,(ulonglong)local_18c,(DWORD)local_c8,
                                         (PDWORD)&local_c8);
                bVar17 = BVar3 != 0;
              }
            }
          }
        }
      }
code_r0x00014001a802:
      FUN_1400863f0();
      return bVar17;
    }
  }
  return false;
}


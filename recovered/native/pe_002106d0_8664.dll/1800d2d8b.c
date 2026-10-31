/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d2d8b */

bool FUN_1800d2d8b(HANDLE param_1,LPCVOID param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD dwErrCode;
  DWORD DVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  LPVOID pvVar9;
  longlong lVar10;
  char *pcVar11;
  LPCVOID pvVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
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
  longlong local_d8;
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
  LPCVOID local_68;
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
  BVar2 = ReadProcessMemory(param_1,param_2,&local_228,0x40,&local_90);
  if (BVar2 == 0) {
    return false;
  }
  if (local_90 < 0x40) {
    return false;
  }
  FUN_1802a89a0(local_1e0,0,0x108);
  BVar2 = ReadProcessMemory(param_1,(LPCVOID)((longlong)uStack_1f0._4_4_ + (longlong)param_2),
                            local_1e0,0x108,&local_90);
  if (BVar2 == 0) {
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
    pvVar12 = (LPCVOID)((ulonglong)(uStack_1f0._4_4_ + (uint)local_1cc + 0x18) + (longlong)param_2);
    uVar14 = 0;
    do {
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_a8 = 0;
      BVar2 = ReadProcessMemory(param_1,pvVar12,&local_c8,0x28,&local_90);
      if (BVar2 == 0) {
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
      uVar14 = uVar14 + 1;
      pvVar12 = (LPCVOID)((longlong)pvVar12 + 0x28);
    } while (uVar14 < local_1da);
  }
  uVar14 = (ulonglong)local_150;
  if ((uVar14 != 0) && (local_14c == 0)) {
    BVar2 = ReadProcessMemory(param_1,(LPCVOID)((longlong)param_2 + uVar14),&local_c8,0x14,
                              (SIZE_T *)0x0);
    if (BVar2 == 0) {
      return false;
    }
    pvVar12 = (LPCVOID)(uVar14 + (longlong)param_2);
    while( true ) {
      pvVar12 = (LPCVOID)((longlong)pvVar12 + 0x14);
      local_14c = local_14c + 0x14;
      if (uStack_bc == 0) break;
      BVar2 = ReadProcessMemory(param_1,pvVar12,&local_c8,0x14,(SIZE_T *)0x0);
      if (BVar2 == 0) {
        return false;
      }
    }
    dwErrCode = GetLastError();
    OutputDebugStringW(
                      L"[This PE file has an import table, but the import table size is marked as 0. This is an error.If it is not repaired, the launched program will not work properly, Detours has automatically repaired its import table size for you! ! !]\r\n"
                      );
    DVar3 = GetLastError();
    if (DVar3 != dwErrCode) {
      SetLastError(dwErrCode);
    }
  }
  lVar10 = (local_78 & 0xffffffff) * 0x14;
  uVar4 = (uint)lVar10;
  if ((int)((ulonglong)lVar10 >> 0x20) != 0) {
    return false;
  }
  uVar1 = (local_14c / 0x14) * 0x14;
  uVar5 = uVar4 + uVar1;
  if (!CARRY4(uVar4,uVar1)) {
    uVar4 = uVar5 + 7 & 0xfffffff8;
    local_a0 = (ulonglong)uVar4;
    if (uVar5 <= uVar4) {
      if (0x7ffffff < (uint)local_78) {
        return false;
      }
      local_6c = (uint)local_78 * 0x20 + uVar4;
      if (CARRY4((uint)local_78 * 0x20,uVar4)) {
        return false;
      }
      local_88 = (ulonglong)local_6c;
      if ((uint)local_78 != 0) {
        local_68 = (LPCVOID)(local_78 & 0xffffffff);
        uVar14 = 0;
        uVar4 = local_6c;
        do {
          sVar8 = strlen(*(char **)(local_98 + uVar14 * 8));
          local_6c = uVar4 + ((uint)sVar8 & 0xfffffffc) + 4;
          if (local_6c < uVar4) {
            return false;
          }
          uVar14 = uVar14 + 1;
          uVar4 = local_6c;
        } while (local_68 != (LPCVOID)uVar14);
      }
      local_80 = (ulonglong)local_6c;
      local_68 = (LPCVOID)thunk_FUN_180239630();
      bVar16 = false;
      FUN_1802a89a0(local_68,0,local_80);
      pvVar9 = (LPVOID)FUN_1800d411a(param_1,param_2,
                                     (longlong)param_2 +
                                     (ulonglong)local_1bc +
                                     (ulonglong)local_1c0 + (ulonglong)local_1c4 +
                                     (ulonglong)local_1b4,local_6c);
      if (pvVar9 != (LPVOID)0x0) {
        local_c8 = local_c8 & 0xffffffff00000000;
        if ((ulonglong)local_150 != 0) {
          BVar2 = ReadProcessMemory(param_1,(LPCVOID)((ulonglong)local_150 + (longlong)param_2),
                                    (LPVOID)((longlong)local_68 + (local_78 & 0xffffffff) * 0x14),
                                    (ulonglong)uVar1,&local_90);
          bVar16 = false;
          if ((BVar2 == 0) || (local_90 < uVar1)) goto code_r0x0001800d340a;
        }
        local_80 = (ulonglong)(uint)((int)pvVar9 - (int)param_2);
        pvVar12 = local_68;
        uVar14 = local_88;
        local_d0 = pvVar9;
        if ((uint)local_78 != 0) {
          local_78 = local_78 & 0xffffffff;
          local_d8 = (longlong)local_68 + 1;
          bVar16 = false;
          uVar13 = 0;
          lVar10 = local_98;
          do {
            uVar4 = local_6c - (int)uVar14;
            uVar15 = (ulonglong)uVar4;
            local_88 = uVar14;
            iVar6 = FUN_1800d429d((longlong)pvVar12 + (uVar14 & 0xffffffff),uVar15,
                                  *(undefined8 *)(lVar10 + uVar13 * 8));
            pvVar12 = local_68;
            lVar10 = local_98;
            if (iVar6 < 0) goto code_r0x0001800d340a;
            if (1 < uVar4) {
              pcVar11 = (char *)((uVar14 & 0xffffffff) + local_d8);
              do {
                if ((pcVar11[-1] == '?') && (*pcVar11 == '?')) {
                  pcVar11[-1] = '6';
                  pcVar11[0] = '4';
                  break;
                }
                uVar15 = uVar15 - 1;
                pcVar11 = pcVar11 + 1;
              } while (1 < uVar15);
            }
            iVar7 = (int)uVar13 * 0x20;
            uVar4 = iVar7 + (int)local_a0;
            iVar6 = (int)local_80;
            *(uint *)((longlong)local_68 + uVar13 * 0x14) = uVar4 + iVar6;
            *(undefined8 *)((longlong)local_68 + (ulonglong)uVar4) = 0x8000000000000001;
            *(undefined8 *)((longlong)local_68 + (ulonglong)uVar4 + 8) = 0;
            uVar14 = (ulonglong)(uint)(iVar7 + 0x10 + (int)local_a0);
            *(uint *)((longlong)local_68 + uVar13 * 0x14 + 0x10) = iVar6 + 0x10 + uVar4;
            *(undefined8 *)((longlong)local_68 + uVar14) = 0x8000000000000001;
            *(undefined8 *)((longlong)local_68 + uVar14 + 8) = 0;
            *(undefined8 *)((longlong)local_68 + uVar13 * 0x14 + 4) = 0;
            iVar7 = (int)local_88;
            *(int *)((longlong)local_68 + uVar13 * 0x14 + 0xc) = iVar7 + iVar6;
            sVar8 = strlen(*(char **)(local_98 + uVar13 * 8));
            uVar14 = (ulonglong)(iVar7 + ((uint)sVar8 & 0xfffffffc) + 4);
            uVar13 = uVar13 + 1;
          } while (uVar13 != local_78);
        }
        BVar2 = WriteProcessMemory(param_1,local_d0,pvVar12,uVar14 & 0xffffffff,(SIZE_T *)0x0);
        bVar16 = false;
        if (BVar2 != 0) {
          local_150 = (uint)local_80;
          if (local_f8 == 0) {
            local_f4 = local_6c;
            local_f8 = local_150;
          }
          local_14c = local_6c;
          iVar6 = FUN_1800fcb3c(param_1,param_2,local_18c,0x40,&local_c8);
          if (iVar6 != 0) {
            local_188 = 0;
            BVar2 = WriteProcessMemory(param_1,param_2,&local_228,0x40,(SIZE_T *)0x0);
            if (BVar2 != 0) {
              BVar2 = WriteProcessMemory(param_1,(LPVOID)((longlong)uStack_1f0._4_4_ +
                                                         (longlong)param_2),local_1e0,0x108,
                                         (SIZE_T *)0x0);
              if (BVar2 != 0) {
                BVar2 = VirtualProtectEx(param_1,param_2,(ulonglong)local_18c,(DWORD)local_c8,
                                         (PDWORD)&local_c8);
                bVar16 = BVar2 != 0;
              }
            }
          }
        }
      }
code_r0x0001800d340a:
      thunk_FUN_1802464a0(local_68);
      return bVar16;
    }
  }
  return false;
}


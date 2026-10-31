/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aafdc */

int FUN_1400aafdc(uint param_1,WCHAR *param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  WCHAR WVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  WCHAR WVar6;
  short sVar7;
  BOOL BVar8;
  DWORD DVar9;
  int iVar10;
  ulonglong uVar11;
  undefined7 extraout_var;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  WCHAR *pWVar16;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  DWORD local_50 [4];
  
  iVar13 = 0;
  uVar15 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (WCHAR *)0x0) {
LAB_1400ab00c:
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_1400a1080((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    return -1;
  }
  uVar11 = (ulonglong)(param_1 & 0x3f);
  lVar14 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_1401433a0)[lVar14] + 0x39 + uVar11 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_1400ab00c;
  if ((*(byte *)((&DAT_1401433a0)[lVar14] + 0x38 + uVar11 * 0x48) & 0x20) != 0) {
    thunk_FUN_1400a9300(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_60 = 0;
  bVar5 = FUN_1400b03b0(param_1);
  if (((int)CONCAT71(extraout_var,bVar5) == 0) ||
     (-1 < *(char *)((&DAT_1401433a0)[lVar14] + 0x38 + uVar11 * 0x48))) {
LAB_1400ab1c4:
    if (-1 < *(char *)((&DAT_1401433a0)[lVar14] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar8 = WriteFile(*(HANDLE *)
                         ((&DAT_1401433a0)[lVar14] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      iVar13 = local_68;
      uVar4 = local_70;
      if (BVar8 == 0) {
        DVar9 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar9);
        iVar13 = local_68;
        uVar4 = local_70;
      }
      goto LAB_1400ab279;
    }
    if (cVar1 == '\0') {
      puVar12 = (undefined8 *)FUN_1400ab8c0((DWORD *)&local_70,param_1,(char *)param_2,uVar15);
    }
    else if (cVar1 == '\x01') {
      puVar12 = (undefined8 *)FUN_1400abae4((DWORD *)&local_70,param_1,param_2,param_3);
    }
    else {
      iVar13 = 0;
      uVar4 = local_60;
      if (cVar1 != '\x02') goto LAB_1400ab279;
      puVar12 = (undefined8 *)FUN_1400ab9c8((DWORD *)&local_70,param_1,param_2,uVar15);
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_14008f0b0(param_4);
    }
    if ((*(longlong *)(param_4[3] + 0x138) == 0) &&
       (*(char *)((&DAT_1401433a0)[lVar14] + 0x39 + uVar11 * 0x48) == '\0')) goto LAB_1400ab1c4;
    local_50[0] = 0;
    BVar8 = GetConsoleMode(*(HANDLE *)((&DAT_1401433a0)[lVar14] + 0x28 + uVar11 * 0x48),local_50);
    if (BVar8 == 0) goto LAB_1400ab1c4;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar4 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar4 = local_70;
        if (param_2 < (WCHAR *)((longlong)param_2 + uVar15)) {
          local_70._4_4_ = 0;
          pWVar16 = param_2;
          iVar10 = local_70._4_4_;
          do {
            WVar2 = *pWVar16;
            WVar6 = FUN_1400b2194(WVar2);
            if (WVar6 != WVar2) {
LAB_1400ab18c:
              DVar9 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar9);
              uVar4 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar10 + 2,(DWORD)local_70);
            iVar3 = iVar10 + 2;
            if (WVar2 == L'\n') {
              sVar7 = FUN_1400b2194(0xd);
              if (sVar7 != 0xd) goto LAB_1400ab18c;
              local_70 = CONCAT44(iVar10 + 3,(DWORD)local_70);
              iVar13 = iVar13 + 1;
              iVar3 = iVar10 + 3;
            }
            iVar10 = iVar3;
            pWVar16 = pWVar16 + 1;
            uVar4 = local_70;
          } while (pWVar16 < (WCHAR *)((longlong)param_2 + uVar15));
        }
      }
      goto LAB_1400ab279;
    }
    puVar12 = (undefined8 *)FUN_1400ab42c((DWORD *)&local_70,param_1,(byte *)param_2,uVar15,param_4)
    ;
  }
  iVar13 = *(int *)(puVar12 + 1);
  uVar4 = *puVar12;
LAB_1400ab279:
  local_60 = uVar4;
  iVar10 = (int)((ulonglong)local_60 >> 0x20);
  if (iVar10 != 0) {
    return iVar10 - iVar13;
  }
  if ((uint)local_60 != 0) {
    if ((uint)local_60 == 5) {
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 7) = 1;
      *(undefined4 *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_140095f9c((uint)local_60,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_1401433a0)[lVar14] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) != 0
      ) && ((char)*param_2 == '\x1a')) {
    return 0;
  }
  *(undefined4 *)((longlong)param_4 + 0x34) = 0;
  *(undefined1 *)(param_4 + 6) = 1;
  *(undefined4 *)((longlong)param_4 + 0x2c) = 0x1c;
  *(undefined1 *)(param_4 + 7) = 1;
  return -1;
}


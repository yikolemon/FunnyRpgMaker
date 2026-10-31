/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012cd1c */

int FUN_14012cd1c(uint param_1,short *param_2,uint param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  BOOL BVar6;
  DWORD DVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  short *psVar13;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  DWORD local_50 [4];
  
  iVar10 = 0;
  uVar12 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (short *)0x0) {
LAB_14012cd4c:
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1401210c8(0,0,0,0,0,param_4);
    return -1;
  }
  uVar8 = (ulonglong)(param_1 & 0x3f);
  lVar11 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_1403551e0)[lVar11] + 0x39 + uVar8 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_14012cd4c;
  if ((*(byte *)((&DAT_1403551e0)[lVar11] + 0x38 + uVar8 * 0x48) & 0x20) != 0) {
    thunk_FUN_14012a47c(param_1,0,2);
  }
  local_60 = 0;
  iVar5 = FUN_140130e00();
  if ((iVar5 == 0) || (-1 < *(char *)((&DAT_1403551e0)[lVar11] + 0x38 + uVar8 * 0x48))) {
LAB_14012cf04:
    if (-1 < *(char *)((&DAT_1403551e0)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar6 = WriteFile(*(HANDLE *)
                         ((&DAT_1403551e0)[lVar11] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      iVar10 = local_68;
      uVar8 = local_70;
      if (BVar6 == 0) {
        DVar7 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar7);
        iVar10 = local_68;
        uVar8 = local_70;
      }
      goto LAB_14012cfb9;
    }
    if (cVar1 == '\0') {
      puVar9 = (ulonglong *)FUN_14012d600(&local_70,param_1,param_2,uVar12);
    }
    else if (cVar1 == '\x01') {
      puVar9 = (ulonglong *)FUN_14012d824(&local_70,param_1,param_2,uVar12);
    }
    else {
      iVar10 = 0;
      uVar8 = local_60;
      if (cVar1 != '\x02') goto LAB_14012cfb9;
      puVar9 = (ulonglong *)FUN_14012d708(&local_70,param_1,param_2,uVar12);
    }
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_14010bc80();
    }
    if ((*(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138) == 0) &&
       (*(char *)((&DAT_1403551e0)[lVar11] + 0x39 + uVar8 * 0x48) == '\0')) goto LAB_14012cf04;
    local_50[0] = 0;
    BVar6 = GetConsoleMode(*(HANDLE *)((&DAT_1403551e0)[lVar11] + 0x28 + uVar8 * 0x48),local_50);
    if (BVar6 == 0) goto LAB_14012cf04;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar8 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar8 = local_70;
        if (param_2 < (short *)((longlong)param_2 + uVar12)) {
          local_70._4_4_ = 0;
          psVar13 = param_2;
          iVar5 = local_70._4_4_;
          do {
            sVar4 = *psVar13;
            sVar3 = FUN_1401347bc(sVar4);
            if (sVar3 != sVar4) {
LAB_14012cecc:
              DVar7 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar7);
              uVar8 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar5 + 2,(undefined4)local_70);
            iVar2 = iVar5 + 2;
            if (sVar4 == 10) {
              sVar4 = FUN_1401347bc(0xd);
              if (sVar4 != 0xd) goto LAB_14012cecc;
              local_70 = CONCAT44(iVar5 + 3,(undefined4)local_70);
              iVar10 = iVar10 + 1;
              iVar2 = iVar5 + 3;
            }
            iVar5 = iVar2;
            psVar13 = psVar13 + 1;
            uVar8 = local_70;
          } while (psVar13 < (short *)((longlong)param_2 + uVar12));
        }
      }
      goto LAB_14012cfb9;
    }
    puVar9 = (ulonglong *)FUN_14012d16c(&local_70,param_1,param_2,uVar12,param_4);
  }
  iVar10 = (int)puVar9[1];
  uVar8 = *puVar9;
LAB_14012cfb9:
  local_60 = uVar8;
  iVar5 = (int)(local_60 >> 0x20);
  if (iVar5 != 0) {
    return iVar5 - iVar10;
  }
  if ((int)local_60 != 0) {
    if ((int)local_60 == 5) {
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 0x38) = 1;
      *(undefined4 *)(param_4 + 0x34) = 5;
      return -1;
    }
    FUN_140113f14(local_60 & 0xffffffff,param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_1403551e0)[lVar11] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) != 0
      ) && ((char)*param_2 == '\x1a')) {
    return 0;
  }
  *(undefined4 *)(param_4 + 0x34) = 0;
  *(undefined1 *)(param_4 + 0x30) = 1;
  *(undefined4 *)(param_4 + 0x2c) = 0x1c;
  *(undefined1 *)(param_4 + 0x38) = 1;
  return -1;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404af2ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1404af2ac(uint param_1,short *param_2,uint param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  short *psVar12;
  undefined8 local_70;
  int local_68;
  ulonglong local_60;
  undefined4 local_50 [4];
  
  iVar9 = 0;
  uVar11 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (short *)0x0) {
LAB_1404af2dc:
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    FUN_1404a2100(0,0,0,0,0,param_4);
    return -1;
  }
  uVar7 = (ulonglong)(param_1 & 0x3f);
  lVar10 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_1406328d0)[lVar10] + 0x39 + uVar7 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_1404af2dc;
  if ((*(byte *)((&DAT_1406328d0)[lVar10] + 0x38 + uVar7 * 0x48) & 0x20) != 0) {
    thunk_FUN_1404a8d00(param_1,0,2);
  }
  local_60 = 0;
  iVar5 = FUN_1404b4cb0();
  if ((iVar5 == 0) || (-1 < *(char *)((&DAT_1406328d0)[lVar10] + 0x38 + uVar7 * 0x48))) {
LAB_1404af494:
    if (-1 < *(char *)((&DAT_1406328d0)[lVar10] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      iVar5 = (*(code *)s_MapViewOfFile_14059e29e._2_8_)
                        (*(undefined8 *)
                          ((&DAT_1406328d0)[lVar10] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                         param_2,uVar11,(longlong)&local_70 + 4,0);
      iVar9 = local_68;
      uVar7 = local_70;
      if (iVar5 == 0) {
        uVar6 = (*_DAT_14059df60)();
        local_70 = CONCAT44(local_70._4_4_,uVar6);
        iVar9 = local_68;
        uVar7 = local_70;
      }
      goto LAB_1404af549;
    }
    if (cVar1 == '\0') {
      puVar8 = (ulonglong *)FUN_1404afb90(&local_70,param_1,param_2,uVar11);
    }
    else if (cVar1 == '\x01') {
      puVar8 = (ulonglong *)FUN_1404afdb4(&local_70,param_1,param_2,uVar11);
    }
    else {
      iVar9 = 0;
      uVar7 = local_60;
      if (cVar1 != '\x02') goto LAB_1404af549;
      puVar8 = (ulonglong *)FUN_1404afc98(&local_70,param_1,param_2,uVar11);
    }
  }
  else {
    if (*(char *)(param_4 + 0x28) == '\0') {
      FUN_140484290();
    }
    if ((*(longlong *)(*(longlong *)(param_4 + 0x18) + 0x138) == 0) &&
       (*(char *)((&DAT_1406328d0)[lVar10] + 0x39 + uVar7 * 0x48) == '\0')) goto LAB_1404af494;
    local_50[0] = 0;
    iVar5 = (*_DAT_14059deb0)(*(undefined8 *)((&DAT_1406328d0)[lVar10] + 0x28 + uVar7 * 0x48),
                              local_50);
    if (iVar5 == 0) goto LAB_1404af494;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar7 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar7 = local_70;
        if (param_2 < (short *)((longlong)param_2 + uVar11)) {
          local_70._4_4_ = 0;
          psVar12 = param_2;
          iVar5 = local_70._4_4_;
          do {
            sVar4 = *psVar12;
            sVar3 = FUN_1404b80a4(sVar4);
            if (sVar3 != sVar4) {
LAB_1404af45c:
              uVar6 = (*_DAT_14059df60)();
              local_70 = CONCAT44(local_70._4_4_,uVar6);
              uVar7 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar5 + 2,(undefined4)local_70);
            iVar2 = iVar5 + 2;
            if (sVar4 == 10) {
              sVar4 = FUN_1404b80a4(0xd);
              if (sVar4 != 0xd) goto LAB_1404af45c;
              local_70 = CONCAT44(iVar5 + 3,(undefined4)local_70);
              iVar9 = iVar9 + 1;
              iVar2 = iVar5 + 3;
            }
            iVar5 = iVar2;
            psVar12 = psVar12 + 1;
            uVar7 = local_70;
          } while (psVar12 < (short *)((longlong)param_2 + uVar11));
        }
      }
      goto LAB_1404af549;
    }
    puVar8 = (ulonglong *)FUN_1404af6fc(&local_70,param_1,param_2,uVar11,param_4);
  }
  iVar9 = (int)puVar8[1];
  uVar7 = *puVar8;
LAB_1404af549:
  local_60 = uVar7;
  iVar5 = (int)(local_60 >> 0x20);
  if (iVar5 != 0) {
    return iVar5 - iVar9;
  }
  if ((int)local_60 != 0) {
    if ((int)local_60 == 5) {
      *(undefined1 *)(param_4 + 0x30) = 1;
      *(undefined4 *)(param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 0x38) = 1;
      *(undefined4 *)(param_4 + 0x34) = 5;
      return -1;
    }
    FUN_14048fc7c(local_60 & 0xffffffff,param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_1406328d0)[lVar10] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) != 0
      ) && ((char)*param_2 == '\x1a')) {
    return 0;
  }
  *(undefined4 *)(param_4 + 0x34) = 0;
  *(undefined1 *)(param_4 + 0x30) = 1;
  *(undefined4 *)(param_4 + 0x2c) = 0x1c;
  *(undefined1 *)(param_4 + 0x38) = 1;
  return -1;
}


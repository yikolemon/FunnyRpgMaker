/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020aac8 */

void __fastcall FUN_1020aac8(uint *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint local_6c;
  uint *local_68;
  int local_64;
  uint *local_60;
  uint *local_5c;
  int local_58;
  int local_54;
  uint local_50;
  uint *local_4c;
  uint *local_48;
  int local_44;
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  int local_30;
  uint *local_2c;
  uint *local_28;
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_6c;
  _memset(param_1,0,0x134);
  *param_1 = *(uint *)(param_2 + 0x34);
  local_68 = param_1;
  local_58 = param_2;
  FUN_1020afc6(param_1 + 4,param_1 + 5);
  FUN_1020b019(&local_28);
  FUN_1020b03c(&local_2c);
  FUN_1020b05f(&local_30);
  FUN_1020b082(&local_34);
  iVar4 = FUN_1020b0a5();
  puVar12 = local_68;
  if (iVar4 == 1) {
    if ((local_18 == 0) ||
       ((((local_18 == 4 && ((int)*local_28 < -0x780000)) && ((int)local_28[1] < -0x780000)) &&
        ((0x3700000 < (int)local_28[2] && (0x3700000 < (int)local_28[3])))))) {
      local_68[0xe] = 0xff87ffff;
      uVar11 = *local_68;
      iVar4 = (int)((longlong)(int)uVar11 * -0x780001 >> 0x3f);
      lVar2 = (longlong)(int)uVar11 * -0x780001 + CONCAT44(iVar4,iVar4) + 0x8000;
      local_68[0xf] =
           (((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + 0x8000 & 0xffff0000)
           - 0x8000;
      local_68[0x10] = uVar11;
      local_68[0xc] = 0x31;
      uVar5 = *(int *)(local_58 + 0xe8) * 2 + 0x3700001;
      lVar2 = (longlong)(int)uVar5 * (longlong)(int)uVar11;
      iVar4 = (int)(lVar2 >> 0x3f);
      lVar2 = lVar2 + CONCAT44(iVar4,iVar4) + 0x8000;
      local_68[9] = uVar5;
      local_68[10] = ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + 0x8000 &
                     0xffff0000 | 0x8000;
      local_68[0xb] = uVar11;
      local_68[7] = 0x32;
      *(undefined1 *)((int)local_68 + 9) = 1;
      goto LAB_1020afa3;
    }
LAB_1020ac54:
    local_60 = local_28;
    local_5c = local_68 + 0x11;
    uVar5 = local_68[1];
    local_64 = 0;
    uVar11 = 0;
    do {
      uVar8 = local_28[uVar11];
      local_5c[uVar5 * 5] = uVar8;
      uVar9 = local_28[uVar11 + 1];
      local_68[uVar5 * 5 + 0x12] = uVar9;
      iVar4 = uVar9 - uVar8;
      if (-1 < iVar4) {
        puVar1 = local_5c + uVar5 * 5;
        if (local_64 < iVar4) {
          local_64 = iVar4;
        }
        if (uVar11 != 0) {
          puVar1[1] = uVar9 + *(int *)(local_58 + 0xe8) * 2;
          uVar9 = uVar8 + *(int *)(local_58 + 0xe8) * 2;
          *puVar1 = uVar9;
        }
        *(bool *)(puVar1 + 4) = uVar11 == 0;
        puVar1[2] = uVar9;
        uVar5 = uVar5 + 1;
        local_68[1] = uVar5;
      }
      uVar11 = uVar11 + 2;
    } while (uVar11 < local_18);
  }
  else {
    if (local_18 != 0) goto LAB_1020ac54;
    local_64 = 0;
  }
  local_6c = local_1c;
  if (local_1c != 0) {
    local_5c = local_2c;
    local_60 = local_68 + 0x11;
    uVar5 = local_68[1];
    uVar11 = 0;
    do {
      uVar9 = local_2c[uVar11];
      local_60[uVar5 * 5] = uVar9;
      uVar8 = local_2c[uVar11 + 1];
      iVar4 = uVar8 - uVar9;
      local_68[uVar5 * 5 + 0x12] = uVar8;
      if (-1 < iVar4) {
        if (local_64 < iVar4) {
          local_64 = iVar4;
        }
        *(undefined1 *)(local_60 + uVar5 * 5 + 4) = 1;
        local_60[uVar5 * 5 + 2] = uVar8;
        uVar5 = uVar5 + 1;
        local_68[1] = uVar5;
      }
      uVar11 = uVar11 + 2;
    } while (uVar11 < local_1c);
  }
  local_48 = param_1 + 3;
  local_54 = FUN_101c2523(0x10000,*local_68);
  puVar1 = local_48;
  iVar3 = local_58;
  iVar4 = local_64;
  local_3c = puVar12[1];
  if (local_3c != 0) {
    local_40 = local_68 + 0x11;
    local_60 = local_24;
    local_5c = local_34;
    local_50 = local_20;
    local_44 = local_30;
    uVar5 = 0;
    do {
      local_38 = uVar5;
      local_4c = local_40 + local_38 * 5;
      local_6c = local_4c[2];
      if ((char)local_4c[4] == '\0') {
        if (2 < local_20) {
          uVar5 = 2;
          iVar10 = 0x7fffffff;
          do {
            uVar11 = *(int *)(local_58 + 0xe8) * 2 + *(int *)(local_30 + uVar5 * 4);
            iVar7 = -(local_6c - uVar11);
            if (iVar7 < 0) {
              iVar7 = local_6c - uVar11;
            }
          } while (((local_54 <= iVar7 || iVar10 <= iVar7) ||
                   (local_4c[2] = uVar11, iVar10 = iVar7, local_6c != uVar11)) &&
                  (uVar5 = uVar5 + 2, uVar5 < local_20));
        }
      }
      else {
        if (local_24 == (uint *)0x0) {
          iVar10 = 0x7fffffff;
        }
        else {
          puVar12 = (uint *)0x0;
          iVar10 = 0x7fffffff;
          do {
            uVar5 = local_34[(int)puVar12 + 1];
            iVar7 = -(local_6c - uVar5);
            if (iVar7 < 0) {
              iVar7 = local_6c - uVar5;
            }
            if ((iVar7 < local_54 && iVar7 < iVar10) &&
               (local_4c[2] = uVar5, iVar10 = iVar7, local_6c == uVar5)) {
              iVar10 = 0;
              break;
            }
            puVar12 = (uint *)((int)puVar12 + 2);
          } while (puVar12 < local_24);
        }
        if (1 < local_20) {
          iVar6 = local_6c - *(uint *)(local_30 + 4);
          iVar7 = -iVar6;
          if (iVar7 < 0) {
            iVar7 = iVar6;
          }
          if (iVar7 < local_54 && iVar7 < iVar10) {
            local_4c[2] = *(uint *)(local_30 + 4);
          }
        }
      }
      uVar5 = local_38 + 1;
    } while (local_38 + 1 != local_3c);
  }
  uVar5 = *local_48;
  if (0 < local_64) {
    iVar10 = FUN_101c2523(0x10000,local_64);
    if (iVar10 < (int)uVar5) {
      uVar5 = FUN_101c2523(0x10000,iVar4);
      *puVar1 = uVar5;
    }
    else {
      uVar5 = *puVar1;
    }
  }
  if ((int)*local_68 < (int)uVar5) {
    *(undefined1 *)(local_68 + 2) = 1;
    iVar4 = FUN_101c16ea(0x999a,*local_68,uVar5);
    uVar5 = 0x7fff;
    if (0x199a < iVar4) {
      uVar5 = 0x999a - iVar4;
    }
    local_68[6] = uVar5;
  }
  if (*(char *)(iVar3 + 0xba) != '\0') {
    local_68[6] = 0;
  }
  uVar5 = local_68[1];
  if (uVar5 != 0) {
    local_6c = *local_68;
    uVar11 = local_68[6];
    puVar12 = local_68 + 0x15;
    do {
      iVar4 = (int)((longlong)(int)local_6c * (longlong)(int)puVar12[-2] >> 0x3f);
      lVar2 = (longlong)(int)local_6c * (longlong)(int)puVar12[-2] + CONCAT44(iVar4,iVar4) + 0x8000;
      uVar8 = (int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10;
      uVar9 = (uVar8 - uVar11) + 0x8000;
      if ((char)*puVar12 == '\0') {
        uVar9 = uVar11 + 0x8000 + uVar8;
      }
      puVar12[-1] = uVar9 & 0xffff0000;
      puVar12 = puVar12 + 5;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
LAB_1020afa3:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


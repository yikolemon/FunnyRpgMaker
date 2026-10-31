/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462240 */

void __fastcall FUN_00462240(uint *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  uint local_6c;
  uint *local_68;
  uint local_64;
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
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_6c;
  iVar3 = *(int *)(param_2 + 0xb0);
  _memset(param_1,0,0x134);
  *param_1 = *(uint *)(param_2 + 0x34);
  local_68 = param_1;
  local_58 = param_2;
  FUN_0046273e(iVar3,(int *)(param_1 + 3),(int *)(param_1 + 4),(int *)(param_1 + 5));
  FUN_00462791(iVar3,&local_18,(int *)&local_28);
  FUN_004627b4(iVar3,&local_1c,(int *)&local_2c);
  FUN_004627d7(iVar3,&local_20,&local_30);
  FUN_004627fa(iVar3,(uint *)&local_24,(int *)&local_34);
  iVar3 = FUN_0046281d(iVar3);
  puVar12 = local_68;
  if (iVar3 == 1) {
    if ((local_18 == 0) ||
       ((((local_18 == 4 && ((int)*local_28 < -0x780000)) && ((int)local_28[1] < -0x780000)) &&
        ((0x3700000 < (int)local_28[2] && (0x3700000 < (int)local_28[3])))))) {
      local_68[0xe] = 0xff87ffff;
      uVar11 = *local_68;
      iVar3 = (int)((longlong)(int)uVar11 * -0x780001 >> 0x3f);
      lVar2 = (longlong)(int)uVar11 * -0x780001 + CONCAT44(iVar3,iVar3) + 0x8000;
      local_68[0xf] =
           (((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + 0x8000 & 0xffff0000)
           - 0x8000;
      local_68[0x10] = uVar11;
      local_68[0xc] = 0x31;
      uVar4 = *(int *)(local_58 + 0xe8) * 2 + 0x3700001;
      lVar2 = (longlong)(int)uVar4 * (longlong)(int)uVar11;
      iVar3 = (int)(lVar2 >> 0x3f);
      lVar2 = lVar2 + CONCAT44(iVar3,iVar3) + 0x8000;
      local_68[9] = uVar4;
      local_68[10] = ((int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10) + 0x8000 &
                     0xffff0000 | 0x8000;
      local_68[0xb] = uVar11;
      local_68[7] = 0x32;
      *(undefined1 *)((int)local_68 + 9) = 1;
      goto LAB_0046271b;
    }
LAB_004623cc:
    local_60 = local_28;
    local_5c = local_68 + 0x11;
    uVar4 = local_68[1];
    local_64 = 0;
    uVar11 = 0;
    do {
      uVar7 = local_28[uVar11];
      local_5c[uVar4 * 5] = uVar7;
      uVar9 = local_28[uVar11 + 1];
      local_68[uVar4 * 5 + 0x12] = uVar9;
      uVar8 = uVar9 - uVar7;
      if (-1 < (int)uVar8) {
        puVar1 = local_5c + uVar4 * 5;
        if ((int)local_64 < (int)uVar8) {
          local_64 = uVar8;
        }
        if (uVar11 != 0) {
          puVar1[1] = uVar9 + *(int *)(local_58 + 0xe8) * 2;
          uVar9 = uVar7 + *(int *)(local_58 + 0xe8) * 2;
          *puVar1 = uVar9;
        }
        *(bool *)(puVar1 + 4) = uVar11 == 0;
        puVar1[2] = uVar9;
        uVar4 = uVar4 + 1;
        local_68[1] = uVar4;
      }
      uVar11 = uVar11 + 2;
    } while (uVar11 < local_18);
  }
  else {
    if (local_18 != 0) goto LAB_004623cc;
    local_64 = 0;
  }
  local_6c = local_1c;
  if (local_1c != 0) {
    local_5c = local_2c;
    local_60 = local_68 + 0x11;
    uVar4 = local_68[1];
    uVar11 = 0;
    do {
      uVar9 = local_2c[uVar11];
      local_60[uVar4 * 5] = uVar9;
      uVar7 = local_2c[uVar11 + 1];
      uVar9 = uVar7 - uVar9;
      local_68[uVar4 * 5 + 0x12] = uVar7;
      if (-1 < (int)uVar9) {
        if ((int)local_64 < (int)uVar9) {
          local_64 = uVar9;
        }
        *(undefined1 *)(local_60 + uVar4 * 5 + 4) = 1;
        local_60[uVar4 * 5 + 2] = uVar7;
        uVar4 = uVar4 + 1;
        local_68[1] = uVar4;
      }
      uVar11 = uVar11 + 2;
    } while (uVar11 < local_1c);
  }
  local_48 = param_1 + 3;
  local_54 = FUN_0041eaa0(0x10000,*local_68);
  puVar1 = local_48;
  iVar3 = local_58;
  uVar4 = local_64;
  local_3c = puVar12[1];
  if (local_3c != 0) {
    local_40 = local_68 + 0x11;
    local_60 = local_24;
    local_5c = local_34;
    local_50 = local_20;
    local_44 = local_30;
    uVar11 = 0;
    do {
      local_38 = uVar11;
      local_4c = local_40 + local_38 * 5;
      local_6c = local_4c[2];
      if ((char)local_4c[4] == '\0') {
        if (2 < local_20) {
          uVar11 = 2;
          iVar10 = 0x7fffffff;
          do {
            uVar9 = *(int *)(local_58 + 0xe8) * 2 + *(int *)(local_30 + uVar11 * 4);
            iVar6 = -(local_6c - uVar9);
            if (iVar6 < 0) {
              iVar6 = local_6c - uVar9;
            }
          } while (((local_54 <= iVar6 || iVar10 <= iVar6) ||
                   (local_4c[2] = uVar9, iVar10 = iVar6, local_6c != uVar9)) &&
                  (uVar11 = uVar11 + 2, uVar11 < local_20));
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
            uVar11 = local_34[(int)puVar12 + 1];
            iVar6 = -(local_6c - uVar11);
            if (iVar6 < 0) {
              iVar6 = local_6c - uVar11;
            }
            if ((iVar6 < local_54 && iVar6 < iVar10) &&
               (local_4c[2] = uVar11, iVar10 = iVar6, local_6c == uVar11)) {
              iVar10 = 0;
              break;
            }
            puVar12 = (uint *)((int)puVar12 + 2);
          } while (puVar12 < local_24);
        }
        if (1 < local_20) {
          iVar5 = local_6c - *(uint *)(local_30 + 4);
          iVar6 = -iVar5;
          if (iVar6 < 0) {
            iVar6 = iVar5;
          }
          if (iVar6 < local_54 && iVar6 < iVar10) {
            local_4c[2] = *(uint *)(local_30 + 4);
          }
        }
      }
      uVar11 = local_38 + 1;
    } while (local_38 + 1 != local_3c);
  }
  uVar11 = *local_48;
  if (0 < (int)local_64) {
    iVar10 = FUN_0041eaa0(0x10000,local_64);
    if (iVar10 < (int)uVar11) {
      uVar11 = FUN_0041eaa0(0x10000,uVar4);
      *puVar1 = uVar11;
    }
    else {
      uVar11 = *puVar1;
    }
  }
  if ((int)*local_68 < (int)uVar11) {
    *(undefined1 *)(local_68 + 2) = 1;
    iVar10 = FUN_0041dcda(0x999a,*local_68,uVar11);
    uVar4 = 0x7fff;
    if (0x199a < iVar10) {
      uVar4 = 0x999a - iVar10;
    }
    local_68[6] = uVar4;
  }
  if (*(char *)(iVar3 + 0xba) != '\0') {
    local_68[6] = 0;
  }
  uVar4 = local_68[1];
  if (uVar4 != 0) {
    local_6c = *local_68;
    uVar11 = local_68[6];
    puVar12 = local_68 + 0x15;
    do {
      iVar3 = (int)((longlong)(int)local_6c * (longlong)(int)puVar12[-2] >> 0x3f);
      lVar2 = (longlong)(int)local_6c * (longlong)(int)puVar12[-2] + CONCAT44(iVar3,iVar3) + 0x8000;
      uVar7 = (int)((ulonglong)lVar2 >> 0x20) * 0x10000 | (uint)lVar2 >> 0x10;
      uVar9 = (uVar7 - uVar11) + 0x8000;
      if ((char)*puVar12 == '\0') {
        uVar9 = uVar11 + 0x8000 + uVar7;
      }
      puVar12[-1] = uVar9 & 0xffff0000;
      puVar12 = puVar12 + 5;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
LAB_0046271b:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_6c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_6c);
  }
  return;
}


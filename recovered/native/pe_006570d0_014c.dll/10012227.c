/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10012227 */

undefined8 FUN_10012227(char *param_1,char *param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  char *local_48;
  uint local_44;
  uint local_40;
  char *local_3c;
  int local_38;
  byte local_17;
  undefined1 local_16 [2];
  undefined4 local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  local_40 = 0xd;
  if (-1 < (int)param_5) {
    local_40 = param_5;
  }
  uVar13 = param_4 & 0xfffff;
  if (param_4 >> 0x14 == 0) {
    local_44 = 0xfffffc02;
    if (param_3 == 0 && uVar13 == 0) {
      local_44 = 0;
    }
  }
  else {
    uVar13 = uVar13 + 0xfffff + (uint)(param_3 != 0) + (uint)(0xfffffffe < param_3 - 1);
    local_44 = (param_4 >> 0x14) - 0x3ff;
  }
  uVar9 = -local_44;
  if ((int)-local_44 < 0) {
    uVar9 = local_44;
  }
  if (uVar9 < 10) {
    iVar2 = 1;
  }
  else {
    iVar2 = 2;
    if (99 < uVar9) {
      iVar2 = 4 - (uint)(uVar9 < 1000);
    }
  }
  if (((int)local_40 <= (int)param_2 - (int)param_1) &&
     ((int)((iVar2 - (uint)(local_40 == 0)) + 4) <= (int)(((int)param_2 - (int)param_1) - local_40))
     ) {
    bVar4 = (char)((int)local_44 >> 0x1f) * -2 + 0x2b;
    local_44 = (uint)bVar4;
    if (local_40 < 0xd) {
      local_3c = (char *)(uVar13 << 1 | param_3 >> 0x1f);
      iVar2 = param_3 * 2;
      bVar1 = (char)local_40 * -4 + 0x34;
      uVar5 = 1 << (bVar1 & 0x1f);
      local_48 = (char *)(iVar2 - 1U | param_3);
      uVar6 = uVar5;
      uVar3 = 0 << (bVar1 & 0x1f) | 1U >> 0x20 - (bVar1 & 0x1f);
      if ((bVar1 & 0x20) != 0) {
        uVar6 = 0;
        uVar3 = uVar5;
      }
      uVar6 = (uint)local_48 & param_3 * 2 & uVar6;
      bVar14 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      uVar13 = uVar13 + (((uint)(local_3c + (iVar2 != 0) + 0x1fffffff) | uVar13) & (uint)local_3c &
                        uVar3) + (uint)bVar14;
      *param_1 = (char)(uVar13 >> 0x14) + '0';
      if (local_40 != 0) goto LAB_10012383;
      param_1 = param_1 + 1;
    }
    else {
      *param_1 = (char)(uVar13 >> 0x14) + '0';
LAB_10012383:
      uVar13 = uVar13 & 0xfffff;
      param_1[1] = '.';
      param_1[2] = (&DAT_1028b674)[uVar13 >> 0x10];
      iVar2 = local_40 - 1;
      if (iVar2 == 0) {
        param_1 = param_1 + 3;
      }
      else {
        local_3c = (char *)(local_40 - 2);
        uVar3 = 0x30;
        pcVar7 = (char *)0x0;
        do {
          local_48 = pcVar7;
          uVar12 = -1 << ((byte)uVar3 & 0x1f);
          uVar5 = uVar12;
          uVar6 = 0xffffffff;
          if ((uVar3 & 0x20) != 0) {
            uVar5 = 0;
            uVar6 = uVar12;
          }
          param_3 = ~uVar5 & param_3;
          uVar13 = ~uVar6 & uVar13;
          uVar3 = uVar3 - 4;
          bVar4 = (byte)uVar3 & 0x1f;
          uVar6 = uVar13 >> ((byte)uVar3 & 0x1f);
          if ((uVar3 & 0x20) == 0) {
            uVar6 = param_3 >> bVar4 | uVar13 << 0x20 - bVar4;
          }
          (param_1 + 3)[(int)local_48] = (&DAT_1028b674)[uVar6];
          local_38 = iVar2;
          if (local_3c == local_48) {
            param_1 = param_1 + (int)local_48 + 4;
            goto LAB_10012446;
          }
          pcVar7 = local_48 + 1;
        } while (uVar3 != 0);
        _memset(pcVar7 + (int)param_1 + 3,0x30,iVar2 - (int)pcVar7);
        param_1 = param_1 + local_40 + 2;
LAB_10012446:
        bVar4 = (byte)local_44;
      }
    }
    pcVar7 = param_1 + 2;
    *param_1 = 'p';
    param_1[1] = bVar4;
    puVar11 = &local_14;
    if (uVar9 < 10) {
      local_16[1] = (byte)uVar9 | 0x30;
      puVar11 = (undefined4 *)(local_16 + 1);
    }
    else {
      do {
        puVar10 = puVar11;
        uVar13 = uVar9;
        *(undefined2 *)((int)puVar10 + -2) = *(undefined2 *)(&DAT_1028b5ac + (uVar13 % 100) * 2);
        puVar11 = (undefined4 *)((int)puVar10 + -2);
        uVar9 = uVar13 / 100;
      } while (999 < uVar13);
      local_48 = pcVar7;
      if (99 < uVar13) {
        *(byte *)((int)puVar10 + -3) = (byte)(uVar13 / 100) | 0x30;
        puVar11 = (undefined4 *)((int)puVar10 + -3);
      }
    }
    iVar2 = (int)&local_14 - (int)puVar11;
    if (iVar2 <= (int)param_2 - (int)pcVar7) {
      thunk_FUN_10006e05(puVar11,iVar2,pcVar7);
      param_2 = pcVar7 + iVar2;
      uVar8 = 0;
      goto LAB_100124c0;
    }
  }
  uVar8 = 0x84;
LAB_100124c0:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_48)) {
    return CONCAT44(uVar8,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


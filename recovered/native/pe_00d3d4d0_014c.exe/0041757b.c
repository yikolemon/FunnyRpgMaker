/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041757b */

undefined8 __cdecl FUN_0041757b(char *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint *local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  int local_38;
  byte local_17;
  undefined1 local_16 [2];
  undefined4 local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_48;
  local_40 = 0xd;
  if (-1 < (int)param_5) {
    local_40 = param_5;
  }
  uVar14 = param_4 & 0xfffff;
  if (param_4 >> 0x14 == 0) {
    local_44 = 0xfffffc02;
    if (param_3 == 0 && uVar14 == 0) {
      local_44 = 0;
    }
  }
  else {
    uVar14 = uVar14 + 0xfffff + (uint)(param_3 != 0) + (uint)(0xfffffffe < param_3 - 1);
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
  if (((int)local_40 <= param_2 - (int)param_1) &&
     ((int)((iVar2 - (uint)(local_40 == 0)) + 4) <= (int)((param_2 - (int)param_1) - local_40))) {
    bVar4 = (char)((int)local_44 >> 0x1f) * -2 + 0x2b;
    local_44 = (uint)bVar4;
    if (local_40 < 0xd) {
      local_3c = (uint *)(uVar14 << 1 | param_3 >> 0x1f);
      iVar2 = param_3 * 2;
      bVar1 = (char)local_40 * -4 + 0x34;
      uVar5 = 1 << (bVar1 & 0x1f);
      local_48 = (uint *)(iVar2 - 1U | param_3);
      uVar6 = uVar5;
      uVar3 = 0 << (bVar1 & 0x1f) | 1U >> 0x20 - (bVar1 & 0x1f);
      if ((bVar1 & 0x20) != 0) {
        uVar6 = 0;
        uVar3 = uVar5;
      }
      uVar6 = (uint)local_48 & param_3 * 2 & uVar6;
      bVar15 = CARRY4(param_3,uVar6);
      param_3 = param_3 + uVar6;
      uVar14 = uVar14 + (((int)local_3c + (iVar2 != 0) + 0x1fffffff | uVar14) & (uint)local_3c &
                        uVar3) + (uint)bVar15;
      *param_1 = (char)(uVar14 >> 0x14) + '0';
      if (local_40 != 0) goto LAB_004176d7;
      pcVar10 = param_1 + 1;
    }
    else {
      *param_1 = (char)(uVar14 >> 0x14) + '0';
LAB_004176d7:
      uVar14 = uVar14 & 0xfffff;
      param_1[1] = '.';
      param_1[2] = (&DAT_004a9164)[uVar14 >> 0x10];
      iVar2 = local_40 - 1;
      if (iVar2 == 0) {
        pcVar10 = param_1 + 3;
      }
      else {
        local_3c = (uint *)(local_40 - 2);
        uVar3 = 0x30;
        puVar7 = (uint *)0x0;
        do {
          local_48 = puVar7;
          uVar13 = -1 << ((byte)uVar3 & 0x1f);
          uVar5 = uVar13;
          uVar6 = 0xffffffff;
          if ((uVar3 & 0x20) != 0) {
            uVar5 = 0;
            uVar6 = uVar13;
          }
          param_3 = ~uVar5 & param_3;
          uVar14 = ~uVar6 & uVar14;
          uVar3 = uVar3 - 4;
          bVar4 = (byte)uVar3 & 0x1f;
          uVar6 = uVar14 >> ((byte)uVar3 & 0x1f);
          if ((uVar3 & 0x20) == 0) {
            uVar6 = param_3 >> bVar4 | uVar14 << 0x20 - bVar4;
          }
          (param_1 + 3)[(int)local_48] = (&DAT_004a9164)[uVar6];
          local_38 = iVar2;
          if (local_3c == local_48) {
            pcVar10 = param_1 + (int)local_48 + 4;
            goto LAB_0041779a;
          }
          puVar7 = (uint *)((int)local_48 + 1);
        } while (uVar3 != 0);
        _memset((char *)((int)puVar7 + (int)param_1) + 3,0x30,iVar2 - (int)puVar7);
        pcVar10 = param_1 + local_40 + 2;
LAB_0041779a:
        bVar4 = (byte)local_44;
      }
    }
    puVar7 = (uint *)(pcVar10 + 2);
    *pcVar10 = 'p';
    pcVar10[1] = bVar4;
    puVar12 = &local_14;
    if (uVar9 < 10) {
      local_16[1] = (byte)uVar9 | 0x30;
      puVar12 = (uint *)(local_16 + 1);
    }
    else {
      do {
        puVar11 = puVar12;
        uVar14 = uVar9;
        *(undefined2 *)((int)puVar11 + -2) = *(undefined2 *)(&DAT_004a909c + (uVar14 % 100) * 2);
        puVar12 = (uint *)((int)puVar11 + -2);
        uVar9 = uVar14 / 100;
      } while (999 < uVar14);
      local_48 = puVar7;
      if (99 < uVar14) {
        *(byte *)((int)puVar11 + -3) = (byte)(uVar14 / 100) | 0x30;
        puVar12 = (uint *)((int)puVar11 + -3);
      }
    }
    uVar14 = (int)&local_14 - (int)puVar12;
    if ((int)uVar14 <= param_2 - (int)puVar7) {
      thunk_FUN_0040c6a9(puVar12,uVar14,puVar7);
      param_2 = (int)puVar7 + uVar14;
      uVar8 = 0;
      goto LAB_00417814;
    }
  }
  uVar8 = 0x84;
LAB_00417814:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_48)) {
    return CONCAT44(uVar8,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_48);
}


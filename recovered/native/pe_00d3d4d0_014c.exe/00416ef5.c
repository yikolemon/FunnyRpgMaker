/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00416ef5 */

undefined8 __cdecl FUN_00416ef5(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  byte *local_40;
  uint local_3c;
  uint local_38;
  byte local_17;
  undefined1 local_16 [2];
  undefined4 local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_40;
  if (param_3 == (byte *)0x0 && param_4 == 0) {
    uVar5 = 0x84;
    pbVar8 = param_2;
    if (3 < (int)param_2 - (int)param_1) {
      param_1[0] = 0x30;
      param_1[1] = 0x70;
      param_1[2] = 0x2b;
      param_1[3] = 0x30;
      pbVar8 = param_1 + 4;
      uVar5 = 0;
    }
  }
  else {
    uVar3 = param_4 >> 0x14;
    uVar4 = uVar3 - 0x3ff;
    uVar6 = 0xfffffc02;
    if (uVar3 != 0) {
      uVar6 = uVar4;
    }
    uVar5 = 0x84;
    pbVar8 = param_1;
    if (param_1 != param_2) {
      uVar9 = param_4 & 0xfffff;
      pbVar1 = param_1 + 1;
      *param_1 = uVar3 == 0 ^ 0x31;
      local_3c = uVar6;
      local_38 = uVar4;
      if (param_3 != (byte *)0x0 || uVar9 != 0) {
        pbVar8 = param_2;
        if (pbVar1 == param_2) goto LAB_004170a0;
        param_1[1] = 0x2e;
        pbVar1 = param_1 + 2;
        bVar2 = 0x30;
        do {
          pbVar8 = param_3;
          if (pbVar1 == param_2) goto LAB_00416fd2;
          uVar14 = (uint)pbVar8 >> (bVar2 & 0x1f) | uVar9 << 0x20 - (bVar2 & 0x1f);
          uVar3 = 0xffffffff;
          uVar10 = -1 << (bVar2 & 0x1f);
          uVar11 = uVar10;
          if ((bVar2 & 0x20) != 0) {
            uVar11 = 0;
            uVar3 = uVar10;
            uVar14 = uVar9 >> (bVar2 & 0x1f);
          }
          uVar9 = uVar9 & ~uVar3;
          *pbVar1 = (&DAT_004a9164)[uVar14];
          pbVar1 = pbVar1 + 1;
          bVar2 = bVar2 - 4;
          param_3 = (byte *)((uint)pbVar8 & ~uVar11);
          local_40 = pbVar8;
        } while ((byte *)((uint)pbVar8 & ~uVar11) != (byte *)0x0 || uVar9 != 0);
      }
      if ((int)param_2 - (int)pbVar1 < 2) {
LAB_00416fd2:
        uVar5 = 0x84;
        pbVar8 = param_2;
      }
      else {
        local_40 = param_2;
        *pbVar1 = 0x70;
        if ((int)uVar6 < 0) {
          uVar4 = -uVar6;
        }
        pbVar1[1] = (char)((int)uVar6 >> 0x1f) * -2 + 0x2b;
        puVar7 = (uint *)(pbVar1 + 2);
        puVar13 = &local_14;
        if (uVar4 < 10) {
          local_16[1] = (byte)uVar4 | 0x30;
          puVar13 = (uint *)(local_16 + 1);
        }
        else {
          do {
            puVar12 = puVar13;
            uVar6 = uVar4;
            *(undefined2 *)((int)puVar12 + -2) = *(undefined2 *)(&DAT_004a909c + (uVar6 % 100) * 2);
            puVar13 = (uint *)((int)puVar12 + -2);
            uVar4 = uVar6 / 100;
          } while (999 < uVar6);
          if (99 < uVar6) {
            *(byte *)((int)puVar12 + -3) = (byte)(uVar6 / 100) | 0x30;
            puVar13 = (uint *)((int)puVar12 + -3);
          }
        }
        uVar4 = (int)&local_14 - (int)puVar13;
        uVar5 = 0x84;
        pbVar8 = param_2;
        if ((int)uVar4 <= (int)param_2 - (int)puVar7) {
          thunk_FUN_0040c6a9(puVar13,uVar4,puVar7);
          pbVar8 = (byte *)((int)puVar7 + uVar4);
          uVar5 = 0;
          local_40 = pbVar8;
        }
      }
    }
  }
LAB_004170a0:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_40)) {
    return CONCAT44(uVar5,pbVar8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_40);
}


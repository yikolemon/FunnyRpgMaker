/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10011ba1 */

undefined8 FUN_10011ba1(byte *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  byte *local_40;
  uint local_3c;
  uint local_38;
  byte local_17;
  undefined1 local_16 [2];
  undefined4 local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  if (param_3 == (byte *)0x0 && param_4 == 0) {
    uVar5 = 0x84;
    pbVar7 = param_2;
    if (3 < (int)param_2 - (int)param_1) {
      param_1[0] = 0x30;
      param_1[1] = 0x70;
      param_1[2] = 0x2b;
      param_1[3] = 0x30;
      pbVar7 = param_1 + 4;
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
    pbVar7 = param_1;
    if (param_1 != param_2) {
      param_4 = param_4 & 0xfffff;
      pbVar1 = param_1 + 1;
      *param_1 = uVar3 == 0 ^ 0x31;
      local_3c = uVar6;
      local_38 = uVar4;
      if (param_3 != (byte *)0x0 || param_4 != 0) {
        pbVar7 = param_2;
        if (pbVar1 == param_2) goto LAB_10011d4c;
        param_1[1] = 0x2e;
        pbVar1 = param_1 + 2;
        bVar2 = 0x30;
        do {
          pbVar7 = param_3;
          if (pbVar1 == param_2) goto LAB_10011c7e;
          uVar12 = (uint)pbVar7 >> (bVar2 & 0x1f) | param_4 << 0x20 - (bVar2 & 0x1f);
          uVar3 = 0xffffffff;
          uVar8 = -1 << (bVar2 & 0x1f);
          uVar9 = uVar8;
          if ((bVar2 & 0x20) != 0) {
            uVar9 = 0;
            uVar3 = uVar8;
            uVar12 = param_4 >> (bVar2 & 0x1f);
          }
          param_4 = param_4 & ~uVar3;
          *pbVar1 = (&DAT_1028b674)[uVar12];
          pbVar1 = pbVar1 + 1;
          bVar2 = bVar2 - 4;
          param_3 = (byte *)((uint)pbVar7 & ~uVar9);
          local_40 = pbVar7;
        } while ((byte *)((uint)pbVar7 & ~uVar9) != (byte *)0x0 || param_4 != 0);
      }
      if ((int)param_2 - (int)pbVar1 < 2) {
LAB_10011c7e:
        uVar5 = 0x84;
        pbVar7 = param_2;
      }
      else {
        local_40 = param_2;
        *pbVar1 = 0x70;
        if ((int)uVar6 < 0) {
          uVar4 = -uVar6;
        }
        pbVar1[1] = (char)((int)uVar6 >> 0x1f) * -2 + 0x2b;
        pbVar1 = pbVar1 + 2;
        puVar11 = &local_14;
        if (uVar4 < 10) {
          local_16[1] = (byte)uVar4 | 0x30;
          puVar11 = (undefined4 *)(local_16 + 1);
        }
        else {
          do {
            puVar10 = puVar11;
            uVar6 = uVar4;
            *(undefined2 *)((int)puVar10 + -2) = *(undefined2 *)(&DAT_1028b5ac + (uVar6 % 100) * 2);
            puVar11 = (undefined4 *)((int)puVar10 + -2);
            uVar4 = uVar6 / 100;
          } while (999 < uVar6);
          if (99 < uVar6) {
            *(byte *)((int)puVar10 + -3) = (byte)(uVar6 / 100) | 0x30;
            puVar11 = (undefined4 *)((int)puVar10 + -3);
          }
        }
        iVar13 = (int)&local_14 - (int)puVar11;
        uVar5 = 0x84;
        pbVar7 = param_2;
        if (iVar13 <= (int)param_2 - (int)pbVar1) {
          thunk_FUN_10006e05(puVar11,iVar13,pbVar1);
          pbVar7 = pbVar1 + iVar13;
          uVar5 = 0;
          local_40 = pbVar7;
        }
      }
    }
  }
LAB_10011d4c:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_40)) {
    return CONCAT44(uVar5,pbVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


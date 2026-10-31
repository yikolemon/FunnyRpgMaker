/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001013e */

undefined8 FUN_1001013e(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  int iVar11;
  uint local_38 [8];
  byte local_17;
  undefined1 local_16 [2];
  undefined4 local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_38;
  if (param_3 == 0) {
    uVar5 = 0x84;
    pbVar6 = param_2;
    if (3 < (int)param_2 - (int)param_1) {
      param_1[0] = 0x30;
      param_1[1] = 0x70;
      param_1[2] = 0x2b;
      param_1[3] = 0x30;
      uVar5 = 0;
      pbVar6 = param_1 + 4;
    }
    goto LAB_10010296;
  }
  uVar2 = param_3 >> 0x17;
  uVar4 = 0xffffff82;
  if (uVar2 != 0) {
    uVar4 = uVar2 - 0x7f;
  }
  uVar5 = 0x84;
  pbVar6 = param_1;
  if (param_1 == param_2) goto LAB_10010296;
  pbVar10 = param_1 + 1;
  *param_1 = uVar2 == 0 ^ 0x31;
  if ((param_3 & 0x7fffff) == 0) {
LAB_100101f0:
    local_38[0] = uVar4;
    if (1 < (int)param_2 - (int)pbVar10) {
      *pbVar10 = 0x70;
      uVar2 = uVar2 - 0x7f;
      if ((int)uVar4 < 0) {
        uVar2 = -uVar4;
      }
      pbVar10[1] = (char)((int)uVar4 >> 0x1f) * -2 + 0x2b;
      pbVar10 = pbVar10 + 2;
      puVar9 = &local_14;
      if (uVar2 < 10) {
        local_16[1] = (byte)uVar2 | 0x30;
        puVar9 = (undefined4 *)(local_16 + 1);
      }
      else {
        do {
          puVar8 = puVar9;
          uVar7 = uVar2;
          *(undefined2 *)((int)puVar8 + -2) = *(undefined2 *)(&DAT_1028b5ac + (uVar7 % 100) * 2);
          puVar9 = (undefined4 *)((int)puVar8 + -2);
          uVar2 = uVar7 / 100;
        } while (999 < uVar7);
        if (99 < uVar7) {
          *(byte *)((int)puVar8 + -3) = (byte)(uVar7 / 100) | 0x30;
          puVar9 = (undefined4 *)((int)puVar8 + -3);
        }
      }
      iVar11 = (int)&local_14 - (int)puVar9;
      uVar5 = 0x84;
      pbVar6 = param_2;
      if (iVar11 <= (int)param_2 - (int)pbVar10) {
        thunk_FUN_10006e05(puVar9,iVar11,pbVar10);
        pbVar6 = pbVar10 + iVar11;
        uVar5 = 0;
      }
      goto LAB_10010296;
    }
  }
  else if (pbVar10 != param_2) {
    param_1[1] = 0x2e;
    pbVar10 = param_1 + 2;
    uVar7 = (param_3 & 0x7fffff) * 2;
    bVar3 = 0x14;
    do {
      local_38[0] = uVar4;
      if (pbVar10 == param_2) goto LAB_100101f9;
      *pbVar10 = (&DAT_1028b674)[uVar7 >> (bVar3 & 0x1f)];
      bVar1 = bVar3 & 0x1f;
      pbVar10 = pbVar10 + 1;
      bVar3 = bVar3 - 4;
      uVar7 = uVar7 & ~(-1 << bVar1);
    } while (uVar7 != 0);
    goto LAB_100101f0;
  }
LAB_100101f9:
  uVar5 = 0x84;
  pbVar6 = param_2;
LAB_10010296:
  if (DAT_10388d00 != (local_14 ^ (uint)local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT44(uVar5,pbVar6);
}


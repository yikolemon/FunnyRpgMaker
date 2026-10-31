/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003280c */

void FUN_1003280c(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  int local_48;
  uint local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  byte *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  byte local_1c [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_48;
  local_20 = param_7;
  local_30 = param_3;
  uStack_2c = param_4;
  uStack_28 = param_5;
  uStack_24 = param_6;
  pbVar8 = param_1;
  if (param_2 < 4) {
LAB_10032975:
    iVar4 = (int)(param_1 + param_2) - (int)pbVar8;
    if (iVar4 != 0) {
      iVar3 = 0;
      local_1c[4] = 0;
      local_1c[5] = 0;
      local_1c[6] = 0;
      local_1c[0] = 0;
      local_1c[1] = 0;
      local_1c[2] = 0;
      local_1c[3] = 0;
      do {
        pbVar5 = pbVar8 + iVar3;
        local_1c[iVar3] = *pbVar5;
        iVar3 = iVar3 + 1;
      } while (pbVar5 + 1 != param_1 + param_2);
      local_40 = local_1c + iVar4;
      pbVar5 = local_1c;
      do {
        uVar2 = (uint)(*pbVar5 >> 3);
        local_48 = (int)(char)(&DAT_10355ea6)[uVar2];
        local_44 = (uint)((0x80ff0000U >> uVar2 & 1) != 0);
        uVar2 = (pbVar5[3] & 0x3f |
                (pbVar5[2] & 0x3f) << 6 |
                (pbVar5[1] & 0x3f) << 0xc |
                ((uint)*pbVar5 & *(uint *)(&DAT_1028f254 + local_48 * 4)) << 0x12) >>
                ((&DAT_1028f27c)[local_48 * 4] & 0x1f);
        local_38 = pbVar5 + local_48 + local_44;
        uVar7 = (((pbVar5[1] >> 2 & 0xfffffff0) + (uint)(pbVar5[2] >> 6) * 4 |
                  (uint)(pbVar5[3] >> 6) |
                  (uint)(uVar2 < *(uint *)(&DAT_1028f268 + local_48 * 4)) << 6 |
                  (uint)(0x10ffff < uVar2) << 8 | (uint)((uVar2 & 0x7ffff800) == 0xd800) << 7) ^
                0x2a) >> ((&DAT_1028f290)[local_48 * 4] & 0x1f);
        iVar4 = local_44 + local_48;
        pbVar6 = local_38;
        if (uVar7 != 0) {
          iVar4 = 1;
          pbVar6 = pbVar5 + 1;
        }
        local_3c = pbVar5;
        local_34 = pbVar8;
        cVar1 = FUN_10032ef0(-(uint)(uVar7 != 0) | uVar2,pbVar8,iVar4);
      } while ((cVar1 != '\0') &&
              (pbVar8 = pbVar8 + ((int)pbVar6 - (int)pbVar5), pbVar5 = pbVar6, pbVar6 < local_40));
    }
  }
  else {
    local_40 = param_1 + (param_2 - 3);
    do {
      if (local_40 <= pbVar8) goto LAB_10032975;
      uVar2 = (uint)(*pbVar8 >> 3);
      local_48 = (int)(char)(&DAT_10355ea6)[uVar2];
      local_44 = (uint)((0x80ff0000U >> uVar2 & 1) != 0);
      local_3c = (byte *)(uint)pbVar8[2];
      uVar2 = (pbVar8[3] & 0x3f |
              ((uint)local_3c & 0x3f) << 6 |
              (pbVar8[1] & 0x3f) << 0xc |
              ((uint)*pbVar8 & *(uint *)(&DAT_1028f254 + local_48 * 4)) << 0x12) >>
              ((&DAT_1028f27c)[local_48 * 4] & 0x1f);
      local_38 = pbVar8 + local_48 + local_44;
      uVar7 = (((pbVar8[1] >> 2 & 0xfffffff0) + (uint)(pbVar8[2] >> 6) * 4 | (uint)(pbVar8[3] >> 6)
                | (uint)(uVar2 < *(uint *)(&DAT_1028f268 + local_48 * 4)) << 6 |
                (uint)(0x10ffff < uVar2) << 8 | (uint)((uVar2 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a)
              >> ((&DAT_1028f290)[local_48 * 4] & 0x1f);
      iVar4 = local_44 + local_48;
      pbVar5 = local_38;
      if (uVar7 != 0) {
        iVar4 = 1;
        pbVar5 = pbVar8 + 1;
      }
      local_34 = pbVar8;
      cVar1 = FUN_10032ef0(-(uint)(uVar7 != 0) | uVar2,pbVar8,iVar4);
      pbVar8 = pbVar5;
    } while (cVar1 != '\0');
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10032bef */

void FUN_10032bef(byte *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  int local_24;
  byte *local_20;
  byte local_1c [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  pbVar7 = param_1;
  if ((3 < param_2) && (3 < (int)param_2)) {
    local_28 = param_1 + (param_2 - 3);
    do {
      uVar2 = (uint)(*pbVar7 >> 3);
      iVar8 = (int)(char)(&DAT_10355ea6)[uVar2];
      local_2c = (byte *)(uint)((0x80ff0000U >> uVar2 & 1) != 0);
      uVar4 = (pbVar7[3] & 0x3f |
              (pbVar7[2] & 0x3f) << 6 |
              (pbVar7[1] & 0x3f) << 0xc |
              ((uint)*pbVar7 & *(uint *)(&DAT_1028f254 + iVar8 * 4)) << 0x12) >>
              ((&DAT_1028f27c)[iVar8 * 4] & 0x1f);
      uVar5 = (((pbVar7[1] >> 2 & 0xfffffff0) + (uint)(pbVar7[2] >> 6) * 4 | (uint)(pbVar7[3] >> 6)
                | (uint)(uVar4 < *(uint *)(&DAT_1028f268 + iVar8 * 4)) << 6 |
                (uint)(0x10ffff < uVar4) << 8 | (uint)((uVar4 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a)
              >> ((&DAT_1028f290)[iVar8 * 4] & 0x1f);
      pbVar9 = (byte *)0x1;
      uVar2 = 0xffffffff;
      local_30 = pbVar7;
      local_24 = iVar8;
      if (((uVar5 == 0) &&
          ((((pbVar9 = local_2c + iVar8, uVar4 < 0x20 || (uVar4 == 0x22)) || (uVar4 == 0x5c)) ||
           (uVar2 = uVar4, uVar4 == 0x7f)))) ||
         (uVar4 = uVar2, cVar1 = FUN_10027959(uVar4), cVar1 == '\0')) {
        *param_3 = local_30;
        param_3[1] = pbVar9 + (int)local_30;
        goto LAB_10032ec9;
      }
      if (uVar5 == 0) {
        pbVar7 = local_30 + (int)local_2c + iVar8;
      }
      else {
        pbVar7 = local_30 + 1;
      }
    } while (pbVar7 < local_28);
  }
  iVar8 = (int)(param_1 + param_2) - (int)pbVar7;
  if (iVar8 != 0) {
    iVar3 = 0;
    local_1c[4] = 0;
    local_1c[5] = 0;
    local_1c[6] = 0;
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_1c[3] = 0;
    do {
      pbVar9 = pbVar7 + iVar3;
      local_1c[iVar3] = *pbVar9;
      iVar3 = iVar3 + 1;
    } while (pbVar9 + 1 != param_1 + param_2);
    local_20 = local_1c + iVar8;
    pbVar9 = local_1c;
    do {
      uVar2 = (uint)(*pbVar9 >> 3);
      iVar8 = (int)(char)(&DAT_10355ea6)[uVar2];
      local_28 = (byte *)(uint)((0x80ff0000U >> uVar2 & 1) != 0);
      uVar4 = (pbVar9[3] & 0x3f |
              (pbVar9[2] & 0x3f) << 6 |
              (pbVar9[1] & 0x3f) << 0xc |
              ((uint)*pbVar9 & *(uint *)(&DAT_1028f254 + iVar8 * 4)) << 0x12) >>
              ((&DAT_1028f27c)[iVar8 * 4] & 0x1f);
      uVar5 = (((pbVar9[1] >> 2 & 0xfffffff0) + (uint)(pbVar9[2] >> 6) * 4 | (uint)(pbVar9[3] >> 6)
                | (uint)(uVar4 < *(uint *)(&DAT_1028f268 + iVar8 * 4)) << 6 |
                (uint)(0x10ffff < uVar4) << 8 | (uint)((uVar4 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a)
              >> ((&DAT_1028f290)[iVar8 * 4] & 0x1f);
      pbVar6 = (byte *)0x1;
      uVar2 = 0xffffffff;
      local_30 = pbVar7;
      local_2c = pbVar9;
      local_24 = iVar8;
      if (((uVar5 == 0) &&
          (((pbVar6 = local_28 + iVar8, uVar4 < 0x20 || (uVar4 == 0x22)) ||
           ((uVar4 == 0x5c || (uVar2 = uVar4, uVar4 == 0x7f)))))) ||
         (uVar4 = uVar2, cVar1 = FUN_10027959(uVar4), cVar1 == '\0')) {
        *param_3 = local_30;
        param_3[1] = pbVar6 + (int)local_30;
LAB_10032ec9:
        param_3[2] = uVar4;
        break;
      }
      if (uVar5 == 0) {
        pbVar9 = local_28 + (int)local_2c + iVar8;
      }
      else {
        pbVar9 = local_2c + 1;
      }
      pbVar7 = local_30 + ((int)pbVar9 - (int)local_2c);
    } while (pbVar9 < local_20);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


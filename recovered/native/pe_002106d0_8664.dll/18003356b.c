/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003356b */

void FUN_18003356b(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  byte *local_60;
  longlong local_58;
  byte local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_b8;
  local_68 = *(undefined8 *)(param_2 + 8);
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  local_78 = *(undefined8 *)(param_2 + 4);
  uStack_70 = *(undefined8 *)(param_2 + 6);
  pbVar4 = (byte *)*param_1;
  uVar3 = param_1[1];
  pbVar10 = pbVar4;
  if (uVar3 < 4) {
LAB_180033715:
    lVar5 = (longlong)(pbVar4 + uVar3) - (longlong)pbVar10;
    if (lVar5 != 0) {
      lVar6 = 0;
      local_50[4] = 0;
      local_50[5] = 0;
      local_50[6] = 0;
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0;
      do {
        pbVar8 = pbVar10 + lVar6;
        local_50[lVar6] = *pbVar8;
        lVar6 = lVar6 + 1;
      } while (pbVar8 + 1 != pbVar4 + uVar3);
      pbVar4 = local_50;
      do {
        uVar7 = (uint)(*pbVar4 >> 3);
        lVar6 = (longlong)(char)(&DAT_180385f89)[uVar7];
        uVar3 = (ulonglong)((0x80ff0000U >> uVar7 & 1) != 0);
        uVar7 = (pbVar4[3] & 0x3f |
                (pbVar4[2] & 0x3f) << 6 |
                (pbVar4[1] & 0x3f) << 0xc |
                ((uint)*pbVar4 & *(uint *)(&DAT_1802b07d0 + lVar6 * 4)) << 0x12) >>
                ((&DAT_1802b0810)[lVar6 * 4] & 0x1f);
        pbVar8 = pbVar4 + lVar6 + uVar3;
        uVar9 = ((pbVar4[1] >> 2 & 0xfffffff0) + (uint)(pbVar4[2] >> 6) * 4 | (uint)(pbVar4[3] >> 6)
                 | (uint)(uVar7 < *(uint *)(&DAT_1802b07f0 + lVar6 * 4)) << 6 |
                 (uint)(0x10ffff < uVar7) << 8 | (uint)((uVar7 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a
        ;
        local_58 = uVar3 + lVar6;
        if (uVar9 >> ((&DAT_1802b0830)[lVar6 * 4] & 0x1f) != 0) {
          local_58 = 1;
          pbVar8 = pbVar4 + 1;
        }
        local_60 = pbVar10;
        cVar1 = FUN_180033c74(&local_88,
                              -(uint)(uVar9 >> ((&DAT_1802b0830)[lVar6 * 4] & 0x1f) != 0) | uVar7,
                              &local_60);
      } while ((cVar1 != '\0') &&
              (pbVar10 = pbVar10 + ((longlong)pbVar8 - (longlong)pbVar4), pbVar4 = pbVar8,
              pbVar8 < local_50 + lVar5));
    }
  }
  else {
    local_90 = param_1;
    do {
      if (pbVar4 + (uVar3 - 3) <= pbVar10) {
        pbVar4 = (byte *)*local_90;
        uVar3 = local_90[1];
        goto LAB_180033715;
      }
      uVar7 = (uint)(*pbVar10 >> 3);
      lVar5 = (longlong)(char)(&DAT_180385f89)[uVar7];
      uVar2 = (ulonglong)((0x80ff0000U >> uVar7 & 1) != 0);
      uVar7 = (pbVar10[3] & 0x3f |
              (pbVar10[2] & 0x3f) << 6 |
              (pbVar10[1] & 0x3f) << 0xc |
              ((uint)*pbVar10 & *(uint *)(&DAT_1802b07d0 + lVar5 * 4)) << 0x12) >>
              ((&DAT_1802b0810)[lVar5 * 4] & 0x1f);
      pbVar8 = pbVar10 + lVar5 + uVar2;
      uVar9 = ((pbVar10[1] >> 2 & 0xfffffff0) + (uint)(pbVar10[2] >> 6) * 4 |
               (uint)(pbVar10[3] >> 6) | (uint)(uVar7 < *(uint *)(&DAT_1802b07f0 + lVar5 * 4)) << 6
               | (uint)(0x10ffff < uVar7) << 8 | (uint)((uVar7 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a
      ;
      local_58 = uVar2 + lVar5;
      if (uVar9 >> ((&DAT_1802b0830)[lVar5 * 4] & 0x1f) != 0) {
        local_58 = 1;
        pbVar8 = pbVar10 + 1;
      }
      local_60 = pbVar10;
      cVar1 = FUN_180033c74(&local_88,
                            -(uint)(uVar9 >> ((&DAT_1802b0830)[lVar5 * 4] & 0x1f) != 0) | uVar7,
                            &local_60);
      pbVar10 = pbVar8;
    } while (cVar1 != '\0');
  }
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_b8);
  }
  return;
}


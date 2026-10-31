/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140084eea */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_140084eea(ulonglong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong local_328 [80];
  ulonglong *local_a8;
  longlong local_a0;
  ulonglong local_98 [9];
  undefined8 *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_50 = param_2;
  FUN_1401366a0(local_328 + 0x10,0,0x200);
  uVar2 = _UNK_140163268;
  param_1[6] = _DAT_140163260;
  param_1[7] = uVar2;
  uVar2 = _UNK_140163258;
  param_1[4] = _DAT_140163250;
  param_1[5] = uVar2;
  uVar2 = _UNK_140163248;
  param_1[2] = _DAT_140163240;
  param_1[3] = uVar2;
  uVar2 = _UNK_140163238;
  *param_1 = _DAT_140163230;
  param_1[1] = uVar2;
  uVar3 = _UNK_140163198;
  uVar2 = _DAT_140163190;
  local_a0 = *param_3;
  if (local_a0 != 0) {
    puVar9 = (ulonglong *)*local_50;
    local_98[8] = 0;
    do {
      puVar10 = local_328;
      local_a8 = puVar9;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      lVar6 = 0;
      uVar7 = local_328[0];
      do {
        uVar8 = local_328[lVar6 + 1];
        uVar1 = local_328[lVar6 + 0xe];
        local_328[lVar6 + 0x10] =
             uVar7 + local_328[lVar6 + 9] +
             (uVar8 >> 7 ^
             (uVar8 << 0x38 | uVar8 >> 8) ^ (uVar8 >> 1 | (ulonglong)((uVar8 & 1) != 0) << 0x3f)) +
             (uVar1 >> 6 ^ (uVar1 << 3 | uVar1 >> 0x3d) ^ (uVar1 << 0x2d | uVar1 >> 0x13));
        lVar6 = lVar6 + 1;
        uVar7 = uVar8;
      } while (lVar6 != 0x40);
      local_98[6] = param_1[6];
      local_98[7] = param_1[7];
      local_98[4] = param_1[4];
      local_98[5] = param_1[5];
      local_98[0] = *param_1;
      local_98[1] = param_1[1];
      local_98[2] = param_1[2];
      local_98[3] = param_1[3];
      lVar6 = 0;
      uVar7 = param_1[6];
      uVar8 = param_1[3];
      uVar1 = param_1[2];
      uVar4 = param_1[1];
      uVar11 = param_1[7];
      do {
        local_98[1] = local_98[0];
        local_98[2] = uVar4;
        local_98[3] = uVar1;
        local_98[6] = local_98[5];
        local_98[5] = local_98[4];
        local_98[7] = uVar7;
        lVar5 = ((local_98[5] << 0x17 | local_98[5] >> 0x29) ^
                (local_98[5] << 0x2e | local_98[5] >> 0x12) ^
                (local_98[5] << 0x32 | local_98[5] >> 0xe)) + uVar11 +
                *(longlong *)((longlong)&DAT_140163270 + lVar6) +
                *(longlong *)((longlong)local_328 + lVar6) +
                (local_98[5] >> 3 ^ local_98[7] ^ (local_98[6] ^ local_98[7]) & local_98[5]);
        local_98[4] = uVar8 + lVar5;
        local_98[0] = (local_98[2] & local_98[3] ^ (local_98[2] ^ local_98[3]) & local_98[1]) +
                      ((local_98[1] << 0x19 | local_98[1] >> 0x27) ^
                      (local_98[1] << 0x1e | local_98[1] >> 0x22) ^
                      (local_98[1] << 0x24 | local_98[1] >> 0x1c)) + lVar5;
        lVar6 = lVar6 + 8;
        uVar7 = local_98[6];
        uVar8 = local_98[3];
        uVar1 = local_98[2];
        uVar4 = local_98[1];
        uVar11 = local_98[7];
      } while (lVar6 != 0x280);
      lVar6 = 0;
      do {
        uVar8 = local_98[lVar6 + 1];
        uVar7 = (param_1 + lVar6)[1];
        param_1[lVar6] = param_1[lVar6] + (local_98[lVar6] ^ uVar2);
        (param_1 + lVar6)[1] = uVar7 + (uVar8 ^ uVar3);
        lVar6 = lVar6 + 2;
      } while (lVar6 != 8);
      puVar9 = local_a8 + 0x10;
      local_98[8] = local_98[8] + 1;
    } while (local_98[8] != local_a0);
  }
  FUN_140016e5c(local_50);
  return param_1;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028b5c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14028b5c2(longlong *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  undefined8 *puVar10;
  uint uVar11;
  byte bVar12;
  ulonglong uVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined8 *local_208 [8];
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [16];
  byte local_1a8 [12];
  byte abStack_19c [4];
  undefined8 local_198;
  byte abStack_18c [4];
  undefined8 local_188;
  ulonglong local_180;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 ***local_b8 [3];
  ulonglong local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 *local_58;
  ulonglong local_50 [2];
  
  local_50[1] = 0xfffffffffffffffe;
  pbVar4 = (byte *)*param_1;
  if ((ulonglong)(param_1[1] - (longlong)pbVar4) < 0x8f) {
    uVar3 = FUN_14028be7f(&DAT_140614d30,"his is the Avocado tab!\nblah blah blah blah blah");
    FUN_14028c09e(uVar3);
    uVar3 = 0;
  }
  else if ((pbVar4[1] == 0x50) && (0x56 < pbVar4[5])) {
    uVar7 = (uint)pbVar4[(ulonglong)(*param_2 == 0) * 5 + 3] << 8 | (uint)*pbVar4 << 0x10;
    uVar7 = (uVar7 + pbVar4[(ulonglong)(*param_2 != 0) * 3 + 6]) * 0x800 ^
            pbVar4[(ulonglong)(*param_2 != 0) * 3 + 6] + uVar7 + 0xb000000;
    uVar7 = uVar7 >> 0x13 ^ uVar7;
    uVar7 = uVar7 << 7 ^ uVar7;
    uVar16 = 0xb;
    uVar17 = 10;
    _DAT_14062918c = uVar7;
    do {
      uVar6 = uVar16;
      uVar11 = (int)(uVar7 << 0xf ^ uVar7) >> 0x15 ^ uVar7;
      uVar7 = uVar7 << 0xf ^ uVar11;
      uVar7 = uVar7 << 9 ^ uVar7;
      pbVar4[uVar17] =
           pbVar4[uVar17] ^
           (char)uVar11 +
           ((char)(uint)((ulonglong)((longlong)(int)uVar7 * 0x83993053) >> 0x27) -
           (char)((longlong)(int)uVar7 * 0x83993053 >> 0x3f)) * '\a';
      pbVar4 = (byte *)*param_1;
      uVar16 = (ulonglong)((int)uVar6 + 1);
      uVar17 = uVar6;
    } while (uVar6 < (ulonglong)(param_1[1] - (longlong)pbVar4));
    FUN_14049add8(pbVar4[0xc]);
    uVar16 = (param_1[1] - *param_1) - 0x14;
    iVar2 = FUN_14049adf0();
    if (iVar2 % 0x7e + 200 <= uVar16) {
      iVar2 = FUN_14049adf0();
      uVar17 = (ulonglong)(iVar2 % 0x7e + 200);
      if (uVar17 <= uVar16) {
        uVar16 = uVar17;
      }
    }
    local_50[0] = 0;
    local_58 = (undefined8 *)FUN_14028c0d2(&DAT_140628d20,param_2);
    lVar15 = *param_1;
    if ((ulonglong)(param_1[1] - lVar15) < 0x11) {
      FUN_1402176ba(&local_198,"SameLine");
                    /* WARNING: Subroutine does not return */
      FUN_14047ea80(&local_198,&DAT_1405b7970);
    }
    bVar14 = *(byte *)(lVar15 + 7);
    bVar12 = *(byte *)(lVar15 + 0xe) ^ *(byte *)(lVar15 + 0xd);
    bVar5 = *(byte *)(lVar15 + 0xc) ^ bVar14;
    bVar1 = (bVar14 - *(byte *)(lVar15 + 0xb)) + *(byte *)(lVar15 + 0xd);
    bVar14 = (byte)(((uint)bVar14 + (uint)*(byte *)(lVar15 + 0xb) * 2) % 0xf6);
    local_5c = CONCAT13((bVar1 < UNK_1404c9163) * UNK_1404c9163 | (bVar1 >= UNK_1404c9163) * bVar1,
                        CONCAT12((bVar5 < UNK_1404c9162) * UNK_1404c9162 |
                                 (bVar5 >= UNK_1404c9162) * bVar5,
                                 CONCAT11((bVar12 < UNK_1404c9161) * UNK_1404c9161 |
                                          (bVar12 >= UNK_1404c9161) * bVar12,
                                          (bVar14 < DAT_1404c9160) * DAT_1404c9160 |
                                          (bVar14 >= DAT_1404c9160) * bVar14)));
    FUN_140213362(&local_198,L"pNonPic");
    local_208[0] = &local_198;
    if (0xf < local_180) {
      local_208[0] = local_198;
    }
    local_98 = (undefined1  [16])0x0;
    local_88 = 0;
    local_b8[0] = (undefined8 ***)((longlong)local_208[0] + local_188);
    FUN_140255dba();
    FUN_14028c9a2(local_98,local_98._8_8_,&local_5c,4);
    puVar10 = local_58;
    if (0xf < (ulonglong)local_58[3]) {
      puVar10 = (undefined8 *)*local_58;
    }
    FUN_14028c9a2(local_98,local_98._8_8_,puVar10,local_58[2]);
    FUN_1402133c2(&local_198);
    uVar17 = local_98._8_8_ - local_98._0_8_;
    local_50[0] = (ulonglong)(0x37fU - (int)(uVar17 * 8) & 0x3ff) + uVar17 * 8 + 0x81 >> 10;
    local_198 = (undefined8 *)0x0;
    local_78 = (undefined1  [16])0x0;
    local_68 = 0;
    FUN_14028cd4e();
    if ((local_50[0] & 0xfffffffffffffff) != 0) {
      uVar7 = 0;
      uVar6 = 0;
      do {
        uVar8 = (ulonglong)uVar7;
        lVar15 = 0;
        uVar13 = 0;
        do {
          uVar13 = uVar13 << 8;
          if (uVar8 + lVar15 < uVar17) {
            uVar13 = uVar13 | *(byte *)(local_98._0_8_ + uVar8 + lVar15);
          }
          else if (uVar17 - uVar8 == lVar15) {
            uVar13 = uVar13 | 0x80;
          }
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 != 8);
        uVar7 = uVar7 + 8;
        *(ulonglong *)(local_78._0_8_ + uVar6 * 8) = uVar13;
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_50[0] << 4);
    }
    *(undefined8 *)(local_78._8_8_ + -0x10) = 0;
    *(ulonglong *)(local_78._8_8_ + -8) = uVar17 * 8;
    local_1b8 = (undefined1  [16])0x0;
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    local_1a8[2] = 0;
    local_1a8[3] = 0;
    local_1a8[4] = 0;
    local_1a8[5] = 0;
    local_1a8[6] = 0;
    local_1a8[7] = 0;
    FUN_140272adc(local_1b8,(longlong)(local_78._8_8_ - local_78._0_8_) >> 3,local_78);
    FUN_14028c126(local_208,local_1b8,local_50);
    FUN_14028c43a(local_b8,local_208);
    ppppuVar9 = local_b8;
    if (0xf < local_a0) {
      ppppuVar9 = (undefined8 ****)local_b8[0];
    }
    thunk_FUN_14021bb5c((longlong)ppppuVar9 + 0xc,(longlong)ppppuVar9 + 0x1c,local_1c8);
    ppppuVar9 = (undefined8 ****)local_b8[0];
    if (local_a0 < 0x10) {
      ppppuVar9 = local_b8;
    }
    thunk_FUN_14021bb5c((longlong)ppppuVar9 + 0x49,(longlong)ppppuVar9 + 0x59,local_d8);
    lVar15 = 0;
    do {
      *(undefined4 *)((longlong)&local_198 + lVar15 * 4) = local_1c8[lVar15];
      lVar15 = lVar15 + 1;
    } while (lVar15 != 4);
    uVar17 = 4;
    do {
      bVar14 = abStack_19c[uVar17 * 4];
      bVar1 = abStack_19c[uVar17 * 4 + 1];
      bVar5 = abStack_19c[uVar17 * 4 + 2];
      bVar12 = abStack_19c[uVar17 * 4 + 3];
      if ((uVar17 & 3) == 0) {
        uVar6 = (ulonglong)bVar14;
        bVar14 = (&DAT_1404ca2d0)[uVar17 >> 2 & 0x3fffffff] ^ (&DAT_1404ca1d0)[bVar1];
        bVar1 = (byte)(&DAT_1404ca1d0)[bVar5] >> 4;
        bVar5 = ~(&DAT_1404ca1d0)[bVar12];
        bVar12 = (&DAT_1404ca1d0)[uVar6] << 1 | (char)(&DAT_1404ca1d0)[uVar6] < '\0';
      }
      *(byte *)((longlong)&local_198 + uVar17 * 4) = bVar14 ^ local_1a8[uVar17 * 4];
      *(byte *)((longlong)&local_198 + uVar17 * 4 + 1) = bVar1 ^ local_1a8[uVar17 * 4 + 1];
      *(byte *)((longlong)&local_198 + uVar17 * 4 + 2) = bVar5 ^ local_1a8[uVar17 * 4 + 2];
      *(byte *)((longlong)&local_198 + uVar17 * 4 + 3) = bVar12 ^ local_1a8[uVar17 * 4 + 3];
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x2c);
    thunk_FUN_14021bb5c(local_d8,&local_c8,&local_e8);
    lVar15 = *param_1;
    if (uVar16 != 0) {
      uVar7 = 0x10;
      uVar17 = 0;
      do {
        if (uVar7 == 0x10) {
          local_c8 = local_e8;
          uStack_c0 = uStack_e0;
          FUN_14028b244(&local_c8,&local_198);
          uVar7 = 0xf;
          do {
            uVar6 = (ulonglong)uVar7;
            if (*(char *)((longlong)&local_e8 + uVar6) != -1) {
              *(char *)((longlong)&local_e8 + uVar6) =
                   *(char *)((longlong)&local_e8 + uVar6) + '\x01';
              uVar7 = 0;
              goto LAB_14028bbc0;
            }
            *(undefined1 *)((longlong)&local_e8 + uVar6) = 0;
            bVar18 = uVar7 != 0;
            uVar7 = uVar7 - 1;
          } while (bVar18);
          uVar7 = 0;
        }
LAB_14028bbc0:
        pbVar4 = (byte *)(lVar15 + 0x14 + uVar17);
        *pbVar4 = *pbVar4 ^ *(byte *)((longlong)&local_c8 + (ulonglong)uVar7);
        uVar17 = uVar17 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar17 < uVar16);
      lVar15 = *param_1;
    }
    lVar15 = thunk_FUN_14021bb5c(lVar15 + 0x8f,param_1[1],lVar15);
    param_1[1] = lVar15;
    FUN_14028c9a2(param_1,*param_1,local_58[4],local_58[5] - local_58[4]);
    FUN_1402133c2(local_b8);
    FUN_1402161ba(local_78);
    FUN_1402161ba(local_98);
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_14028be7f(&DAT_140614da0,"ll");
    FUN_14028c09e(uVar3);
    uVar3 = 0;
  }
  return uVar3;
}


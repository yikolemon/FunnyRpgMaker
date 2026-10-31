/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ab5af */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

byte * FUN_1400ab5af(byte *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  int local_8154;
  int local_8150;
  undefined4 local_814c;
  undefined1 local_8148 [32752];
  byte abStack_158 [12];
  byte abStack_14c [4];
  undefined4 local_148;
  byte abStack_13c [164];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [4];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_50 = param_1;
  FUN_1401366a0(&local_8154,0,0x800c);
  FUN_1400587f4(local_50 + 8,*param_2,param_2[1] - *param_2);
  lVar6 = *(longlong *)(local_50 + 8);
  iVar10 = *(int *)(local_50 + 0x10) - (int)lVar6;
  uVar2 = iVar10 - 0x1f;
  *(uint *)(local_50 + 0x20) = uVar2;
  local_8154 = uVar2 / 3 + 0x47;
  bVar11 = (byte)uVar2 ^ 0x70;
  local_8150 = (uVar2 / 0x4b0) * -0x4b0 + iVar10 + 0x79;
  bVar12 = (char)iVar10 * '\x03' - 8;
  *local_50 = bVar12 ^ (byte)local_8154;
  local_50[1] = (byte)uVar2 + (char)(uVar2 / 0x4b0) * 'P' + bVar11 + 0x98;
  local_50[2] = bVar11 - bVar12;
  local_50[3] = bVar12 * bVar11;
  local_50[4] = *(char *)(lVar6 + 3) + (byte)local_8154;
  local_50[5] = *(char *)(lVar6 + 7) + (char)local_8150;
  local_50[6] = bVar11 + *(char *)(lVar6 + 5);
  local_50[7] = bVar12 + *(char *)(lVar6 + 6);
  *(int *)(local_50 + 0x24) = local_8154;
  *(int *)(local_50 + 0x28) = local_8150;
  local_814c = 0;
  FUN_140117538();
  lVar6 = 0;
  do {
    FUN_14008b59f(&local_8154,local_8148 + lVar6 * 0x400);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  FUN_14008b1ea(local_50,&local_8154,local_88,local_78);
  lVar6 = 0;
  do {
    (&local_148)[lVar6] = local_88[lVar6];
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  uVar4 = 4;
  do {
    bVar12 = abStack_14c[uVar4 * 4];
    bVar11 = abStack_14c[uVar4 * 4 + 1];
    bVar9 = abStack_14c[uVar4 * 4 + 2];
    bVar8 = abStack_14c[uVar4 * 4 + 3];
    if ((uVar4 & 3) == 0) {
      uVar7 = (ulonglong)bVar12;
      bVar12 = (&DAT_1401635f0)[uVar4 >> 2 & 0x3fffffff] ^ (&DAT_1401634f0)[bVar11];
      bVar11 = (byte)(&DAT_1401634f0)[bVar9] >> 4;
      bVar9 = ~(&DAT_1401634f0)[bVar8];
      bVar8 = (&DAT_1401634f0)[uVar7] << 1 | (char)(&DAT_1401634f0)[uVar7] < '\0';
    }
    *(byte *)(&local_148 + uVar4) = bVar12 ^ abStack_158[uVar4 * 4];
    *(byte *)((longlong)&local_148 + uVar4 * 4 + 1) = bVar11 ^ abStack_158[uVar4 * 4 + 1];
    *(byte *)((longlong)&local_148 + uVar4 * 4 + 2) = bVar9 ^ abStack_158[uVar4 * 4 + 2];
    *(byte *)((longlong)&local_148 + uVar4 * 4 + 3) = bVar8 ^ abStack_158[uVar4 * 4 + 3];
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x2c);
  thunk_FUN_1400498e2(local_78,&local_68,&local_98);
  uVar2 = *(uint *)(local_50 + 0x20);
  if ((ulonglong)uVar2 != 0) {
    lVar6 = *(longlong *)(local_50 + 8);
    uVar3 = 0x10;
    uVar4 = 0;
    do {
      if (uVar3 == 0x10) {
        local_68 = local_98;
        uStack_64 = uStack_94;
        uStack_60 = uStack_90;
        uStack_5c = uStack_8c;
        FUN_1400859c5(&local_68,&local_148);
        iVar10 = -0x10;
        pcVar5 = (char *)((longlong)&uStack_8c + 3);
        do {
          if (*pcVar5 != -1) {
            *pcVar5 = *pcVar5 + '\x01';
            uVar3 = 0;
            goto LAB_1400ab8ab;
          }
          *pcVar5 = '\0';
          pcVar5 = pcVar5 + -1;
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0);
        uVar3 = 0;
      }
LAB_1400ab8ab:
      pbVar1 = (byte *)(lVar6 + 0x1e + uVar4);
      *pbVar1 = *pbVar1 ^ *(byte *)((longlong)&local_68 + (ulonglong)uVar3);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar4 < uVar2);
  }
  return local_50;
}


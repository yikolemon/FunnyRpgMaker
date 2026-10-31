/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400635c0 */

void FUN_1400635c0(longlong param_1,longlong param_2,undefined1 (*param_3) [32])

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  FUN_1400b3c00(param_3,0,0x2c8);
  bVar1 = *(byte *)(param_2 + 8);
  param_3[5][0x18] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar5 = 0;
    do {
      *(uint *)(param_3[5] + uVar5 * 4 + 0x1c) =
           (uint)*(ushort *)(param_2 + 0xc + uVar5 * 2) << 0x10;
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  bVar1 = *(byte *)(param_2 + 9);
  param_3[5][0x19] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar5 = 0;
    do {
      *(uint *)(param_3[7] + uVar5 * 4 + 0x14) =
           (uint)*(ushort *)(param_2 + 0x28 + uVar5 * 2) << 0x10;
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  bVar1 = *(byte *)(param_2 + 10);
  param_3[5][0x1a] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar5 = 0;
    do {
      *(uint *)(param_3[8] + uVar5 * 4 + 0x1c) =
           (uint)*(ushort *)(param_2 + 0x3c + uVar5 * 2) << 0x10;
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  bVar1 = *(byte *)(param_2 + 0xb);
  param_3[5][0x1b] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar5 = 0;
    do {
      *(uint *)(param_3[10] + uVar5 * 4 + 0x14) =
           (uint)*(ushort *)(param_2 + 0x58 + uVar5 * 2) << 0x10;
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  *(undefined4 *)(param_3[0xb] + 0x1c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)param_3[0xc] = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_3[0xc] + 4) = *(undefined4 *)(param_2 + 0x74);
  *(uint *)(param_3[0xc] + 8) = (uint)*(ushort *)(param_2 + 0x78);
  *(uint *)(param_3[0xc] + 0xc) = (uint)*(ushort *)(param_2 + 0x7a);
  bVar1 = *(byte *)(param_2 + 0x7c);
  param_3[0xc][0x10] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar5 = 0;
    do {
      *(int *)(param_3[0xc] + uVar5 * 4 + 0x14) = (int)*(short *)(param_2 + 0x80 + uVar5 * 2);
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  bVar1 = *(byte *)(param_2 + 0x7d);
  param_3[0xc][0x11] = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar5 = 0;
    do {
      *(int *)(param_3[0xe] + uVar5 * 4 + 8) = (int)*(short *)(param_2 + 0x9a + uVar5 * 2);
      uVar5 = uVar5 + 1;
    } while (bVar1 != uVar5);
  }
  param_3[0xf][0x1c] = *(undefined1 *)(param_2 + 0x7e);
  *(undefined4 *)(param_3[0x10] + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_3[0x10] + 8) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_3[0x10] + 0xc) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined1 (**) [32])(param_3[0x11] + 8) = param_3;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x5c);
  if (iVar2 != -1) {
    *(int *)param_3[0x16] = iVar2;
    lVar6 = *(longlong *)(param_1 + 0xd0);
    uVar3 = *(uint *)(lVar6 + 0x5c);
    if (uVar3 != 0) {
      do {
        uVar3 = FUN_1400633ff(uVar3);
        *(uint *)(lVar6 + 0x5c) = uVar3;
        lVar6 = *(longlong *)(param_1 + 0xd0);
        uVar3 = *(uint *)(lVar6 + 0x5c);
      } while ((int)uVar3 < 0);
    }
  }
  if (*(int *)param_3[0x16] == 0) {
    uVar4 = (uint)local_34 ^ (uint)local_30 ^ (uint)local_28;
    uVar4 = uVar4 >> 0x14 ^ uVar4 >> 10 ^ uVar4;
    uVar3 = 0x7384;
    if (uVar4 != 0) {
      uVar3 = uVar4;
    }
    *(uint *)param_3[0x16] = uVar3;
  }
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStack_58);
}


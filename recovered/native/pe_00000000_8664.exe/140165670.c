/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140165670 */

void FUN_140165670(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  FUN_1401c5830(param_3,0,0x2c8);
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_3 + 0xb8) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar6 = 0;
    do {
      *(uint *)(param_3 + 0xbc + uVar6 * 4) = (uint)*(ushort *)(param_2 + 0xc + uVar6 * 2) << 0x10;
      uVar6 = uVar6 + 1;
    } while (bVar1 != uVar6);
  }
  bVar1 = *(byte *)(param_2 + 9);
  *(byte *)(param_3 + 0xb9) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar6 = 0;
    do {
      *(uint *)(param_3 + 0xf4 + uVar6 * 4) = (uint)*(ushort *)(param_2 + 0x28 + uVar6 * 2) << 0x10;
      uVar6 = uVar6 + 1;
    } while (bVar1 != uVar6);
  }
  bVar1 = *(byte *)(param_2 + 10);
  *(byte *)(param_3 + 0xba) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar6 = 0;
    do {
      *(uint *)(param_3 + 0x11c + uVar6 * 4) = (uint)*(ushort *)(param_2 + 0x3c + uVar6 * 2) << 0x10
      ;
      uVar6 = uVar6 + 1;
    } while (bVar1 != uVar6);
  }
  bVar1 = *(byte *)(param_2 + 0xb);
  *(byte *)(param_3 + 0xbb) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar6 = 0;
    do {
      *(uint *)(param_3 + 0x154 + uVar6 * 4) = (uint)*(ushort *)(param_2 + 0x58 + uVar6 * 2) << 0x10
      ;
      uVar6 = uVar6 + 1;
    } while (bVar1 != uVar6);
  }
  *(undefined4 *)(param_3 + 0x17c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_3 + 0x180) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_3 + 0x184) = *(undefined4 *)(param_2 + 0x74);
  *(uint *)(param_3 + 0x188) = (uint)*(ushort *)(param_2 + 0x78);
  *(uint *)(param_3 + 0x18c) = (uint)*(ushort *)(param_2 + 0x7a);
  bVar1 = *(byte *)(param_2 + 0x7c);
  *(byte *)(param_3 + 400) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar6 = 0;
    do {
      *(int *)(param_3 + 0x194 + uVar6 * 4) = (int)*(short *)(param_2 + 0x80 + uVar6 * 2);
      uVar6 = uVar6 + 1;
    } while (bVar1 != uVar6);
  }
  bVar1 = *(byte *)(param_2 + 0x7d);
  *(byte *)(param_3 + 0x191) = bVar1;
  if ((ulonglong)bVar1 != 0) {
    uVar6 = 0;
    do {
      *(int *)(param_3 + 0x1c8 + uVar6 * 4) = (int)*(short *)(param_2 + 0x9a + uVar6 * 2);
      uVar6 = uVar6 + 1;
    } while (bVar1 != uVar6);
  }
  *(undefined1 *)(param_3 + 0x1fc) = *(undefined1 *)(param_2 + 0x7e);
  *(undefined4 *)(param_3 + 0x204) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_3 + 0x208) = *(undefined4 *)(param_2 + 0xb8);
  *(undefined4 *)(param_3 + 0x20c) = *(undefined4 *)(param_2 + 0xb4);
  *(longlong *)(param_3 + 0x228) = param_3;
  iVar2 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x5c);
  if (iVar2 != -1) {
    *(int *)(param_3 + 0x2c0) = iVar2;
    lVar7 = *(longlong *)(param_1 + 0xd0);
    if (*(int *)(lVar7 + 0x5c) != 0) {
      do {
        uVar3 = FUN_1401654af();
        *(undefined4 *)(lVar7 + 0x5c) = uVar3;
        lVar7 = *(longlong *)(param_1 + 0xd0);
      } while (*(int *)(lVar7 + 0x5c) < 0);
    }
  }
  if (*(int *)(param_3 + 0x2c0) == 0) {
    uVar4 = (uint)local_34 ^ (uint)local_30 ^ (uint)local_28;
    uVar4 = uVar4 >> 0x14 ^ uVar4 >> 10 ^ uVar4;
    uVar5 = 0x7384;
    if (uVar4 != 0) {
      uVar5 = uVar4;
    }
    *(uint *)(param_3 + 0x2c0) = uVar5;
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}


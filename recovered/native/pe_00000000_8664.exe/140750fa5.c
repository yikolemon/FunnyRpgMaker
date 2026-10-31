/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140750fa5 */

ulonglong FUN_140750fa5(void)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  
  pbVar9 = (byte *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x18);
  uVar8 = *(uint *)(pbVar9 + 0x30);
  bVar1 = *(byte *)(ulonglong)uVar8;
  uVar4 = (uint)(bVar1 >> 3);
  uVar10 = (uint)*(char *)((ulonglong)uVar4 + 0x102b8058);
  iVar5 = uVar10 + ((0x80ff0000U >> uVar4 & 1) != 0);
  *(int *)(pbVar9 + 4) = iVar5;
  uVar4 = uVar8 + iVar5;
  if (*(uint *)(pbVar9 + 0x34) != 0) {
    uVar4 = *(uint *)(pbVar9 + 0x34);
  }
  uVar6 = 0;
  uVar7 = (uint)bVar1;
  if (uVar4 <= uVar8) {
    uVar7 = uVar6;
  }
  if (uVar8 + 1 < uVar4) {
    uVar6 = (uint)*(byte *)(ulonglong)(uVar8 + 1);
  }
  uVar2 = uVar8 + 2;
  if (uVar2 < uVar4) {
    uVar2 = CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)(ulonglong)uVar2);
  }
  else {
    uVar2 = 0;
  }
  if (uVar8 + 3 < uVar4) {
    *(uint *)pbVar9 = CONCAT31((int3)(uVar2 >> 8),*(undefined1 *)(ulonglong)(uVar8 + 3));
  }
  else {
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
  }
  uVar8 = *(uint *)((ulonglong)uVar10 * 4 + 0x102b8078);
  *(uint *)(pbVar9 + 8) = uVar6;
  *(uint *)(pbVar9 + 0x10) = uVar2;
  bVar1 = *pbVar9;
  *(uint *)(pbVar9 + 0xc) = uVar7;
  *(uint *)(pbVar9 + 0x14) = uVar10;
  uVar8 = (bVar1 & 0x3f | (uVar2 & 0x3f) << 6 | (uVar6 & 0x3f) << 0xc | (uVar7 & uVar8) << 0x12) >>
          (*(byte *)((ulonglong)uVar10 * 4 + 0x102b80a0) & 0x1f);
  *(uint *)(ulonglong)*(uint *)(pbVar9 + 0x2c) = uVar8;
  if (((((uVar2 & 0xff) >> 6) * 4 + (uVar6 >> 2 & 0xfffffff0) | (uint)(bVar1 >> 6) |
        (uint)(uVar8 < *(uint *)((ulonglong)uVar10 * 4 + 0x102b808c)) << 6 |
        (uint)(0xffff < uVar8) << 8 | (uint)((uVar8 & 0x7ffff800) == 0xd800) << 7) ^ 0x2a) >>
      (*(byte *)((ulonglong)*(uint *)(pbVar9 + 0x14) * 4 + 0x102b80b4) & 0x1f) == 0) {
    uVar3 = (ulonglong)*(uint *)(pbVar9 + 4);
  }
  else {
    *(ulonglong *)(pbVar9 + -8) =
         (ulonglong)
         (((((uint)(pbVar9[8] != 0) - (uint)(pbVar9[0xc] == 0)) - (uint)(pbVar9[0x10] == 0)) + 3) -
         (uint)(*pbVar9 == '\0'));
    *(undefined8 *)(pbVar9 + -0x10) = *(undefined8 *)pbVar9;
    pbVar9[-0x18] = 0xfa;
    pbVar9[-0x17] = 0x10;
    pbVar9[-0x16] = 0x75;
    pbVar9[-0x15] = 0x40;
    pbVar9[-0x14] = 1;
    pbVar9[-0x13] = 0;
    pbVar9[-0x12] = 0;
    pbVar9[-0x11] = 0;
    uVar3 = FUN_140752553();
    *(undefined4 *)(ulonglong)*(uint *)((ulonglong)((int)(pbVar9 + -0x10) + 8) + 0x2c) = 0xfffd;
  }
  return uVar3;
}


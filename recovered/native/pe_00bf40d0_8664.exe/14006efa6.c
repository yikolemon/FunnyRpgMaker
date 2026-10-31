/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006efa6 */

undefined8 FUN_14006efa6(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((ulonglong)param_2[0x21] < param_1 + 0x14U) {
    FUN_14001cef1(param_2,8);
  }
  uVar6 = *(uint *)(param_1 + 4);
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  iVar5 = (uint)*(byte *)(param_1 + 0x10) * 0x1000000;
  iVar4 = (uint)*(byte *)(param_1 + 0x11) * 0x10000;
  bVar1 = *(byte *)(param_1 + 0x12);
  bVar2 = *(byte *)(param_1 + 0x13);
  uVar8 = iVar4 + iVar5 | (uint)bVar1 << 8 | (uint)bVar2;
  if (((uVar6 < 0x14) || ((uint)((int)param_2[0x21] - (int)param_1) < uVar6)) ||
     (uVar6 - 0x14 >> 1 < uVar8)) {
    FUN_14001cef1(param_2,8);
  }
  if ((0 < (int)param_2[0x22]) && (uVar8 != 0)) {
    lVar7 = 0;
    do {
      uVar3 = *(ushort *)(param_1 + 0x14U + lVar7 * 2);
      if (*(uint *)(param_2 + 0x24) <= (uint)(ushort)(uVar3 << 8 | uVar3 >> 8)) {
        FUN_14001cef1(param_2,0x10);
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 != iVar4 + iVar5 + (uint)CONCAT11(bVar1,bVar2));
  }
  return 0;
}


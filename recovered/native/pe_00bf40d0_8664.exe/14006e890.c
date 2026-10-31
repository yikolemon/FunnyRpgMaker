/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006e890 */

undefined8 FUN_14006e890(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((ulonglong)param_2[0x21] < param_1 + 10U) {
    FUN_14001cef1(param_2,8);
  }
  uVar3 = *(ushort *)(param_1 + 2) << 8 | *(ushort *)(param_1 + 2) >> 8;
  bVar1 = *(byte *)(param_1 + 8);
  bVar2 = *(byte *)(param_1 + 9);
  iVar5 = (uint)bVar1 * 0x100 + (uint)bVar2;
  if (((ulonglong)param_2[0x21] < (ulonglong)uVar3 + param_1) || ((uint)uVar3 < iVar5 * 2 + 10U)) {
    FUN_14001cef1(param_2,8);
  }
  if ((0 < (int)param_2[0x22]) && (iVar5 != 0)) {
    lVar4 = 0;
    do {
      uVar3 = *(ushort *)(param_1 + 10U + lVar4 * 2);
      if (*(uint *)(param_2 + 0x24) <= (uint)(ushort)(uVar3 << 8 | uVar3 >> 8)) {
        FUN_14001cef1(param_2,0x10);
      }
      lVar4 = lVar4 + 1;
    } while ((uint)CONCAT11(bVar1,bVar2) != (uint)lVar4);
  }
  return 0;
}


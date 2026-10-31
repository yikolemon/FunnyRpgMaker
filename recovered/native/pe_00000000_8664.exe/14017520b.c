/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017520b */

undefined8 FUN_14017520b(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x4d8);
  uVar5 = 6;
  if ((lVar6 != 0) && (param_2 < *(ushort *)(param_1 + 0x370))) {
    uVar2 = *(ushort *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)param_2 * 2);
    uVar4 = uVar2 << 8 | uVar2 >> 8;
    uVar2 = *(ushort *)(param_1 + 0x388);
    uVar5 = 8;
    if ((uint)uVar4 + (uint)uVar2 <= (uint)*(ushort *)(lVar6 + 2)) {
      if ((ulonglong)uVar2 == 0) {
        return 0;
      }
      lVar3 = *(longlong *)(param_1 + 0x3a0);
      lVar6 = (ulonglong)uVar4 * 4 + *(longlong *)(lVar6 + 8);
      uVar5 = 0;
      lVar7 = 0;
      do {
        puVar1 = (undefined1 *)(lVar3 + lVar7);
        *puVar1 = *(undefined1 *)(lVar6 + lVar7);
        puVar1[1] = *(undefined1 *)(lVar6 + 1 + lVar7);
        puVar1[2] = *(undefined1 *)(lVar6 + 2 + lVar7);
        puVar1[3] = *(undefined1 *)(lVar6 + 3 + lVar7);
        lVar7 = lVar7 + 4;
      } while (puVar1 + 4 < (undefined1 *)(lVar3 + (ulonglong)uVar2 * 4));
    }
  }
  return uVar5;
}


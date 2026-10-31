/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401708a7 */

ushort FUN_1401708a7(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort uVar6;
  int iVar7;
  
  uVar4 = *param_2 + 1;
  if (uVar4 < 0x10000) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar3 = (uint)*(byte *)(lVar1 + 6) * 0x100 + (uint)*(byte *)(lVar1 + 7);
    if (uVar4 <= uVar3) {
      uVar4 = uVar3;
    }
    uVar2 = (uint)(ushort)(*(ushort *)(lVar1 + 8) << 8 | *(ushort *)(lVar1 + 8) >> 8);
    if (uVar4 - uVar3 < uVar2) {
      puVar5 = (ushort *)(lVar1 + (ulonglong)(uVar4 - uVar3) * 2 + 10);
      do {
        uVar6 = *puVar5 << 8 | *puVar5 >> 8;
        if (uVar6 != 0) goto LAB_140170937;
        if (0xfffe < uVar4) goto LAB_1401708b7;
        iVar7 = uVar4 - CONCAT11(*(byte *)(lVar1 + 6),*(byte *)(lVar1 + 7));
        puVar5 = puVar5 + 1;
        uVar4 = uVar4 + 1;
      } while (iVar7 + 1U < uVar2);
    }
    uVar6 = 0;
    uVar4 = 0;
LAB_140170937:
    *param_2 = uVar4;
  }
  else {
LAB_1401708b7:
    uVar6 = 0;
  }
  return uVar6;
}


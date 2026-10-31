/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140095110 */

ulonglong FUN_140095110(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar1 = *(ushort *)(param_1 + 0x76);
  uVar4 = (uint)*(ulonglong *)(param_1 + 0x60);
  if ((uVar4 >> 0x15 & 1) != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((uVar1 < 0x100) && (bVar3 = (char)uVar1 + 0xbc, bVar3 < 0x34)) {
      uVar2 = 0x77ffe7ff77ffe >> (bVar3 & 0x3f);
    }
    goto LAB_1400951c5;
  }
  if (uVar1 < 0x100) {
    if (uVar1 < 0x2e) {
      if (uVar1 < 0x28) {
        if (uVar1 == 0x22) goto LAB_1400951c8;
        if (uVar1 == 0x24) goto LAB_1400951c0;
        goto LAB_1400951a6;
      }
      if (1 < uVar1 - 0x28) {
        if (uVar1 == 0x2a) goto LAB_1400951c0;
        if (uVar1 != 0x2b) goto LAB_1400951a6;
      }
LAB_1400951aa:
      uVar2 = CONCAT71((int7)(param_2 >> 8),
                       ((byte)param_2 ^ 1) & (byte)(*(ulonglong *)(param_1 + 0x60) >> 0x16));
    }
    else {
      uVar5 = (ulonglong)(uVar1 - 0x3f);
      if (uVar1 - 0x3f < 0x3f) {
        if ((0x7000000000000001U >> (uVar5 & 0x3f) & 1) != 0) goto LAB_1400951aa;
        if ((0xd0000000UL >> (uVar5 & 0x3f) & 1) != 0) goto LAB_1400951c0;
        uVar2 = 0xd0000001;
        if (uVar5 == 0x1d) goto LAB_1400951c5;
      }
      if (uVar1 == 0x2f) {
LAB_1400951c8:
        uVar2 = (ulonglong)(uVar4 >> 0x17 & 1);
        goto LAB_1400951c5;
      }
      if (uVar1 != 0x2e) goto LAB_1400951a6;
LAB_1400951c0:
      uVar2 = param_2 ^ 1;
    }
    uVar2 = uVar2 & 0xffffffff;
  }
  else {
LAB_1400951a6:
    uVar2 = 0;
  }
LAB_1400951c5:
  return uVar2 & 0xffffffffffffff01;
}


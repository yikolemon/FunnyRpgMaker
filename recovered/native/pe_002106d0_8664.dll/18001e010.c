/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001e010 */

ulonglong FUN_18001e010(longlong param_1,uint param_2)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x75);
  uVar3 = (uint)*(ulonglong *)(param_1 + 0x60);
  if ((uVar3 >> 0x15 & 1) != 0) {
    uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((byte)(bVar1 + 0xbc) < 0x34) {
      uVar2 = 0x77ffe7ff77ffe >> (bVar1 + 0xbc & 0x3f);
    }
    goto LAB_18001e0af;
  }
  if (bVar1 < 0x2e) {
    if (bVar1 < 0x28) {
      if (bVar1 != 0x22) {
        if (bVar1 == 0x24) goto LAB_18001e0aa;
LAB_18001e090:
        uVar2 = 0;
        goto LAB_18001e0af;
      }
LAB_18001e0b2:
      uVar2 = (ulonglong)(uVar3 >> 0x17 & 1);
      goto LAB_18001e0af;
    }
    if (1 < bVar1 - 0x28) {
      if (bVar1 == 0x2a) goto LAB_18001e0aa;
      if (bVar1 != 0x2b) goto LAB_18001e090;
    }
LAB_18001e094:
    param_2 = CONCAT31((int3)(param_2 >> 8),
                       ((byte)param_2 ^ 1) & (byte)(*(ulonglong *)(param_1 + 0x60) >> 0x16));
  }
  else {
    uVar4 = (ulonglong)(bVar1 - 0x3f);
    if (bVar1 - 0x3f < 0x3f) {
      if ((0x7000000000000001U >> (uVar4 & 0x3f) & 1) != 0) goto LAB_18001e094;
      if ((0xd0000000UL >> (uVar4 & 0x3f) & 1) != 0) goto LAB_18001e0aa;
      uVar2 = 0xd0000001;
      if (uVar4 == 0x1d) goto LAB_18001e0af;
    }
    if (bVar1 == 0x2f) goto LAB_18001e0b2;
    if (bVar1 != 0x2e) goto LAB_18001e090;
LAB_18001e0aa:
    param_2 = param_2 ^ 1;
  }
  uVar2 = (ulonglong)param_2;
LAB_18001e0af:
  return uVar2 & 0xffffffffffffff01;
}


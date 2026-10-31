/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801073dd */

void FUN_1801073dd(void)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = DAT_180419160;
  lVar2 = *(longlong *)(DAT_180419160 + 0x1628);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x48) != 0)) {
    if ((*(byte *)(DAT_180419160 + 0x12f5) & 4) != 0) {
      FUN_180108520(*(undefined8 *)(lVar2 + 0x428),*(undefined8 *)(DAT_180419160 + 0x2190));
    }
    cVar4 = FUN_1801086f0();
    if (cVar4 == '\0') {
      *(undefined8 *)(lVar3 + 0x2190) = *(undefined8 *)(lVar2 + 0x48);
    }
    if ((~*(uint *)(lVar2 + 0x14) & 0x10200) != 0) {
      puVar1 = (uint *)(*(longlong *)(lVar2 + 0x48) + 4);
      *puVar1 = *puVar1 & 0xffffff7f;
    }
  }
  *(undefined8 *)(lVar3 + 0x1628) = 0;
  return;
}


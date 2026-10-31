/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403188ad */

void FUN_1403188ad(void)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = DAT_14062a630;
  lVar2 = *(longlong *)(DAT_14062a630 + 0x1628);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x48) != 0)) {
    if ((*(byte *)(DAT_14062a630 + 0x12f5) & 4) != 0) {
      FUN_1403199f0(*(undefined8 *)(lVar2 + 0x428),*(undefined8 *)(DAT_14062a630 + 0x2190));
    }
    cVar4 = FUN_140319bc0();
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


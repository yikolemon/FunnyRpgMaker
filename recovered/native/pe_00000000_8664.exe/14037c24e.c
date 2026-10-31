/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037c24e */

void FUN_14037c24e(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(DAT_14062a630 + 0x24f8);
  if (((*(byte *)(lVar2 + 6) & 0x10) == 0) && ((longlong)*(int *)(lVar2 + 0x74) != -1)) {
    lVar3 = *(longlong *)(DAT_14062a630 + 0x1608);
    lVar1 = *(longlong *)(lVar2 + 0x18) + (longlong)*(int *)(lVar2 + 0x74) * 0x74;
    FUN_14037bddf(lVar3,lVar1 + 0x24);
    FUN_1403a6a12(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar3 + 800),
                  *(undefined2 *)(lVar1 + 0x60));
    return;
  }
  return;
}


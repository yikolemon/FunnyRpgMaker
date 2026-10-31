/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403205bf */

void FUN_1403205bf(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = DAT_14062a630;
  *(undefined1 *)(*(longlong *)(DAT_14062a630 + 0x1608) + 0x10b) = 1;
  lVar2 = *(longlong *)(lVar2 + 0x1608);
  FUN_1403a0c20(*(undefined8 *)(lVar2 + 800));
  puVar1 = (undefined8 *)
           (*(longlong *)(*(longlong *)(lVar2 + 800) + 0xa8) + -0x10 +
           (longlong)*(int *)(*(longlong *)(lVar2 + 800) + 0xa0) * 0x10);
  uVar3 = puVar1[1];
  *(undefined8 *)(lVar2 + 0x2b8) = *puVar1;
  *(undefined8 *)(lVar2 + 0x2c0) = uVar3;
  return;
}


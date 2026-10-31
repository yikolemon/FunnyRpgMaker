/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037c192 */

void FUN_14037c192(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  lVar2 = *(longlong *)(DAT_14062a630 + 0x24f8);
  FUN_14037bddf(lVar1,lVar2 + 0x170);
  FUN_1403a6a12(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar1 + 800),
                *(undefined2 *)
                 (*(longlong *)(lVar2 + 0x18) + 0x60 + (longlong)*(int *)(lVar2 + 0x74) * 0x74));
  return;
}


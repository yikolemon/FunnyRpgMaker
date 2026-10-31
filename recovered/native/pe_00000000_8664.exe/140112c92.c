/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112c92 */

void FUN_140112c92(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  FUN_1401128df(lVar1,lVar2 + 0x170);
  FUN_1400e0ab6(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar1 + 800),
                *(undefined2 *)
                 (*(longlong *)(lVar2 + 0x18) + 0x60 + (longlong)*(int *)(lVar2 + 0x74) * 0x74));
  return;
}


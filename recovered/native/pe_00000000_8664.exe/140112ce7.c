/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112ce7 */

void FUN_140112ce7(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(DAT_140f2a910 + 0x24f8);
  if ((*(byte *)(lVar2 + 6) & 0x10) == 0) {
    lVar3 = *(longlong *)(DAT_140f2a910 + 0x1608);
    lVar1 = *(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 0x74;
    FUN_1401128df(lVar3,lVar1 + 0x24);
    FUN_1400e0ab6(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar3 + 800),
                  *(undefined2 *)(lVar1 + 0x60));
    return;
  }
  return;
}


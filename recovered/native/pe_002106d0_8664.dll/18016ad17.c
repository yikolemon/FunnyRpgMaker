/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016ad17 */

void FUN_18016ad17(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(DAT_180419160 + 0x24f8);
  if ((*(byte *)(lVar2 + 6) & 0x10) == 0) {
    lVar3 = *(longlong *)(DAT_180419160 + 0x1608);
    lVar1 = *(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 0x74;
    FUN_18016a90f(lVar3,lVar1 + 0x24);
    FUN_180195542(*(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(lVar3 + 800),
                  *(undefined2 *)(lVar1 + 0x60));
    return;
  }
  return;
}


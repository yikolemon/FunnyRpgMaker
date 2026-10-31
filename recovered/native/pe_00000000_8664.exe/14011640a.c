/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011640a */

undefined8 FUN_14011640a(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x208);
  if (lVar1 != 0) {
    if (param_1 < 0) {
      param_1 = *(int *)(lVar1 + 0xc);
    }
    uVar2 = FUN_140048631(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 0x18),
                          *(undefined4 *)(*(longlong *)(lVar1 + 0x68) + (longlong)param_1 * 0x1c));
    return uVar2;
  }
  return 0;
}


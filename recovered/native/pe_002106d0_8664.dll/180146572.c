/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146572 */

void FUN_180146572(longlong param_1,uint param_2)

{
  undefined1 uVar1;
  
  FUN_180146604(param_1,*(undefined8 *)(param_1 + 8),param_2);
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_180146d7e(param_1);
  uVar1 = 0;
  if ((((param_2 & 0xffbffffb) != 0x200000) &&
      ((6 < param_2 - 0x200006 || ((0x49U >> (param_2 - 0x200006 & 0x1f) & 1) == 0)))) &&
     ((6 < param_2 - 0x600006 || ((0x49U >> (param_2 - 0x600006 & 0x1f) & 1) == 0)))) {
    uVar1 = 1;
    if ((((param_2 & 0xffbfffff) != 0x20000d) && ((param_2 & 0xffbffffb) != 0x200001)) &&
       (1 < (param_2 & 0xffbfffff) - 0x200007)) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x76) = uVar1;
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b67dd */

undefined4 FUN_1408b67dd(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1408cc29d();
  *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4) =
       *(undefined4 *)(lVar1 + 0x4c);
  FUN_1408cc7ed();
  return *(undefined4 *)(ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4)
  ;
}


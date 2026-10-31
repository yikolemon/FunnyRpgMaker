/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c712f */

undefined4 FUN_1408c712f(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1408cf0c9();
  *(undefined1 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4) = uVar1;
  uVar2 = FUN_1408c6f24();
  FUN_1408cf1b2();
  return uVar2;
}


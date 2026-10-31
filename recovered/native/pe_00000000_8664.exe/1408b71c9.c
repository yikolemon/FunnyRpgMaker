/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b71c9 */

ulonglong FUN_1408b71c9(int *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 == 0) {
    uVar1 = (ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
    *(undefined1 *)(uVar1 + 0x1c) = 1;
    *(undefined4 *)(uVar1 + 0x18) = 0x16;
    uVar1 = FUN_1408cbf04();
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar1 = FUN_1408b698a();
  }
  return uVar1;
}


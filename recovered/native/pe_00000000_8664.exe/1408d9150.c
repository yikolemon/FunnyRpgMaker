/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d9150 */

int FUN_1408d9150(void)

{
  undefined2 in_FPUStatusWord;
  
  *(undefined2 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4) = in_FPUStatusWord;
  return (int)*(short *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) - 4);
}


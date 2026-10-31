/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b7f8f */

bool FUN_1408b7f8f(int *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = (ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
    *(undefined1 *)(uVar2 + 0x1c) = 1;
    *(undefined4 *)(uVar2 + 0x18) = 0x16;
    FUN_1408cbf04();
  }
  return iVar1 != 0;
}


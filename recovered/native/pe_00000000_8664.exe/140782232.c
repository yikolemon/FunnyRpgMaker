/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140782232 */

ulonglong FUN_140782232(longlong param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar3 = 0;
    do {
      uVar1 = (ulonglong)*(uint *)(*(uint *)(param_1 + 0x2c) + uVar3);
      if (*(int *)(uVar1 + 8) == param_2) {
        return uVar1;
      }
      uVar2 = (int)uVar3 + 4;
      uVar3 = (ulonglong)uVar2;
    } while (*(int *)(param_1 + 0x24) << 2 != uVar2);
  }
  return 0;
}


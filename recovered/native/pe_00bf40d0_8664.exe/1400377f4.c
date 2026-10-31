/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400377f4 */

void FUN_1400377f4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_1 + 0x8f8);
  if ((uVar2 != 0) && ((ulonglong)*(uint *)(param_1 + 0x8f0) != 0)) {
    uVar1 = uVar2 + (ulonglong)*(uint *)(param_1 + 0x8f0) * 0x48;
    do {
      if (param_2 < *(int *)(uVar2 + 8)) {
        *(byte *)(uVar2 + 0xc) = *(byte *)(uVar2 + 0xc) | 0x10;
      }
      uVar2 = uVar2 + 0x48;
    } while (uVar2 < uVar1);
  }
  return;
}


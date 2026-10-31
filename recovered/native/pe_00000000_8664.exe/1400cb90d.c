/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cb90d */

void FUN_1400cb90d(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(DAT_140f2a910 + 0x2570);
  iVar2 = -1;
  if ((uVar1 <= param_2) && (param_2 < uVar1 + (longlong)*(int *)(DAT_140f2a910 + 0x2568) * 0xb0)) {
    iVar2 = (int)(param_2 - uVar1 >> 4) * -0x45d1745d;
    param_2 = 0;
  }
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar2;
  return;
}


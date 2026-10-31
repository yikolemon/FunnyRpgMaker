/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801529dd */

void FUN_1801529dd(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = *(ulonglong *)(DAT_180419160 + 0x2570);
  iVar2 = -1;
  if ((uVar1 <= param_2) && (param_2 < uVar1 + (longlong)*(int *)(DAT_180419160 + 0x2568) * 0xb0)) {
    iVar2 = (int)(param_2 - uVar1 >> 4) * -0x45d1745d;
    param_2 = 0;
  }
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar2;
  return;
}


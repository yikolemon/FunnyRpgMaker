/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001ca4d */

void FUN_14001ca4d(longlong param_1)

{
  short *psVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (*(short *)(param_1 + 0x60) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    do {
      psVar1 = (short *)(*(longlong *)(param_1 + 0x78) + uVar3 * 2);
      *psVar1 = *psVar1 + *(short *)(param_1 + 0x1a);
      uVar3 = uVar3 + 1;
      uVar2 = *(ushort *)(param_1 + 0x60);
    } while (uVar3 < uVar2);
  }
  *(uint *)(param_1 + 0x18) =
       CONCAT22(*(short *)(param_1 + 0x62) +
                (short)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x10),
                uVar2 + (short)*(undefined8 *)(param_1 + 0x18));
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x98);
  FUN_14001ca28(param_1);
  return;
}


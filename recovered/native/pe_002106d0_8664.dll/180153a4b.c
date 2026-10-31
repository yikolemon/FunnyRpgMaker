/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180153a4b */

ulonglong FUN_180153a4b(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 200);
    FUN_1801088af(uVar1);
    return (ulonglong)uVar1;
  }
  uVar2 = FUN_180106d4e(*(undefined8 *)(DAT_180419160 + 0x1608),param_1,0);
  return uVar2;
}


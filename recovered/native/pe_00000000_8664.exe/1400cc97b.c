/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cc97b */

ulonglong FUN_1400cc97b(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 200);
    FUN_140081bc7(uVar1);
    return (ulonglong)uVar1;
  }
  uVar2 = FUN_140080066(*(undefined8 *)(DAT_140f2a910 + 0x1608),param_1,0);
  return uVar2;
}


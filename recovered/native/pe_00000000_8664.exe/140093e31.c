/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140093e31 */

void FUN_140093e31(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 >> 10 & 1) == 0) {
    uVar1 = FUN_140080066(*(undefined8 *)(DAT_140f2a910 + 0x1608),param_1,0);
  }
  FUN_140081f3e(uVar1,param_2);
  return;
}


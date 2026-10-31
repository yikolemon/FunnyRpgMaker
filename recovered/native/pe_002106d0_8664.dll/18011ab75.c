/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011ab75 */

void FUN_18011ab75(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 >> 10 & 1) == 0) {
    uVar1 = FUN_180106d4e(*(undefined8 *)(DAT_180419160 + 0x1608),param_1,0);
  }
  FUN_180108c26(uVar1,param_2);
  return;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140030874 */

uint FUN_140030874(longlong param_1,uint *param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  
  uVar1 = *param_2;
  if (param_3 != 0) {
    FUN_14001c1d8(**(longlong **)(param_1 + 0x30),uVar1,0x803,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return uVar1;
}


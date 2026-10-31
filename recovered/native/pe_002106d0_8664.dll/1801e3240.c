/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e3240 */

undefined4 FUN_1801e3240(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  if (param_3 != 0) {
    FUN_1801c9800(**(undefined8 **)(param_1 + 0x30),uVar1,0x803,param_3);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  return uVar1;
}


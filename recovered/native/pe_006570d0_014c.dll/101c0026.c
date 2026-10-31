/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c0026 */

void FUN_101c0026(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    FUN_101bffad(param_1);
    FUN_101c0017(uVar1,param_1);
  }
  return;
}


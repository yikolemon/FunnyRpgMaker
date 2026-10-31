/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800181b0 */

longlong FUN_1800181b0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = (**(code **)*puVar1)(puVar1,param_1);
    *(undefined8 *)(param_1 + 0x38) = uVar2;
  }
  return param_1;
}


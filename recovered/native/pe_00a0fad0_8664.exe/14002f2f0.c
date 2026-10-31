/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002f2f0 */

longlong FUN_14002f2f0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)(param_2 + 0x38)) {
    FUN_14000eeca(puVar1);
    *puVar1 = *(undefined8 *)(param_2 + 0x38);
    puVar1[1] = *(undefined8 *)(param_2 + 0x40);
    puVar1[2] = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  FUN_140030430(param_1,param_2);
  return param_1;
}


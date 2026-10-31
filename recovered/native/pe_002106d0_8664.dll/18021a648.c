/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021a648 */

undefined1 FUN_18021a648(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[3];
  if (puVar1 < (undefined1 *)param_1[2]) {
    param_1[3] = puVar1 + 1;
    uVar2 = *puVar1;
  }
  else {
    FUN_180219adc(*param_1,0x55);
    uVar2 = 0;
  }
  return uVar2;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067c84 */

undefined1 FUN_140067c84(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined1 *)param_1[3];
  if (puVar1 < (undefined1 *)param_1[2]) {
    param_1[3] = puVar1 + 1;
    uVar2 = *puVar1;
  }
  else {
    FUN_140067118((int *)*param_1,0x55);
    uVar2 = 0;
  }
  return uVar2;
}


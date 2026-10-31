/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015aab4 */

undefined8 FUN_14015aab4(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1401299f6(*(undefined8 *)(param_1 + 8),"truetype");
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0xb;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
    uVar2 = 0;
  }
  return uVar2;
}


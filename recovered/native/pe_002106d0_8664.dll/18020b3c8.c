/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020b3c8 */

undefined8 FUN_18020b3c8(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1801caa22(*(undefined8 *)(param_1 + 8),"truetype");
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0xb;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = *puVar1;
    uVar2 = 0;
  }
  return uVar2;
}


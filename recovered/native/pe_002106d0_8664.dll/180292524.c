/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180292524 */

undefined8 FUN_180292524(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_18027e66c();
    *puVar1 = 0x16;
    FUN_180290a50();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_180421318;
    uVar2 = 0;
  }
  return uVar2;
}


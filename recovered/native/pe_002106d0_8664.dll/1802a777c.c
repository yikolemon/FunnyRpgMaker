/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a777c */

undefined8 FUN_1802a777c(undefined4 *param_1)

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
    *param_1 = DAT_1804218cc;
    uVar2 = 0;
  }
  return uVar2;
}


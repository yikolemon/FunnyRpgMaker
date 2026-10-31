/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140122884 */

undefined8 FUN_140122884(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_140113dd4();
    *puVar1 = 0x16;
    FUN_140120ee8();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_1403550f8;
    uVar2 = 0;
  }
  return uVar2;
}


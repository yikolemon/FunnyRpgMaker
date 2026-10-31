/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401154cc */

undefined8 FUN_1401154cc(undefined4 *param_1)

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
    *param_1 = DAT_140355658;
    uVar2 = 0;
  }
  return uVar2;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b8c4c */

undefined8 FUN_1404b8c4c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_14048fb3c();
    *puVar1 = 0x16;
    FUN_1404a1f20();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_140632d9c;
    uVar2 = 0;
  }
  return uVar2;
}


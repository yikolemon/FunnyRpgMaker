/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401b00c4 */

undefined8 FUN_1401b00c4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_14019e8cc();
    *puVar1 = 0x16;
    FUN_1401ae640();
    uVar2 = 0x16;
  }
  else {
    *param_1 = DAT_140f32cc8;
    uVar2 = 0;
  }
  return uVar2;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a4c38 */

undefined8 FUN_1401a4c38(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1401ae820(0,0,0,0,0,param_2);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    FUN_140193154();
    uVar1 = FUN_1401a4a58(param_1,param_2);
    FUN_140193160(param_1);
  }
  return uVar1;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a3f1c */

undefined2 FUN_1401a3f1c(undefined2 param_1,longlong param_2,longlong param_3)

{
  undefined2 uVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_3 + 0x30) = 1;
    *(undefined4 *)(param_3 + 0x2c) = 0x16;
    FUN_1401ae820(0,0,0,0,0,param_3);
    uVar1 = 0xffff;
  }
  else {
    FUN_140193154(param_2);
    uVar1 = FUN_1401a3d88(param_1,param_2,param_3);
    FUN_140193160(param_2);
  }
  return uVar1;
}


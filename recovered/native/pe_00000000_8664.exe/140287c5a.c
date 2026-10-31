/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140287c5a */

longlong FUN_140287c5a(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_14044e360(*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 8) = uVar1;
  if (param_3 != 0) {
    uVar2 = FUN_14021e0a0(&DAT_1406293b0);
    FUN_140450730(uVar1,param_3,uVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x20) = 0;
    FUN_140287d08(*(longlong *)(param_1 + 8) + 0x28,"(in Lines)");
  }
  return param_1;
}


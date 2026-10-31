/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140038216 */

undefined8 Catch_140038216(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0xa0) + 0x38) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 8))();
    FUN_1400027d2(param_2 + 0x60,uVar1);
    FUN_140038f90(*(undefined8 *)(param_2 + 0xa8),param_2 + 0x60);
    FUN_14000109c(param_2 + 0x60);
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 8))();
    *(undefined8 *)(param_2 + 0x60) = uVar1;
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x38);
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(longlong *)(param_2 + 0xa0) + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0x1cc;
    *(longlong *)(param_2 + 0x48) = param_2 + 0x60;
    *(char **)(param_2 + 0x50) = "{} [{}({})]";
    *(undefined8 *)(param_2 + 0x58) = 0xb;
    FUN_140039194(param_2 + 0x20,param_2 + 0x50,param_2 + 0x40);
    FUN_140038f90(*(undefined8 *)(param_2 + 0xa8),param_2 + 0x20);
    FUN_14000109c(param_2 + 0x20);
  }
  return 0x1400381cd;
}


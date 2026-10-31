/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003a04e */

undefined8 Catch_14003a04e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (**(longlong **)(param_2 + 600) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x270) + 8))();
    FUN_1400027d2(param_2 + 0x210,uVar1);
    FUN_140038f90(*(undefined8 *)(param_2 + 0x260),param_2 + 0x210);
    FUN_14000109c(param_2 + 0x210);
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x270) + 8))();
    *(undefined8 *)(param_2 + 0x210) = uVar1;
    *(undefined8 *)(param_2 + 0x220) = **(undefined8 **)(param_2 + 600);
    *(undefined4 *)(param_2 + 0x230) = *(undefined4 *)(*(undefined8 **)(param_2 + 600) + 1);
    *(undefined8 *)(param_2 + 0x140) = 0x1cc;
    *(undefined8 **)(param_2 + 0x148) = (undefined8 *)(param_2 + 0x210);
    *(char **)(param_2 + 0x150) = "{} [{}({})]";
    *(undefined8 *)(param_2 + 0x158) = 0xb;
    FUN_140039194(param_2 + 400);
    FUN_140038f90(*(undefined8 *)(param_2 + 0x260),param_2 + 400);
    FUN_14000109c(param_2 + 400);
  }
  return 0x140039fb3;
}


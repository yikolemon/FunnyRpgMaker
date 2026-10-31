/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180059e92 */

undefined8 Catch_180059e92(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (**(longlong **)(param_2 + 600) == 0) {
    uVar1 = (**(code **)(**(longlong **)(param_2 + 0x270) + 8))();
    FUN_180001e92(param_2 + 0x210,uVar1);
    FUN_1800432de(*(undefined8 *)(param_2 + 0x260),param_2 + 0x210);
    FUN_180001ef2(param_2 + 0x210);
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
    FUN_1800434ea(param_2 + 400);
    FUN_1800432de(*(undefined8 *)(param_2 + 0x260),param_2 + 400);
    FUN_180001ef2(param_2 + 400);
  }
  return 0x180059df8;
}


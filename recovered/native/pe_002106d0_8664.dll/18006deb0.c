/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006deb0 */

void Catch_18006deb0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x108) + 8))();
  *(undefined8 *)(param_2 + 0xb0) = uVar1;
  FUN_18006ad6e(&DAT_180417b78,param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x60) = "Error while processing: {}\n{}";
  *(undefined8 *)(param_2 + 0x68) = 0x1d;
  FUN_18006f8f2(param_2 + 0x90,(undefined8 *)(param_2 + 0x60),param_2 + 0x70,param_2 + 0xb0);
  FUN_18006f972(param_2 + 0x28,param_2 + 0x90);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(param_2 + 0x28,&DAT_1803a63b0);
}


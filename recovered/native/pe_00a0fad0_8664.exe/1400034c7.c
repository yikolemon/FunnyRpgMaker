/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400034c7 */

undefined8 Catch_1400034c7(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1400052b8(&PTR_DAT_1401c9740,"Invalid package version index - ");
  uVar1 = FUN_1400058b9(uVar1,param_2 + 0x730);
  FUN_1400054d7(uVar1);
  uVar1 = FUN_1400052b8(&PTR_DAT_1401c9740,"Error: ");
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x8d0) + 8))();
  uVar1 = FUN_1400052b8(uVar1,uVar2);
  FUN_1400054d7(uVar1);
  return 0x140002dcb;
}


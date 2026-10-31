/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140003eff */

undefined8 Catch_140003eff(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1400052b8(&PTR_DAT_1401c9740,"An error occurred: ");
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x8c8) + 8))();
  uVar1 = FUN_1400052b8(uVar1,uVar2);
  FUN_1400054d7(uVar1);
  *(undefined4 *)(param_2 + 0x8ac) = 0xffffffff;
  return 0x140003055;
}


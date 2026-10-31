/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400754aa */

undefined8 Catch_1400754aa(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x3c8) + 8))();
  uVar1 = FUN_1400052b8(&PTR_DAT_1401c9740,uVar1);
  FUN_1400054d7(uVar1);
  return 0x140074f43;
}


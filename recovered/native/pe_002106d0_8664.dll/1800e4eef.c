/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e4eef */

undefined * Catch_1800e4eef(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x6260) + 8))();
  FUN_1800e6fba(param_2 + 0x40,3,&DAT_1803641dd,uVar1);
  FUN_1800e6f54(&DAT_180418b08,param_2 + 0x40);
  FUN_1800e5430(param_2 + 0x40);
  return &DAT_1800e4006;
}


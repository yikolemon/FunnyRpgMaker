/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001e268 */

void Catch_14001e268(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x358) + 8))();
  FUN_14000169c(param_2 + 0xe0,uVar1);
  FUN_140028848(param_2 + 0x30,param_2 + 0xe0,0x6f);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(param_2 + 0x30,&DAT_14017a358);
}


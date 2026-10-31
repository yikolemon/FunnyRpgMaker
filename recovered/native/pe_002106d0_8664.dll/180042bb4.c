/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180042bb4 */

undefined8 *
FUN_180042bb4(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = spdlog::logger::vftable;
  puVar2 = param_1 + 1;
  FUN_180003216(puVar2,param_2 + 8,param_3,param_4,puVar2);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_18004283a(param_1 + 5,*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 0x28) >> 4,
                param_2 + 0x28,param_2 + 0x30,puVar2,param_1 + 5);
  puVar1 = (undefined4 *)FUN_1800188ac(param_2 + 0x40);
  *(undefined4 *)(param_1 + 8) = *puVar1;
  puVar1 = (undefined4 *)FUN_1800188ac(param_2 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x44) = *puVar1;
  FUN_1800181b0(param_1 + 9,param_2 + 0x48);
  FUN_180042d2a(param_1 + 0x11,param_2 + 0x88);
  return param_1;
}


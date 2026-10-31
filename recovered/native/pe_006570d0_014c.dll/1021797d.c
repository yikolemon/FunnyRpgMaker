/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021797d */

void __fastcall FUN_1021797d(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,param_3,param_2,0);
  if (iVar1 == 0) {
    FUN_101c4f57(param_2,&DAT_10322028,param_1 + 0xa0);
  }
  return;
}


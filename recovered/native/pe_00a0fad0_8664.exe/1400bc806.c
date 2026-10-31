/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bc806 */

undefined8 Catch_1400bc806(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140052e4f(&DAT_1401d49b0);
  uVar1 = FUN_1400ac2d3(uVar1,"Error while processing: ");
  uVar1 = FUN_1400ac5a3(uVar1,&DAT_1401cc780);
  uVar1 = FUN_140052e4f(uVar1);
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x78) + 8))();
  uVar1 = FUN_1400ac2d3(uVar1,uVar2);
  FUN_140052e4f(uVar1);
  return 0x1400bc7f6;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007d7a0 */

undefined8 Catch_14007d7a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400554d2();
  FUN_14000169c(param_2 + 0x740,"failed_msg");
  uVar1 = FUN_1400aebe4(uVar1,param_2 + 0x740);
  FUN_140052d74(param_2 + 0x570,&DAT_1401cc970,uVar1);
  FUN_140052e4f(param_2 + 0x580);
  FUN_140052e84(param_2 + 0x570);
  FUN_1400017de(param_2 + 0x740);
  FUN_14007de26(param_2 + 0x570,&DAT_1401cc978,"Error processing CommonEvent.dat: ");
  uVar1 = (**(code **)(**(longlong **)(param_2 + 0x778) + 8))();
  FUN_1400ac2d3(param_2 + 0x580,uVar1);
  FUN_140052e4f(param_2 + 0x580);
  FUN_140052e84(param_2 + 0x570);
  return 0x14007d3d3;
}


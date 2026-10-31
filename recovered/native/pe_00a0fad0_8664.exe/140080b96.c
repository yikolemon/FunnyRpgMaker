/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140080b96 */

undefined8 Catch_140080b96(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x1c0) + 8))();
  FUN_14000169c(param_2 + 0x170,uVar2);
  FUN_140005131(param_2 + 0x150,param_2 + 0x170);
  *(undefined8 *)(param_2 + 0x120) = L"ERROR: {}";
  *(undefined8 *)(param_2 + 0x128) = 9;
  FUN_140052dd3(param_2 + 0x130,(undefined8 *)(param_2 + 0x120),param_2 + 0x150);
  FUN_140052d74(param_2 + 0x20,&DAT_1401cc978,param_2 + 0x130);
  FUN_140052e4f(param_2 + 0x30);
  FUN_140052e84(param_2 + 0x20);
  FUN_140005242(param_2 + 0x130);
  FUN_140005242(param_2 + 0x150);
  FUN_1400017de(param_2 + 0x170);
  puVar1 = *(undefined8 **)(param_2 + 0x1b0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return 0x140080b57;
}


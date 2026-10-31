/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180012f3e */

undefined8 Catch_180012f3e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_180013990(param_2 + 0xb0,9);
  *(undefined1 *)(param_2 + 0x184) = 1;
  plVar1 = *(longlong **)(param_2 + 400);
  uVar2 = (**(code **)(*plVar1 + 8))();
  *(undefined8 *)(param_2 + 0xa8) = uVar2;
  *(undefined8 *)(param_2 + 0x78) = "json parse error: {} at {}";
  *(undefined8 *)(param_2 + 0x80) = 0x1a;
  *(undefined1 *)(param_2 + 0x184) = 1;
  FUN_180013d20(param_2 + 0x88,(undefined8 *)(param_2 + 0x78),(undefined8 *)(param_2 + 0xa8),
                plVar1 + 3);
  *(undefined1 *)(param_2 + 0x185) = 1;
  FUN_180013bfa(param_2 + 0xc0,param_2 + 0x88);
  FUN_180013818(*(undefined8 *)(param_2 + 0x178),param_2 + 0xb0);
  FUN_180013902(param_2 + 0xb0);
  *(undefined1 *)(param_2 + 0x185) = 0;
  FUN_180001ef2(param_2 + 0x88);
  *(undefined1 *)(param_2 + 0x184) = 0;
  return 0x180012bda;
}


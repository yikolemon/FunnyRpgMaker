/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e9574 */

undefined4 *
FUN_1800e9574(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  *param_1 = 0x3306b;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x802] = 3000;
  puVar3 = param_1;
  uVar1 = _Xtime_get_ticks();
  *(undefined8 *)(param_1 + 0x804) = uVar1;
  puVar2 = param_1 + 0x806;
  *(undefined8 *)(param_1 + 0x814) = 0;
  *(undefined1 *)(puVar3 + 1) = param_2;
  puVar3[0x802] = param_3;
  puVar4 = puVar3;
  uVar1 = _Xtime_get_ticks();
  *(undefined8 *)(puVar3 + 0x804) = uVar1;
  FUN_1802a89a0((longlong)puVar3 + 5,0,0x2000,param_4,puVar2,puVar4,uVar5);
  return puVar4;
}


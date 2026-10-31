/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf57c */

undefined8 FUN_1800cf57c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = param_1;
  FUN_1800cfa6d();
  FUN_18023ea60();
  plVar1 = *(longlong **)(param_1 + 0x40);
  lVar3 = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,plVar1 != (longlong *)(param_1 + 8),param_3,param_4,lVar2,param_1,uVar4);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  thunk_FUN_1802464a0(lVar3,0x50);
  return 0;
}


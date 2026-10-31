/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008c1de */

void FUN_14008c1de(longlong *param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    FUN_1400587c0();
    lVar1 = *param_1;
    thunk_FUN_1401366a0(lVar1,*param_3,param_2,param_4,param_1,uVar2);
    param_1[1] = lVar1 + param_2;
  }
  return;
}


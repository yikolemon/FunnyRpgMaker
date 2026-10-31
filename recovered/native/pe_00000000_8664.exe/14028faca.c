/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028faca */

void FUN_14028faca(longlong *param_1,longlong param_2,undefined1 *param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_2 != 0) {
    FUN_1402276a6();
    lVar1 = *param_1;
    thunk_FUN_1404b9e70(lVar1,*param_3,param_2,param_4,param_1,uVar2);
    param_1[1] = lVar1 + param_2;
  }
  return;
}


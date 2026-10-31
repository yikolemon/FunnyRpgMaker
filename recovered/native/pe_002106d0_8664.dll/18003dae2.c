/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003dae2 */

void FUN_18003dae2(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_4[1];
  uVar3 = lVar2 + 1;
  if ((ulonglong)param_4[2] < uVar3) {
    (*(code *)param_4[3])(param_4);
    lVar2 = param_4[1];
    uVar3 = lVar2 + 1;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  param_4[1] = uVar3;
  *(undefined1 *)(*param_4 + lVar2) = uVar1;
  return;
}


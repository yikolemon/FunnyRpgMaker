/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017d619 */

void FUN_18017d619(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,uint param_5)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = 0;
    do {
      if (0 < (int)param_5) {
        uVar1 = *(undefined1 *)(param_2 + uVar3);
        uVar2 = 0;
        do {
          *(undefined1 *)(param_1 + uVar2) = uVar1;
          uVar2 = uVar2 + 1;
        } while (param_5 != uVar2);
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + (ulonglong)param_5;
    } while (uVar3 != param_4);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140021ef1 */

void FUN_140021ef1(longlong *param_1,undefined *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0 && param_1 != (longlong *)0x0) {
    lVar2 = *param_1;
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      if (param_2 != (undefined *)0x0) {
        (*(code *)param_2)(param_3,*(undefined8 *)(lVar2 + 0x10),param_4);
      }
      FUN_14001c53d(param_3,lVar2);
      lVar2 = lVar1;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cfaa6 */

undefined8 FUN_1801cfaa6(longlong *param_1,code *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = 6;
  if (param_2 != (code *)0x0 && param_1 != (longlong *)0x0) {
    lVar3 = *param_1;
    do {
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(lVar3 + 8);
      uVar2 = (*param_2)(lVar3,param_3);
      lVar3 = lVar1;
    } while ((int)uVar2 == 0);
  }
  return uVar2;
}


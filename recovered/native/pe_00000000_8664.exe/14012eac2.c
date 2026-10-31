/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012eac2 */

void FUN_14012eac2(longlong *param_1,code *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0 && param_1 != (longlong *)0x0) {
    lVar2 = *param_1;
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      if (param_2 != (code *)0x0) {
        (*param_2)(param_3,*(undefined8 *)(lVar2 + 0x10),param_4);
      }
      FUN_140128b39(param_3,lVar2);
      lVar2 = lVar1;
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


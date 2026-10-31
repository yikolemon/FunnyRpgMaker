/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bf0d9 */

void FUN_1400bf0d9(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  while ((param_3 < param_2 &&
         (lVar3 = param_2 + -1 >> 1,
         *(ulonglong *)(param_1 + 0x20 + lVar3 * 0x28) < *(ulonglong *)(param_4 + 0x20)))) {
    lVar1 = param_1 + lVar3 * 0x28;
    lVar2 = param_1 + param_2 * 0x28;
    FUN_14000ff1e(lVar2,lVar1);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
    param_2 = lVar3;
  }
  param_1 = param_1 + param_2 * 0x28;
  FUN_14000ff1e(param_1,param_4);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_4 + 0x20);
  return;
}


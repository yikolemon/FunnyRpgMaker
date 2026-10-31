/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140069279 */

void FUN_140069279(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = param_1[4];
  if (lVar2 == param_1[3]) {
    uVar1 = FUN_1400691ab(param_1,lVar2 * 2 + 0x10);
    if ((char)uVar1 == '\0') {
      return;
    }
    lVar2 = param_1[4];
  }
  FUN_1400b3550((undefined8 *)(lVar2 * param_1[2] + param_1[6]),param_2,param_1[2]);
  param_1[4] = param_1[4] + 1;
  return;
}


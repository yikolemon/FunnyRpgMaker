/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007adb1 */

undefined4 * FUN_1007adb1(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = FUN_1007adfa(param_3);
  if (cVar3 == '\0') {
    if (param_2 != 0) {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      do {
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1 = param_1 + 2;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else {
    FUN_1007ae07(param_1,param_2);
    param_1 = param_1 + param_2 * 2;
  }
  return param_1;
}


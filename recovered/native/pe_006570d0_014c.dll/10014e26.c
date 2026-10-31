/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10014e26 */

uint __thiscall FUN_10014e26(undefined4 *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  size_t sVar2;
  int iVar3;
  
  sVar2 = _strlen(param_2);
  uVar1 = param_1[4];
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  if (uVar1 - sVar2 < param_3 || uVar1 < sVar2) {
    param_3 = 0xffffffff;
  }
  else if (sVar2 != 0) {
    iVar3 = FUN_10004e4d(param_3 + (int)param_1,uVar1 + (int)param_1,param_2,sVar2);
    param_3 = 0xffffffff;
    if (iVar3 != uVar1 + (int)param_1) {
      param_3 = iVar3 - (int)param_1;
    }
  }
  return param_3;
}


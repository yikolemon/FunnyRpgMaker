/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cc8d6 */

longlong FUN_1801cc8d6(longlong param_1,uint param_2,uint param_3,uint param_4,longlong param_5,
                      int *param_6)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  if ((int)(param_3 | param_2 | param_4) < 0) {
    iVar2 = 6;
  }
  else if ((param_2 == 0) || (param_4 == 0)) {
    FUN_1801c9b65();
    iVar2 = 0;
    param_5 = 0;
  }
  else {
    iVar2 = 10;
    if ((int)param_4 <= (int)(0x7fffffff / (ulonglong)param_2)) {
      if (param_3 == 0) {
        param_5 = (**(code **)(param_1 + 8))(param_1,param_4 * param_2);
        bVar3 = param_5 == 0;
      }
      else {
        lVar1 = (**(code **)(param_1 + 0x18))(param_1,param_3 * param_2,param_4 * param_2,param_5);
        bVar3 = lVar1 == 0;
        if (!bVar3) {
          param_5 = lVar1;
        }
      }
      iVar2 = (uint)bVar3 << 6;
    }
  }
  *param_6 = iVar2;
  return param_5;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2a50 */

int FUN_101c2a50(int param_1,uint param_2,uint param_3,uint param_4,int param_5,int *param_6)

{
  int iVar1;
  bool bVar2;
  
  if ((int)(param_3 | param_2 | param_4) < 0) {
    iVar1 = 6;
  }
  else if ((param_2 == 0) || (param_4 == 0)) {
    FUN_101c0017(param_1,param_5);
    iVar1 = 0;
    param_5 = 0;
  }
  else {
    iVar1 = 10;
    if ((int)param_4 <= (int)(0x7fffffff / (ulonglong)param_2)) {
      if (param_3 == 0) {
        param_5 = (**(code **)(param_1 + 4))(param_1,param_4 * param_2);
        bVar2 = param_5 == 0;
      }
      else {
        iVar1 = (**(code **)(param_1 + 0xc))(param_1,param_3 * param_2,param_4 * param_2,param_5);
        bVar2 = iVar1 == 0;
        if (!bVar2) {
          param_5 = iVar1;
        }
      }
      iVar1 = (uint)bVar2 << 6;
    }
  }
  *param_6 = iVar1;
  return param_5;
}


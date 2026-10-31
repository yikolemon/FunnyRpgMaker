/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101956d6 */

int __fastcall FUN_101956d6(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int *local_1c;
  
  iVar5 = 0;
  local_20 = 0;
  if (*param_1 < param_3 + param_2) {
    local_20 = 0;
    iVar6 = 0;
    iVar5 = 0;
    iVar4 = *param_1;
    do {
      iVar1 = param_1[1];
      if (iVar1 - iVar5 == 0 || iVar1 < iVar5) {
        local_1c = (int *)param_1[2];
        iVar3 = *local_1c;
        iVar7 = param_3 - iVar6;
        if ((iVar3 - iVar4) + iVar6 <= param_3) {
          iVar7 = iVar3 - iVar4;
        }
        iVar2 = (iVar5 - iVar1) * iVar7;
      }
      else {
        iVar2 = (iVar1 - iVar5) * iVar6;
        local_1c = (int *)param_1[2];
        iVar3 = *local_1c;
        iVar5 = iVar1;
        if (iVar4 < param_2) {
          iVar7 = iVar3 - param_2;
        }
        else {
          iVar7 = iVar3 - iVar4;
        }
      }
      local_20 = local_20 + iVar2;
      iVar6 = iVar6 + iVar7;
      param_1 = local_1c;
      iVar4 = iVar3;
    } while (iVar3 < param_3 + param_2);
  }
  *param_4 = local_20;
  return iVar5;
}


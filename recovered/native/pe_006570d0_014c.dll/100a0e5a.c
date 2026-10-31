/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a0e5a */

undefined8 __thiscall FUN_100a0e5a(int *param_1,undefined2 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar4 = param_3;
  uVar5 = param_4;
  if ((int)(uint)(param_3 == 0) <= (int)param_4) {
    do {
      if ((*(int *)param_1[8] == 0) || (uVar1 = *(uint *)param_1[0xc], (int)uVar1 < 1)) {
        sVar2 = (**(code **)(*param_1 + 0xc))(*param_2);
        if (sVar2 == -1) break;
        param_2 = param_2 + 1;
        bVar7 = uVar4 != 0;
        uVar4 = uVar4 - 1;
        uVar5 = (uVar5 - 1) + (uint)bVar7;
      }
      else {
        uVar3 = uVar5;
        uVar6 = uVar4;
        if ((uVar4 < uVar1) <= uVar5) {
          uVar3 = 0;
          uVar6 = uVar1;
        }
        FUN_1025b2d0(*(int *)param_1[8],param_2,uVar6 * 2);
        param_2 = param_2 + uVar6;
        bVar7 = uVar4 < uVar6;
        uVar4 = uVar4 - uVar6;
        uVar5 = (uVar5 - uVar3) - (uint)bVar7;
        *(int *)param_1[0xc] = *(int *)param_1[0xc] - uVar6;
        *(int *)param_1[8] = *(int *)param_1[8] + uVar6 * 2;
      }
    } while ((SBORROW4(0,uVar5) != SBORROW4(-uVar5,(uint)(uVar4 != 0))) !=
             (int)(-uVar5 - (uint)(uVar4 != 0)) < 0);
  }
  return CONCAT44((param_4 - uVar5) - (uint)(param_3 < uVar4),param_3 - uVar4);
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10074c96 */

undefined8 __thiscall FUN_10074c96(int *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  uVar5 = param_4;
  uVar6 = param_3;
  if ((int)(uint)(param_3 == 0) <= (int)param_4) {
    do {
      if ((*(int *)param_1[7] == 0) || (uVar1 = *(uint *)param_1[0xb], (int)uVar1 < 1)) {
        iVar2 = (**(code **)(*param_1 + 0x1c))();
        if (iVar2 == -1) break;
        *param_2 = (char)iVar2;
        param_2 = param_2 + 1;
        bVar7 = uVar6 != 0;
        uVar6 = uVar6 - 1;
        uVar5 = (uVar5 - 1) + (uint)bVar7;
      }
      else {
        uVar3 = uVar5;
        uVar4 = uVar6;
        if ((uVar6 < uVar1) <= uVar5) {
          uVar3 = 0;
          uVar4 = uVar1;
        }
        FUN_1025b2d0(param_2,*(int *)param_1[7],uVar4);
        param_2 = param_2 + uVar4;
        bVar7 = uVar6 < uVar4;
        uVar6 = uVar6 - uVar4;
        uVar5 = (uVar5 - uVar3) - (uint)bVar7;
        *(int *)param_1[0xb] = *(int *)param_1[0xb] - uVar4;
        *(int *)param_1[7] = *(int *)param_1[7] + uVar4;
      }
    } while ((SBORROW4(0,uVar5) != SBORROW4(-uVar5,(uint)(uVar6 != 0))) !=
             (int)(-uVar5 - (uint)(uVar6 != 0)) < 0);
  }
  return CONCAT44((param_4 - uVar5) - (uint)(param_3 < uVar6),param_3 - uVar6);
}


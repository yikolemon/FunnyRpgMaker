/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047695f */

undefined4 __fastcall
FUN_0047695f(byte *param_1,int param_2,int *param_3,undefined *param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *local_2c;
  
  uVar1 = param_3[param_2 * 2 + 1];
  uVar2 = param_3[1];
  if ((int)uVar1 <= (int)param_6 && (int)param_5 <= (int)uVar2) {
    if ((int)uVar2 <= (int)param_6) {
      param_6 = uVar2 & -*(int *)(param_1 + 4);
    }
    if ((int)param_5 <= (int)uVar1) {
      param_5 = -*(int *)(param_1 + 4) & (uVar1 + *(int *)(param_1 + 4)) - 1;
    }
    if (uVar1 == param_5) {
      param_5 = uVar1 + *(int *)(param_1 + 4);
    }
    if ((int)param_5 <= (int)param_6) {
      local_2c = *(int **)(param_1 + 0x20);
      if (*(int **)(param_1 + 0x1c) <= local_2c + (param_6 - param_5 >> (*param_1 & 0x1f)) + 1) {
        param_1[0x24] = 0x62;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        return CONCAT31((int3)((uint)(local_2c + (param_6 - param_5 >> (*param_1 & 0x1f)) + 1) >> 8)
                        ,1);
      }
      do {
        iVar3 = *param_3;
        iVar4 = param_3[1];
        iVar8 = iVar4 - param_5;
        if (iVar8 == 0 || iVar4 < (int)param_5) {
          if (iVar8 == 0) {
            *local_2c = iVar3;
            local_2c = local_2c + 1;
            param_5 = param_5 + *(int *)(param_1 + 4);
          }
          piVar6 = param_3 + param_2 * -2;
        }
        else {
          iVar7 = iVar3 - param_3[param_2 * 2];
          iVar5 = *(int *)(param_1 + 0x10);
          if (iVar5 < -iVar7 || (iVar5 < iVar7 || iVar5 < iVar4 - param_3[param_2 * 2 + 1])) {
            piVar6 = param_3 + param_2 * 2;
            (*(code *)param_4)(param_3);
          }
          else {
            *local_2c = iVar3 - (iVar7 * iVar8) / (iVar4 - param_3[param_2 * 2 + 1]);
            local_2c = local_2c + 1;
            param_5 = param_5 + *(int *)(param_1 + 4);
            piVar6 = param_3 + param_2 * -2;
          }
        }
        param_3 = piVar6;
      } while ((int)param_5 <= (int)param_6);
      *(int **)(param_1 + 0x20) = local_2c;
    }
  }
  return 0;
}


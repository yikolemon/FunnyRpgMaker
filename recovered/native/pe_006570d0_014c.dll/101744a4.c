/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101744a4 */

undefined4 __fastcall FUN_101744a4(int param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (0 < (int)param_3) {
    iVar2 = 0;
    uVar6 = param_3;
    do {
      pbVar3 = *(byte **)(param_1 + 0xac);
      if (pbVar3 < *(byte **)(param_1 + 0xb0)) {
LAB_101744e2:
        *(byte **)(param_1 + 0xac) = pbVar3 + 1;
        uVar4 = (uint)*pbVar3;
        if (uVar4 != 0x80) {
          if (-1 < (char)*pbVar3) {
            if (uVar6 <= uVar4) {
              return 0;
            }
            goto LAB_1017450e;
          }
          if (uVar6 < 0x101 - uVar4) {
            return 0;
          }
          if (pbVar3 + 1 < *(byte **)(param_1 + 0xb0)) {
            *(byte **)(param_1 + 0xac) = pbVar3 + 2;
            bVar1 = pbVar3[1];
          }
          else if (*(int *)(param_1 + 0x20) == 0) {
            bVar1 = 0;
          }
          else {
            FUN_10170e8c();
            pbVar3 = *(byte **)(param_1 + 0xac);
            *(byte **)(param_1 + 0xac) = pbVar3 + 1;
            bVar1 = *pbVar3;
          }
          iVar5 = uVar4 - 0x101;
          do {
            *param_2 = bVar1;
            param_2 = param_2 + 4;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0);
          iVar2 = iVar2 + (0x101 - uVar4);
        }
      }
      else {
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_10170e8c();
          pbVar3 = *(byte **)(param_1 + 0xac);
          goto LAB_101744e2;
        }
        uVar4 = 0;
LAB_1017450e:
        iVar5 = uVar4 + 1;
        do {
          pbVar3 = *(byte **)(param_1 + 0xac);
          if (pbVar3 < *(byte **)(param_1 + 0xb0)) {
LAB_10174536:
            *(byte **)(param_1 + 0xac) = pbVar3 + 1;
            bVar1 = *pbVar3;
          }
          else {
            if (*(int *)(param_1 + 0x20) != 0) {
              FUN_10170e8c();
              pbVar3 = *(byte **)(param_1 + 0xac);
              goto LAB_10174536;
            }
            bVar1 = 0;
          }
          *param_2 = bVar1;
          param_2 = param_2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar2 = iVar2 + uVar4 + 1;
      }
      uVar6 = param_3 - iVar2;
    } while (uVar6 != 0 && iVar2 <= (int)param_3);
  }
  return 1;
}


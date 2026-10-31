/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017a492 */

undefined8 FUN_18017a492(longlong param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (0 < (int)param_3) {
    iVar4 = 0;
    uVar7 = param_3;
    do {
      pbVar3 = *(byte **)(param_1 + 0xc0);
      if (pbVar3 < *(byte **)(param_1 + 200)) {
LAB_18017a4e4:
        *(byte **)(param_1 + 0xc0) = pbVar3 + 1;
        bVar1 = *pbVar3;
        uVar6 = (uint)bVar1;
        if (bVar1 != 0x80) {
          if (-1 < (char)bVar1) {
            if (uVar7 <= bVar1) {
              return 0;
            }
            goto LAB_18017a513;
          }
          uVar6 = 0x101 - bVar1;
          if (uVar7 < uVar6) {
            return 0;
          }
          if (pbVar3 + 1 < *(byte **)(param_1 + 200)) {
            *(byte **)(param_1 + 0xc0) = pbVar3 + 2;
            bVar2 = pbVar3[1];
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            bVar2 = 0;
          }
          else {
            FUN_180176673(param_1);
            pbVar3 = *(byte **)(param_1 + 0xc0);
            *(byte **)(param_1 + 0xc0) = pbVar3 + 1;
            bVar2 = *pbVar3;
          }
          iVar5 = bVar1 - 0x101;
          do {
            *param_2 = bVar2;
            param_2 = param_2 + 4;
            iVar5 = iVar5 + 1;
          } while (iVar5 != 0);
          iVar4 = iVar4 + uVar6;
        }
      }
      else {
        if (*(int *)(param_1 + 0x30) != 0) {
          FUN_180176673(param_1);
          pbVar3 = *(byte **)(param_1 + 0xc0);
          goto LAB_18017a4e4;
        }
        uVar6 = 0;
LAB_18017a513:
        iVar5 = uVar6 + 1;
        do {
          pbVar3 = *(byte **)(param_1 + 0xc0);
          if (pbVar3 < *(byte **)(param_1 + 200)) {
LAB_18017a53f:
            *(byte **)(param_1 + 0xc0) = pbVar3 + 1;
            bVar1 = *pbVar3;
          }
          else {
            if (*(int *)(param_1 + 0x30) != 0) {
              FUN_180176673(param_1);
              pbVar3 = *(byte **)(param_1 + 0xc0);
              goto LAB_18017a53f;
            }
            bVar1 = 0;
          }
          *param_2 = bVar1;
          param_2 = param_2 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = iVar4 + uVar6 + 1;
      }
      uVar7 = param_3 - iVar4;
    } while (uVar7 != 0 && iVar4 <= (int)param_3);
  }
  return 1;
}


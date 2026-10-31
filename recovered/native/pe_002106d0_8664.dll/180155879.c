/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180155879 */

void FUN_180155879(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)*(short *)((longlong)param_2 + 0xa3a);
  if (lVar7 != 99) {
    lVar6 = (longlong)(short)param_2[0x28e];
    iVar1 = param_2[lVar7 * 4 + 8];
    iVar5 = param_2[lVar7 * 4 + 9];
    iVar2 = param_2[lVar7 * 4 + 10];
    iVar3 = param_2[lVar7 * 4 + 0xb];
    param_2[lVar6 * 4 + 10] = iVar5;
    param_2[lVar6 * 4 + 9] = iVar2;
    param_2[lVar6 * 4 + 8] = iVar1;
    param_2[lVar6 * 4 + 0xb] = -1;
    if (iVar2 != 0) {
      if (param_2[0x290] < param_2[0x28f] + iVar2) {
        (param_2 + lVar6 * 4 + 9)[0] = 0;
        (param_2 + lVar6 * 4 + 9)[1] = 0;
      }
      else {
        param_2[lVar6 * 4 + 0xb] = param_2[0x28f];
        param_2[0x28f] = param_2[0x28f] + iVar2;
        if (0 < iVar2) {
          lVar7 = 0;
          do {
            uVar4 = FUN_1801476cb(param_1,param_2[lVar6 * 4 + 8] + (int)lVar7);
            *(undefined1 *)((longlong)param_2 + lVar7 + (longlong)param_2[lVar6 * 4 + 0xb] + 0x650)
                 = uVar4;
            lVar7 = lVar7 + 1;
          } while ((int)lVar7 < param_2[lVar6 * 4 + 9]);
        }
      }
      FUN_18015615c(param_1,iVar1,iVar2);
    }
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_18015619b(param_1,iVar1,(longlong)param_2 + (longlong)iVar3 + 0x650,iVar5);
      param_2[0x290] = param_2[0x290] + iVar5;
    }
    *param_2 = iVar5 + iVar1;
    param_2[0x28e] = CONCAT22((short)((uint)param_2[0x28e] >> 0x10) + 1,(short)param_2[0x28e] + 1);
  }
  return;
}


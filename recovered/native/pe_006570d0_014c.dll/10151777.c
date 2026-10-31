/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151777 */

void __fastcall FUN_10151777(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = (int)*(short *)((int)param_2 + 0xa3a);
  if (iVar5 != 99) {
    iVar4 = (int)(short)param_2[0x28e];
    iVar1 = param_2[iVar5 * 4 + 8];
    iVar2 = param_2[iVar5 * 4 + 9];
    iVar7 = param_2[iVar5 * 4 + 10];
    iVar5 = param_2[iVar5 * 4 + 0xb];
    param_2[iVar4 * 4 + 10] = iVar2;
    param_2[iVar4 * 4 + 9] = iVar7;
    param_2[iVar4 * 4 + 8] = iVar1;
    param_2[iVar4 * 4 + 0xb] = -1;
    if (iVar7 != 0) {
      if (param_2[0x290] < param_2[0x28f] + iVar7) {
        param_2[iVar4 * 4 + 9] = 0;
        param_2[iVar4 * 4 + 10] = 0;
      }
      else {
        param_2[iVar4 * 4 + 0xb] = param_2[0x28f];
        param_2[0x28f] = param_2[0x28f] + iVar7;
        if (0 < iVar7) {
          iVar6 = 0;
          do {
            uVar3 = FUN_10142d40(iVar7,iVar5);
            *(undefined1 *)((int)param_2 + iVar6 + param_2[iVar4 * 4 + 0xb] + 0x650) = uVar3;
            iVar6 = iVar6 + 1;
          } while (iVar6 < param_2[iVar4 * 4 + 9]);
        }
      }
      FUN_10151f58(iVar7);
    }
    if (iVar2 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_10151f8b((int)param_2 + iVar5 + 0x650,iVar2);
      param_2[0x290] = param_2[0x290] + iVar5;
    }
    *param_2 = iVar5 + iVar1;
    param_2[0x28e] = CONCAT22((short)((uint)param_2[0x28e] >> 0x10) + 1,(short)param_2[0x28e] + 1);
  }
  return;
}


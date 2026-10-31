/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101705dd */

bool __fastcall FUN_101705dd(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  
  pbVar4 = *(byte **)(param_1 + 0xac);
  pbVar6 = *(byte **)(param_1 + 0xb0);
  if (pbVar4 < pbVar6) {
LAB_1017060c:
    pbVar4 = pbVar4 + 1;
    *(byte **)(param_1 + 0xac) = pbVar4;
  }
  else if (*(int *)(param_1 + 0x20) != 0) {
    FUN_10170e8c();
    pbVar4 = *(byte **)(param_1 + 0xac);
    pbVar6 = *(byte **)(param_1 + 0xb0);
    goto LAB_1017060c;
  }
  if (pbVar4 < pbVar6) {
LAB_1017062e:
    *(byte **)(param_1 + 0xac) = pbVar4 + 1;
    bVar3 = *pbVar4;
    if (bVar3 < 2) {
      bVar7 = bVar3 == 0;
      if (*(byte **)(param_1 + 0xb0) <= pbVar4 + 1) goto LAB_101706d9;
      *(byte **)(param_1 + 0xac) = pbVar4 + 2;
      bVar2 = pbVar4[1];
      if (bVar3 != 0) goto LAB_10170667;
LAB_10170703:
      if ((bVar2 & 0xf6) == 2) {
        bVar1 = true;
        goto LAB_10170710;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar4 = *(byte **)(param_1 + 0xac);
      goto LAB_1017062e;
    }
    bVar7 = true;
LAB_101706d9:
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_10170e8c();
      pbVar6 = *(byte **)(param_1 + 0xac);
      *(byte **)(param_1 + 0xac) = pbVar6 + 1;
      bVar2 = *pbVar6;
      if (bVar7) goto LAB_10170703;
LAB_10170667:
      bVar7 = false;
      if ((bVar2 & 0xf7) != 1) goto LAB_10170781;
      FUN_10171ace();
      pbVar6 = *(byte **)(param_1 + 0xac);
      if (*(byte **)(param_1 + 0xb0) <= pbVar6) {
        if (*(int *)(param_1 + 0x20) == 0) goto LAB_10170781;
        FUN_10170e8c();
        pbVar6 = *(byte **)(param_1 + 0xac);
      }
      *(byte **)(param_1 + 0xac) = pbVar6 + 1;
      bVar7 = false;
      if ((0x18 < *pbVar6 - 8) || (bVar1 = false, (0x1010181U >> (*pbVar6 - 8 & 0x1f) & 1) == 0))
      goto LAB_10170781;
LAB_10170710:
      FUN_10171ace();
      iVar5 = FUN_1017336c();
      bVar7 = false;
      if ((iVar5 == 0) || (iVar5 = FUN_1017336c(), iVar5 == 0)) goto LAB_10170781;
      pbVar6 = *(byte **)(param_1 + 0xac);
      if (pbVar6 < *(byte **)(param_1 + 0xb0)) {
LAB_10170754:
        *(byte **)(param_1 + 0xac) = pbVar6 + 1;
        bVar3 = *pbVar6;
      }
      else {
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_10170e8c();
          pbVar6 = *(byte **)(param_1 + 0xac);
          goto LAB_10170754;
        }
        bVar3 = 0;
      }
      if (bVar1) {
        if ((bVar3 - 8 < 0x19) && ((0x1010181U >> (bVar3 - 8 & 0x1f) & 1) != 0)) {
          bVar7 = true;
        }
      }
      else {
        bVar7 = (bVar3 - 8 & 0xf7) == 0;
      }
      goto LAB_10170781;
    }
  }
  bVar7 = false;
LAB_10170781:
  FUN_10170e7b();
  return bVar7;
}


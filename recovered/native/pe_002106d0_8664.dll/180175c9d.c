/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180175c9d */

bool FUN_180175c9d(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  bool bVar9;
  
  pbVar5 = *(byte **)(param_1 + 0xc0);
  pbVar6 = *(byte **)(param_1 + 200);
  if (pbVar5 < pbVar6) {
LAB_180175cd7:
    pbVar5 = pbVar5 + 1;
    *(byte **)(param_1 + 0xc0) = pbVar5;
  }
  else if (*(int *)(param_1 + 0x30) != 0) {
    FUN_180176673(param_1);
    pbVar5 = *(byte **)(param_1 + 0xc0);
    pbVar6 = *(byte **)(param_1 + 200);
    goto LAB_180175cd7;
  }
  if (pbVar5 < pbVar6) {
LAB_180175cff:
    *(byte **)(param_1 + 0xc0) = pbVar5 + 1;
    bVar1 = *pbVar5;
    if (bVar1 < 2) {
      bVar9 = bVar1 == 0;
      if (*(byte **)(param_1 + 200) <= pbVar5 + 1) goto LAB_180175dba;
      *(byte **)(param_1 + 0xc0) = pbVar5 + 2;
      bVar3 = pbVar5[1];
      if (bVar1 != 0) goto LAB_180175d3d;
LAB_180175de8:
      if ((bVar3 & 0xf6) == 2) {
        bVar2 = true;
        uVar8 = 9;
        goto LAB_180175dfa;
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      pbVar5 = *(byte **)(param_1 + 0xc0);
      goto LAB_180175cff;
    }
    bVar9 = true;
LAB_180175dba:
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_180176673(param_1);
      pbVar6 = *(byte **)(param_1 + 0xc0);
      *(byte **)(param_1 + 0xc0) = pbVar6 + 1;
      bVar3 = *pbVar6;
      if (bVar9) goto LAB_180175de8;
LAB_180175d3d:
      bVar9 = false;
      if ((bVar3 & 0xf7) != 1) goto LAB_180175e75;
      uVar8 = 4;
      FUN_180177488(param_1,4);
      pbVar6 = *(byte **)(param_1 + 0xc0);
      if (*(byte **)(param_1 + 200) <= pbVar6) {
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_180175e75;
        FUN_180176673(param_1);
        pbVar6 = *(byte **)(param_1 + 0xc0);
      }
      *(byte **)(param_1 + 0xc0) = pbVar6 + 1;
      bVar9 = false;
      if ((0x20 < (ulonglong)*pbVar6) ||
         (bVar2 = false, bVar9 = false, (0x101018100U >> ((ulonglong)*pbVar6 & 0x3f) & 1) == 0))
      goto LAB_180175e75;
LAB_180175dfa:
      FUN_180177488(param_1,uVar8);
      iVar4 = FUN_18017918c(param_1);
      bVar9 = false;
      if ((iVar4 == 0) || (iVar4 = FUN_18017918c(param_1), iVar4 == 0)) goto LAB_180175e75;
      pbVar6 = *(byte **)(param_1 + 0xc0);
      if (pbVar6 < *(byte **)(param_1 + 200)) {
LAB_180175e43:
        *(byte **)(param_1 + 0xc0) = pbVar6 + 1;
        uVar7 = (ulonglong)*pbVar6;
      }
      else {
        if (*(int *)(param_1 + 0x30) != 0) {
          FUN_180176673(param_1);
          pbVar6 = *(byte **)(param_1 + 0xc0);
          goto LAB_180175e43;
        }
        uVar7 = 0;
      }
      if (bVar2) {
        if (((byte)uVar7 < 0x21) && ((0x101018100U >> (uVar7 & 0x3f) & 1) != 0)) {
          bVar9 = true;
        }
      }
      else {
        bVar9 = ((byte)uVar7 - 8 & 0xf7) == 0;
      }
      goto LAB_180175e75;
    }
  }
  bVar9 = false;
LAB_180175e75:
  FUN_180176664(param_1);
  return bVar9;
}


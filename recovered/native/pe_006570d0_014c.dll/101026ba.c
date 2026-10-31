/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101026ba */

void FUN_101026ba(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar1 = DAT_1039d74c;
  iVar5 = *(int *)(DAT_1039d74c + 0x1528);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    *(int *)(DAT_1039d74c + 0x1554) = iVar5;
    *(uint *)(iVar1 + 0x1558) = (uint)(*(int *)(iVar1 + 0x1e80) != iVar5) + *(int *)(iVar1 + 4);
    *(undefined1 *)(iVar1 + 0x155c) = *(undefined1 *)(iVar1 + 0x1538);
    *(bool *)(iVar1 + 0x155d) = *(int *)(iVar1 + 0x152c) == iVar5;
    if (*(int *)(iVar1 + 0x247c) == iVar5) {
      FUN_10142ab7(iVar5);
      iVar5 = *(int *)(iVar1 + 0x1528);
    }
    if ((*(int *)(iVar1 + 0x14dc) != 0) && (iVar5 == *(int *)(*(int *)(iVar1 + 0x14dc) + 0xb4))) {
      if ((*(byte *)(iVar1 + 0x27b4) & 2) != 0) {
        FUN_100f99e6("SetActiveID() cancel MovingWindow\n");
      }
      FUN_10102871();
      iVar5 = *(int *)(iVar1 + 0x1528);
    }
  }
  *(bool *)(iVar1 + 0x1534) = iVar5 != param_1;
  if (iVar5 != param_1) {
    if ((*(byte *)(iVar1 + 0x27b4) & 2) != 0) {
      if (*(int *)(iVar1 + 0x154c) == 0) {
        puVar6 = &DAT_10356101;
      }
      else {
        puVar6 = *(undefined1 **)(*(int *)(iVar1 + 0x154c) + 4);
      }
      if (param_2 == 0) {
        uVar3 = FUN_100fbc6a(0,0x14,puVar6);
        puVar4 = &DAT_10356101;
      }
      else {
        sVar2 = _strlen(*(char **)(param_2 + 4));
        uVar3 = FUN_100fbc6a(0,0x14 - sVar2);
        puVar4 = *(undefined1 **)(param_2 + 4);
      }
      FUN_100f99e6("SetActiveID() 0x%08X in \"%s\"%*s(previously 0x%08X in \"%s\")\n",param_1,puVar4
                   ,uVar3,&DAT_10356101,iVar5,puVar6);
    }
    *(undefined4 *)(iVar1 + 0x1530) = 0;
    *(undefined2 *)(iVar1 + 0x1537) = 0;
    *(undefined1 *)(iVar1 + 0x153b) = 0xff;
    if (param_1 != 0) {
      *(int *)(iVar1 + 0x1568) = param_1;
      *(undefined4 *)(iVar1 + 0x156c) = 0;
    }
  }
  *(int *)(iVar1 + 0x1528) = param_1;
  *(undefined2 *)(iVar1 + 0x1535) = 0;
  *(int *)(iVar1 + 0x154c) = param_2;
  *(undefined2 *)(iVar1 + 0x1539) = 0;
  *(undefined4 *)(iVar1 + 0x153c) = 0;
  if (param_1 != 0) {
    *(int *)(iVar1 + 0x152c) = param_1;
    if ((*(int *)(iVar1 + 0x2058) == param_1) || (*(int *)(iVar1 + 0x2204) == param_1)) {
      uVar3 = *(undefined4 *)(iVar1 + 0x208c);
    }
    else {
      uVar3 = 1;
    }
    *(undefined4 *)(iVar1 + 0x1548) = uVar3;
  }
  *(undefined4 *)(iVar1 + 0x1e30) = 0;
  *(undefined1 *)(iVar1 + 0x1e34) = 0;
  return;
}


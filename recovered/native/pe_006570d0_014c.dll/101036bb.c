/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101036bb */

void FUN_101036bb(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  byte local_10;
  
  iVar1 = DAT_1039d74c;
  if ((((param_2 != 0 && param_3 == '\x01') && (*(int *)(param_2 + 0x7c) != 0)) &&
      ((*(byte *)(*(int *)(param_2 + 0x7c) + 0xc) & 4) == 0)) &&
     (iVar2 = param_2, (*(byte *)(param_2 + 0x10) & 0x80) == 0)) {
    do {
      iVar6 = iVar2;
      iVar2 = *(int *)(iVar6 + 0x18);
    } while (*(int *)(iVar6 + 0x18) != 0);
    if ((*(int *)(iVar6 + 0x84) != param_2) || (*(int *)(iVar6 + 0x80) != 0)) {
      cVar3 = FUN_1010378f(0,0xbf800000);
      if (cVar3 != '\0') {
        FUN_101037aa(iVar1,param_2);
        return;
      }
      bVar4 = 0;
      local_10 = 0;
      goto LAB_10103740;
    }
  }
  local_10 = 1;
  bVar4 = FUN_1010378f(0,0xbf800000);
LAB_10103740:
  bVar5 = FUN_1010377a(0,0);
  if ((((bVar5 | bVar4) & local_10) == 1) && (*(int *)(iVar1 + 0x14dc) != param_1)) {
    FUN_10103445();
    return;
  }
  return;
}


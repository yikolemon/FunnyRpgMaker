/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1028637e */

/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Library: Visual Studio 2019 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  uint local_8;
  
  bVar1 = *(byte *)((&DAT_103a5230)[param_1 >> 6] + 0x28 + (param_1 & 0x3fU) * 0x38);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar4 = FUN_1027938a(param_1,0xffffffff,0xffffffff,2);
    if (lVar4 == -1) {
      piVar2 = (int *)FUN_10269012();
      if (*piVar2 == 0x83) goto LAB_10286421;
    }
    else {
      local_8 = local_8 & 0xffff0000;
      iVar3 = FUN_1027ff42(param_1,&local_8,1);
      if ((iVar3 == 0) && ((short)local_8 == 0x1a)) {
        iVar3 = FUN_102879ef(param_1,lVar4);
        if (iVar3 == -1) goto LAB_102863d3;
      }
      lVar4 = FUN_1027938a(param_1,0,0,0);
      if (lVar4 != -1) goto LAB_10286421;
    }
LAB_102863d3:
    piVar2 = (int *)FUN_10268ffd();
    iVar3 = *piVar2;
  }
  else {
LAB_10286421:
    iVar3 = 0;
  }
  return iVar3;
}


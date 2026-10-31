/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10278a9c */

/* WARNING: Type propagation algorithm not settling */

int FUN_10278a9c(undefined4 *param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  char *local_10;
  char *local_c;
  undefined4 local_8;
  
  if (param_2 == (int *)0x0) {
    puVar3 = (undefined4 *)FUN_10268ffd();
    iVar5 = 0x16;
    *puVar3 = 0x16;
    FUN_10273ea8();
  }
  else {
    *param_2 = 0;
    local_1c = 0;
    local_20 = (undefined4 *)0x0;
    local_24 = (undefined4 *)0x0;
    pcVar4 = (char *)*param_1;
    puVar3 = local_24;
    while (local_24 = puVar3, pcVar4 != (char *)0x0) {
      uVar2 = (uint)local_8 >> 0x18;
      local_8 = CONCAT13((char)uVar2,0x3f2a);
      pcVar4 = _strpbrk(pcVar4,(char *)&local_8);
      if (pcVar4 == (char *)0x0) {
        iVar5 = FUN_10278d8b(*param_1,0,0,&local_24);
      }
      else {
        iVar5 = FUN_10278e3c(*param_1,pcVar4,&local_24);
      }
      if (iVar5 != 0) goto LAB_10278b83;
      param_1 = param_1 + 1;
      puVar3 = local_24;
      pcVar4 = (char *)*param_1;
    }
    iVar5 = ((int)local_20 - (int)puVar3 >> 2) + 1;
    local_c = (char *)0x0;
    for (puVar7 = puVar3; puVar7 != local_20; puVar7 = puVar7 + 1) {
      pcVar4 = (char *)*puVar7;
      local_10 = pcVar4 + 1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      local_c = pcVar4 + (int)(local_c + (1 - (int)local_10));
    }
    iVar6 = ___acrt_allocate_buffer_for_argv(iVar5,local_c,1);
    puVar7 = local_20;
    if (iVar6 == 0) {
      FUN_10274120(0);
      iVar5 = -1;
LAB_10278b83:
      ~argument_list<>();
    }
    else {
      local_8 = iVar6 + iVar5 * 4;
      local_14 = local_8;
      if (puVar3 != local_20) {
        local_18 = iVar6 - (int)puVar3;
        do {
          local_10 = (char *)*puVar3;
          pcVar4 = local_10 + 1;
          do {
            cVar1 = *local_10;
            local_10 = local_10 + 1;
          } while (cVar1 != '\0');
          local_10 = local_10 + (1 - (int)pcVar4);
          iVar5 = FUN_10283660(local_8,local_c + (local_14 - local_8),*puVar3,local_10);
          if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          *(int *)(local_18 + (int)puVar3) = local_8;
          puVar3 = puVar3 + 1;
          local_8 = local_8 + (int)local_10;
        } while (puVar3 != puVar7);
      }
      *param_2 = iVar6;
      FUN_10274120(0);
      ~argument_list<>();
      iVar5 = 0;
    }
  }
  return iVar5;
}


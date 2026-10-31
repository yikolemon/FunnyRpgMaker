/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102813e0 */

int FUN_102813e0(int param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_10;
  undefined4 local_c;
  char local_8;
  
  if (DAT_103a5004 == 0) {
    if (((param_1 != 0) && (param_2 != 0)) && (param_3 < 0x80000000)) {
      iVar2 = FUN_10285980(param_1,param_2,param_3);
      return iVar2;
    }
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  if (param_1 == 0) {
    puVar1 = (undefined4 *)FUN_10268ffd();
    *puVar1 = 0x16;
    FUN_10273ea8();
    return 0x7fffffff;
  }
  if ((param_2 != 0) && (param_3 < 0x80000000)) {
    local_8 = '\0';
    iVar2 = FUN_102743cd();
    local_10 = *(int *)(iVar2 + 0x4c);
    local_c = *(undefined4 *)(iVar2 + 0x48);
    ___acrt_update_locale_info(iVar2,&local_10);
    FUN_1027494a(iVar2,&local_c);
    if ((*(uint *)(iVar2 + 0x350) & 2) == 0) {
      *(uint *)(iVar2 + 0x350) = *(uint *)(iVar2 + 0x350) | 2;
      local_8 = '\x01';
    }
    if (*(int *)(local_10 + 0xa4) == 0) {
      iVar3 = FUN_10285980(param_1);
      if (local_8 != '\0') {
        *(uint *)(iVar2 + 0x350) = *(uint *)(iVar2 + 0x350) & 0xfffffffd;
        return iVar3;
      }
    }
    else {
      iVar3 = FUN_10287128(*(int *)(local_10 + 0xa4),0x1001,param_1,param_3,param_2,param_3);
      if (iVar3 == 0) {
        puVar1 = (undefined4 *)FUN_10268ffd();
        *puVar1 = 0x16;
        if (local_8 != '\0') {
          *(uint *)(iVar2 + 0x350) = *(uint *)(iVar2 + 0x350) & 0xfffffffd;
        }
        return 0x7fffffff;
      }
      iVar3 = iVar3 + -2;
      if (local_8 != '\0') {
        *(uint *)(iVar2 + 0x350) = *(uint *)(iVar2 + 0x350) & 0xfffffffd;
      }
    }
    return iVar3;
  }
  puVar1 = (undefined4 *)FUN_10268ffd();
  *puVar1 = 0x16;
  FUN_10273ea8();
  return 0x7fffffff;
}


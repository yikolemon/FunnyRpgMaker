/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026975a */

undefined4 FUN_1026975a(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint local_10;
  uint local_c;
  char local_5;
  
  if (param_1 == (int *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
  }
  else {
    piVar8 = param_1;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar8 = -1;
      piVar8 = piVar8 + 1;
    }
    if (param_2 == (uint *)0x0) {
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 0x16;
      FUN_10273ea8();
    }
    else {
      local_c = param_2[1];
      local_10 = *param_2;
      if (((local_c < 0x80000000) || ((-2 < (int)local_c && (0xffff573f < local_10)))) &&
         (((int)local_c < 7 || (((int)local_c < 8 && (local_10 < 0x9358efe0)))))) {
        local_5 = '\0';
        iVar5 = FUN_10269667(&local_10,&local_5);
        uVar1 = local_10;
        param_1[5] = iVar5;
        iVar5 = __alldiv(local_10,local_c,0x15180,0);
        uVar3 = (uint)((longlong)iVar5 * 0x15180);
        param_1[7] = iVar5;
        uVar6 = uVar1 - uVar3;
        local_c = (local_c - (int)((ulonglong)((longlong)iVar5 * 0x15180) >> 0x20)) -
                  (uint)(uVar1 < uVar3);
        puVar2 = (undefined4 *)&DAT_10325614;
        if (local_5 == '\0') {
          puVar2 = &DAT_103255e0;
        }
        iVar4 = 1;
        iVar7 = puVar2[1];
        while (iVar7 < iVar5) {
          iVar4 = iVar4 + 1;
          iVar7 = puVar2[iVar4];
        }
        param_1[4] = iVar4 + -1;
        param_1[3] = iVar5 - puVar2[iVar4 + -1];
        iVar5 = __alldiv(*param_2,param_2[1],0x15180,0);
        uVar1 = local_c;
        param_1[6] = (iVar5 + 4) % 7;
        iVar5 = __alldiv(uVar6,local_c,0xe10,0);
        param_1[2] = iVar5;
        uVar3 = (uint)((longlong)iVar5 * 0xe10);
        iVar7 = uVar6 - uVar3;
        iVar5 = __alldiv(iVar7,(uVar1 - (int)((ulonglong)((longlong)iVar5 * 0xe10) >> 0x20)) -
                               (uint)(uVar6 < uVar3),0x3c,0);
        param_1[8] = 0;
        param_1[1] = iVar5;
        *param_1 = iVar7 + iVar5 * -0x3c;
        return 0;
      }
      puVar2 = (undefined4 *)FUN_10268ffd();
      *puVar2 = 0x16;
    }
  }
  return 0x16;
}


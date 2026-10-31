/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025c543 */

int FUN_1025c543(short *param_1,int param_2,short *param_3,int param_4,int param_5,
                undefined4 param_6)

{
  uint uVar1;
  short *psVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  short sVar6;
  int local_20;
  int local_1c [2];
  char local_14;
  uint local_10;
  short *local_c;
  int local_8;
  
  if ((param_1 == (short *)0x0) || (param_2 == 0)) {
    puVar4 = (undefined4 *)FUN_10268ffd();
    *puVar4 = 0x16;
    FUN_10273ea8();
    iVar5 = 0;
  }
  else {
    *param_1 = 0;
    if (param_3 == (short *)0x0) {
      puVar4 = (undefined4 *)FUN_10268ffd();
      *puVar4 = 0x16;
      FUN_10273ea8();
      iVar5 = 0;
    }
    else {
      FUN_1025be8b(param_6);
      if (param_5 == 0) {
        param_5 = *(int *)(local_1c[0] + 0x9c);
      }
      local_c = param_1;
      iVar5 = 0;
      local_8 = param_2;
      do {
        sVar6 = *param_3;
        if (sVar6 == 0) break;
        if (sVar6 == 0x25) {
          if (param_4 == 0) goto LAB_1025c666;
          uVar1 = local_10 >> 8;
          local_10 = local_10 & 0xffffff00;
          sVar6 = param_3[1];
          psVar2 = param_3 + 1;
          if (sVar6 == 0x23) {
            local_10 = CONCAT31((int3)uVar1,1);
            sVar6 = param_3[2];
            psVar2 = param_3 + 2;
          }
          param_3 = psVar2;
          if ((sVar6 == 0x45) || (sVar6 == 0x4f)) {
            param_3 = param_3 + 1;
            sVar6 = *param_3;
          }
          cVar3 = FUN_1025d323(local_1c,sVar6,param_4,&local_c,&local_8,param_5,local_10);
          if (cVar3 == '\0') {
            if (local_8 == 0) goto LAB_1025c68d;
            *param_1 = 0;
            goto LAB_1025c666;
          }
        }
        else {
          *local_c = sVar6;
          local_c = local_c + 1;
          local_8 = local_8 + -1;
        }
        param_3 = param_3 + 1;
      } while (local_8 != 0);
      if (local_8 == 0) {
LAB_1025c68d:
        *param_1 = 0;
        if (local_8 == 0) {
          puVar4 = (undefined4 *)FUN_10268ffd();
          *puVar4 = 0x22;
        }
        else {
LAB_1025c666:
          puVar4 = (undefined4 *)FUN_10268ffd();
          *puVar4 = 0x16;
          FUN_10273ea8();
        }
      }
      else {
        *local_c = 0;
        iVar5 = param_2 - local_8;
      }
      if (local_14 != '\0') {
        *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
      }
    }
  }
  return iVar5;
}


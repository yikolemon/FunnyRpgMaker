/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026c6ba */

void FUN_1026c6ba(void *param_1,short *param_2)

{
  int *piVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  short *local_40;
  int *local_3c;
  undefined1 local_38 [4];
  int local_34 [2];
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_40 = param_2;
  _memset(param_1,0,0x1ca);
  uVar8 = 0;
  local_3c = local_34;
LAB_1026c6f7:
  do {
    iVar4 = 0;
    uVar9 = uVar8;
    while( true ) {
      if (3 < uVar9) goto LAB_1026c885;
      if (iVar4 == 2) {
        psVar7 = local_40;
        do {
          sVar2 = *psVar7;
          psVar7 = psVar7 + 1;
        } while (sVar2 != 0);
        iVar5 = (int)psVar7 - (int)(local_40 + 1) >> 1;
      }
      else {
        iVar5 = FUN_1027bd70(local_40,&DAT_1035a6fc);
      }
      uVar8 = uVar9 + 1;
      piVar1 = local_3c + 3;
      local_3c[-1] = (int)local_40;
      *local_3c = iVar5;
      local_3c[1] = iVar4;
      sVar2 = local_40[iVar5];
      local_40 = local_40 + iVar5 + 1;
      if (sVar2 == 0) goto LAB_1026c76a;
      local_3c = piVar1;
      if (sVar2 == 0x2d) goto LAB_1026c6f7;
      if (sVar2 != 0x2e) break;
      iVar4 = 2;
      uVar9 = uVar8;
    }
  } while (sVar2 == 0x5f);
LAB_1026c76a:
  if (uVar9 == 0) {
    FUN_1026c4db(param_1,local_38);
  }
  else {
    if (uVar9 == 1) {
      cVar3 = FUN_1026c4db(param_1,local_38);
      if (((cVar3 == '\0') || (cVar3 = FUN_1026c54d(param_1,local_2c), cVar3 != '\0')) ||
         (cVar3 = FUN_1026c5bd(param_1,local_2c), cVar3 != '\0')) goto LAB_1026c885;
      puVar6 = local_2c;
    }
    else if (uVar9 == 2) {
      cVar3 = FUN_1026c4db(param_1,local_38);
      if ((cVar3 == '\0') ||
         (((cVar3 = FUN_1026c54d(param_1,local_2c), cVar3 != '\0' &&
           ((cVar3 = FUN_1026c5bd(param_1,local_20), cVar3 != '\0' ||
            (cVar3 = FUN_1026c67b(param_1,local_20), cVar3 != '\0')))) ||
          (cVar3 = FUN_1026c5bd(param_1,local_2c), cVar3 == '\0')))) goto LAB_1026c885;
      puVar6 = local_20;
    }
    else {
      if (((uVar9 != 3) || (cVar3 = FUN_1026c4db(param_1,local_38), cVar3 == '\0')) ||
         ((cVar3 = FUN_1026c54d(param_1,local_2c), cVar3 == '\0' ||
          (cVar3 = FUN_1026c5bd(param_1,local_20), cVar3 == '\0')))) goto LAB_1026c885;
      puVar6 = local_14;
    }
    FUN_1026c67b(param_1,puVar6);
  }
LAB_1026c885:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


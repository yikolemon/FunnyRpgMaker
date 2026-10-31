/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e095 */

void FUN_1026e095(undefined4 param_1,FILE *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined *puVar5;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if (((uint)param_2->_flag >> 0xc & 1) == 0) {
    iVar1 = __fileno(param_2);
    if ((iVar1 == -1) || (iVar1 = __fileno(param_2), iVar1 == -2)) {
      puVar3 = &DAT_1039b678;
    }
    else {
      iVar1 = __fileno(param_2);
      uVar2 = __fileno(param_2);
      puVar3 = (undefined *)((&DAT_103a5230)[iVar1 >> 6] + (uVar2 & 0x3f) * 0x38);
    }
    puVar5 = &DAT_1039b678;
    if ((puVar3[0x29] != '\x02') && (puVar3[0x29] != '\x01')) {
      iVar1 = __fileno(param_2);
      if ((iVar1 != -1) && (iVar1 = __fileno(param_2), iVar1 != -2)) {
        iVar1 = __fileno(param_2);
        uVar2 = __fileno(param_2);
        puVar5 = (undefined *)((&DAT_103a5230)[iVar1 >> 6] + (uVar2 & 0x3f) * 0x38);
      }
      if ((char)puVar5[0x28] < '\0') {
        iVar1 = FUN_10277f74(&local_14,local_10,5,param_1);
        if ((iVar1 == 0) && (iVar1 = 0, 0 < local_14)) {
          do {
            iVar4 = FUN_1026defe((int)local_10[iVar1],param_2,param_3);
            if (iVar4 == -1) break;
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_14);
        }
        goto LAB_1026e1bf;
      }
    }
    FUN_1026e1cd(param_1,param_2,param_3);
  }
  else {
    FUN_1026e1cd(param_1,param_2,param_3);
  }
LAB_1026e1bf:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


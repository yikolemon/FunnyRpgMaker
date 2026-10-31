/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020708d */

int __fastcall FUN_1020708d(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int local_40;
  uint local_3c;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  piVar1 = (int *)param_1[1];
  iVar4 = param_1[2];
  iVar2 = FUN_102066b3();
  if ((-1 < (int)local_3c && iVar2 == 0) &&
     (*(uint *)(iVar4 + 0x28) = local_3c, local_3c <= (uint)(piVar1[2] - *piVar1) / 10)) {
    if (local_3c != 0) {
      uVar3 = FUN_101c2a50(*param_1,0x10,0,local_3c,0,&local_34);
      *(undefined4 *)(iVar4 + 0x24) = uVar3;
      iVar2 = local_34;
      if (local_34 != 0) goto LAB_102070dd;
    }
    iVar2 = FUN_10206611();
    if (iVar2 != 0) {
      iVar2 = -1;
      local_40 = iVar4;
      do {
        iVar4 = FUN_10206656();
        uVar5 = iVar4 - 0x14;
        if (uVar5 < 0x12) {
          if ((0x34000U >> (uVar5 & 0x1f) & 1) == 0) {
            if ((7U >> (uVar5 & 0x1f) & 1) == 0) goto LAB_102071e5;
            iVar2 = iVar2 + 1;
            if (iVar2 != *(int *)(local_40 + 0x28)) {
              *(int *)(local_40 + 0x28) = iVar2;
            }
            FUN_1026fb00(*(undefined4 *)(local_40 + 0x24),iVar2,0x10,&LAB_101f03d2);
            iVar2 = 0;
            goto LAB_102070dd;
          }
          iVar2 = iVar2 + 1;
          if (*(int *)(local_40 + 0x28) <= iVar2) break;
          puVar8 = (undefined4 *)(iVar2 * 0x10 + *(int *)(local_40 + 0x24));
          local_34 = 5;
          local_2c = 5;
          local_24 = 3;
          local_1c = 3;
          iVar6 = FUN_1020670a(4);
          if (iVar6 < 3) break;
          *puVar8 = local_30;
          puVar8[1] = local_28;
          uVar3 = local_20;
          uVar7 = 0;
          if ((iVar4 != 0x25) && (uVar3 = 0, uVar7 = local_20, iVar6 == 4 && iVar4 == 0x22)) {
            uVar3 = local_18;
          }
          puVar8[2] = uVar7;
          puVar8[3] = uVar3;
        }
        else {
LAB_102071e5:
          if (iVar4 != 0x4b) break;
        }
        iVar4 = FUN_10206611();
      } while (iVar4 != 0);
    }
  }
  iVar2 = 0xa0;
LAB_102070dd:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar2;
}


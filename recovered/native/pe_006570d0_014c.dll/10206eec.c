/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10206eec */

int __fastcall FUN_10206eec(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_4c;
  int local_48;
  uint local_44;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  piVar1 = (int *)param_1[1];
  iVar6 = param_1[2];
  iVar2 = FUN_102066b3();
  iVar7 = 0xa0;
  if ((-1 < (int)local_44 && iVar2 == 0) &&
     (*(uint *)(iVar6 + 0x20) = local_44, local_44 <= (uint)(piVar1[2] - *piVar1) / 0x14)) {
    if (local_44 != 0) {
      uVar3 = FUN_101c2a50(*param_1,0x14,0,local_44,0,&local_3c);
      *(undefined4 *)(iVar6 + 0x1c) = uVar3;
      iVar7 = local_3c;
      if (local_3c != 0) goto LAB_10207068;
    }
    iVar2 = FUN_10206611();
    iVar7 = 0xa0;
    if (iVar2 != 0) {
      iVar2 = -1;
      local_48 = iVar6;
      do {
        uVar4 = FUN_10206656();
        if (uVar4 == 0x38) {
          local_4c = 0xa0;
          iVar2 = iVar2 + 1;
          iVar7 = local_4c;
          if (*(int *)(local_48 + 0x20) <= iVar2) goto LAB_10207068;
          iVar6 = *(int *)(local_48 + 0x1c);
          local_3c = 3;
          local_34 = 2;
          local_2c = 2;
          local_24 = 2;
          local_1c = 2;
          iVar5 = FUN_1020670a(5);
          iVar7 = local_4c;
          if (iVar5 != 5) goto LAB_10207068;
          *(undefined4 *)(iVar6 + iVar2 * 0x14) = local_38;
          *(undefined4 *)(iVar6 + 4 + iVar2 * 0x14) = local_30;
          *(undefined4 *)(iVar6 + 8 + iVar2 * 0x14) = local_28;
          *(undefined4 *)(iVar6 + 0xc + iVar2 * 0x14) = local_20;
          *(undefined4 *)(iVar6 + 0x10 + iVar2 * 0x14) = local_18;
        }
        else if (uVar4 != 0x4b) {
          local_4c = 0xa0;
          iVar7 = local_4c;
          if ((uVar4 < 0x18) && ((0xb00000U >> (uVar4 & 0x1f) & 1) != 0)) {
            local_4c = 0;
            iVar7 = local_4c;
            if (iVar2 + 1 != *(int *)(local_48 + 0x20)) {
              *(int *)(local_48 + 0x20) = iVar2 + 1;
            }
          }
          goto LAB_10207068;
        }
        iVar6 = FUN_10206611();
      } while (iVar6 != 0);
      iVar7 = 0xa0;
    }
  }
LAB_10207068:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar7;
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045e664 */

int __fastcall FUN_0045e664(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int local_4c;
  int local_48;
  uint local_44;
  uint local_40;
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
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_4c;
  piVar1 = (int *)param_1[1];
  iVar2 = param_1[2];
  iVar3 = FUN_0045de2b(param_1,&local_44);
  iVar4 = 0xa0;
  if ((-1 < (int)local_44 && iVar3 == 0) &&
     (*(uint *)(iVar2 + 0x20) = local_44, local_44 <= (uint)(piVar1[2] - *piVar1) / 0x14)) {
    if (local_44 != 0) {
      iVar4 = FUN_0041efcd(*param_1,0x14,0,local_44,0,&local_3c);
      *(int *)(iVar2 + 0x1c) = iVar4;
      iVar4 = local_3c;
      if (local_3c != 0) goto LAB_0045e7e0;
    }
    puVar5 = (uint *)FUN_0045dd89((int)param_1,(int *)&local_40);
    iVar4 = 0xa0;
    if (puVar5 != (uint *)0x0) {
      iVar3 = -1;
      local_48 = iVar2;
      do {
        uVar6 = FUN_0045ddce(puVar5,local_40);
        if (uVar6 == 0x38) {
          local_4c = 0xa0;
          iVar3 = iVar3 + 1;
          iVar4 = local_4c;
          if (*(int *)(local_48 + 0x20) <= iVar3) goto LAB_0045e7e0;
          iVar2 = *(int *)(local_48 + 0x1c);
          local_3c = 3;
          local_34 = 2;
          local_2c = 2;
          local_24 = 2;
          local_1c = 2;
          iVar7 = FUN_0045de82(param_1,(int)&local_3c,5);
          iVar4 = local_4c;
          if (iVar7 != 5) goto LAB_0045e7e0;
          *(undefined4 *)(iVar2 + iVar3 * 0x14) = local_38;
          *(undefined4 *)(iVar2 + 4 + iVar3 * 0x14) = local_30;
          *(undefined4 *)(iVar2 + 8 + iVar3 * 0x14) = local_28;
          *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x14) = local_20;
          *(undefined4 *)(iVar2 + 0x10 + iVar3 * 0x14) = local_18;
        }
        else if (uVar6 != 0x4b) {
          local_4c = 0xa0;
          iVar4 = local_4c;
          if ((uVar6 < 0x18) && ((0xb00000U >> (uVar6 & 0x1f) & 1) != 0)) {
            local_4c = 0;
            iVar4 = local_4c;
            if (iVar3 + 1 != *(int *)(local_48 + 0x20)) {
              *(int *)(local_48 + 0x20) = iVar3 + 1;
            }
          }
          goto LAB_0045e7e0;
        }
        puVar5 = (uint *)FUN_0045dd89((int)param_1,(int *)&local_40);
      } while (puVar5 != (uint *)0x0);
      iVar4 = 0xa0;
    }
  }
LAB_0045e7e0:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_4c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_4c);
  }
  return iVar4;
}


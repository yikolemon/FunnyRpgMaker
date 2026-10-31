/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045e805 */

undefined1 * __fastcall FUN_0045e805(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint unaff_EBP;
  undefined4 *puVar9;
  int local_40;
  uint local_3c;
  uint local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_40;
  piVar1 = (int *)param_1[1];
  iVar6 = param_1[2];
  iVar2 = FUN_0045de2b(param_1,&local_3c);
  if ((-1 < (int)local_3c && iVar2 == 0) &&
     (*(uint *)(iVar6 + 0x28) = local_3c, local_3c <= (uint)(piVar1[2] - *piVar1) / 10)) {
    if (local_3c != 0) {
      iVar2 = FUN_0041efcd(*param_1,0x10,0,local_3c,0,(int *)&local_34);
      *(int *)(iVar6 + 0x24) = iVar2;
      if (local_34 != (undefined1 *)0x0) goto LAB_0045e855;
    }
    puVar3 = (uint *)FUN_0045dd89((int)param_1,(int *)&local_38);
    if (puVar3 != (uint *)0x0) {
      iVar2 = -1;
      local_40 = iVar6;
      do {
        uVar4 = FUN_0045ddce(puVar3,local_38);
        uVar5 = uVar4 - 0x14;
        if (uVar5 < 0x12) {
          if ((0x34000U >> (uVar5 & 0x1f) & 1) == 0) {
            if ((7U >> (uVar5 & 0x1f) & 1) == 0) goto LAB_0045e95d;
            uVar4 = iVar2 + 1;
            if (uVar4 != *(uint *)(local_40 + 0x28)) {
              *(uint *)(local_40 + 0x28) = uVar4;
            }
            FUN_00492530(*(undefined1 **)(local_40 + 0x24),uVar4,0x10,&LAB_00447b4a);
            local_34 = (undefined1 *)0x0;
            goto LAB_0045e855;
          }
          iVar2 = iVar2 + 1;
          if (*(int *)(local_40 + 0x28) <= iVar2) break;
          puVar9 = (undefined4 *)(iVar2 * 0x10 + *(int *)(local_40 + 0x24));
          local_34 = (undefined1 *)0x5;
          local_2c = 5;
          local_24 = 3;
          local_1c = 3;
          iVar6 = FUN_0045de82(param_1,(int)&local_34,4);
          if (iVar6 < 3) break;
          *puVar9 = local_30;
          puVar9[1] = local_28;
          uVar7 = local_20;
          uVar8 = 0;
          if ((uVar4 != 0x25) && (uVar7 = 0, uVar8 = local_20, iVar6 == 4 && uVar4 == 0x22)) {
            uVar7 = local_18;
          }
          puVar9[2] = uVar8;
          puVar9[3] = uVar7;
        }
        else {
LAB_0045e95d:
          if (uVar4 != 0x4b) break;
        }
        puVar3 = (uint *)FUN_0045dd89((int)param_1,(int *)&local_38);
      } while (puVar3 != (uint *)0x0);
    }
  }
  local_34 = (undefined1 *)0xa0;
LAB_0045e855:
  if (DAT_0050e8c0 != (unaff_EBP ^ (uint)&local_30)) {
                    /* WARNING: Subroutine does not return */
    local_34 = &LAB_0045e9af;
    FUN_0047f2c0(unaff_EBP ^ (uint)&local_30);
  }
  return local_34;
}


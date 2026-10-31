/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c65ad */

int __fastcall
FUN_101c65ad(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
            undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined2 *local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  if (param_5 + 1U < 2) {
    if (param_4 < 1) {
      iVar1 = 10;
      goto LAB_101c680a;
    }
    local_2c = *param_1;
    uVar7 = 0;
    iVar8 = 0;
    local_1c = param_1;
    do {
      iVar1 = FUN_101c461e(param_2,*(undefined4 *)(param_3 + iVar8 * 4));
      if ((((iVar1 != 0) ||
           (uVar2 = FUN_101c4970(param_2,&local_18), iVar1 = local_18, local_18 != 0)) ||
          (iVar1 = 9, 0xffffff < uVar2)) || (0xffffff - uVar2 < uVar7 + 6)) goto LAB_101c680a;
      uVar7 = uVar7 + 6 + uVar2;
      iVar8 = iVar8 + 1;
    } while (param_4 != iVar8);
    puVar3 = (undefined2 *)FUN_101c21f6(local_2c,uVar7 + 2,&local_18);
    iVar1 = local_18;
    if (local_18 != 0) goto LAB_101c680a;
    *puVar3 = 0x180;
    *(undefined4 *)(puVar3 + 1) = 0;
    local_30 = 1;
    uVar2 = 6;
    local_3c = 2;
    local_34 = 0;
    iVar1 = 0;
    local_40 = puVar3;
    local_28 = uVar7 + 2;
    do {
      local_38 = uVar2;
      local_20 = iVar1;
      iVar1 = FUN_101c461e(param_2,*(undefined4 *)(param_3 + iVar1 * 4));
      if (((iVar1 != 0) || (uVar4 = FUN_101c4970(param_2,&local_18), local_18 != 0)) ||
         (((int)uVar4 < 0 || (uVar5 = FUN_101c4692(param_2,&local_18), local_18 != 0))))
      goto LAB_101c67f8;
      local_18 = 10;
      uVar6 = (uVar5 & 0xffff) >> 8;
      uVar2 = local_38;
      if (uVar6 != 0) {
        iVar1 = uVar4 - 2;
        if (uVar4 < 2) {
          iVar1 = 0;
        }
        if (local_30 == uVar6) {
          local_34 = local_34 + iVar1;
        }
        else {
          if (uVar7 + 2 < local_3c + 3U) goto LAB_101c67f8;
          *(int *)((int)local_40 + local_3c) = local_34;
          if (uVar6 == 5) break;
          uVar2 = local_38 + 6;
          if (uVar7 + 2 < uVar2) goto LAB_101c67f8;
          *(undefined1 *)((int)local_40 + local_38) = 0x80;
          local_3c = local_38 + 2;
          *(char *)((int)local_40 + local_38 + 1) = (char)((uVar5 & 0xffff) >> 8);
          *(undefined4 *)((int)local_40 + local_38 + 2) = 0;
          local_34 = iVar1;
          local_30 = uVar6;
          local_24 = uVar2;
        }
        if (((uVar7 < uVar2) || (uVar7 < uVar2 + iVar1)) ||
           (local_18 = FUN_101c4659(param_2,uVar2 + (int)local_40,iVar1), uVar2 = uVar2 + iVar1,
           local_18 != 0)) goto LAB_101c67f8;
      }
      iVar1 = local_20 + 1;
    } while (param_4 != iVar1);
    if ((uVar2 <= uVar7) &&
       (*(undefined2 *)((int)local_40 + uVar2) = 0x380, local_3c + 3U <= local_28)) {
      *(int *)((int)local_40 + local_3c) = local_34;
      iVar1 = FUN_101c602f(uVar2 + 2,0,"type1",param_6);
      goto LAB_101c680a;
    }
LAB_101c67f8:
    FUN_101c0017(local_2c,local_40);
  }
  iVar1 = 1;
LAB_101c680a:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar1;
}


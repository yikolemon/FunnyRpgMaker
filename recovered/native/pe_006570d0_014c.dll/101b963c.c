/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b963c */

undefined4 __thiscall FUN_101b963c(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_4c;
  uint local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_4c;
  local_14 = 0xffffffff;
  local_18 = &LAB_101bcf70;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_30 = param_1;
  if (*(int *)(param_2 + 4) != 0x80000) {
    if (*(int *)(param_2 + 4) == 0x40000) {
      iVar4 = *(int *)(param_2 + 0x28) + *(uint *)(param_2 + 0x1c);
      iVar6 = 0;
      iVar8 = -iVar4;
      do {
        local_38 = iVar8;
        local_40 = iVar6;
        local_48 = local_40 + iVar4;
        if (local_48 <= *(uint *)(param_2 + 0x1c)) break;
        uVar5 = (uint)*(byte *)(iVar4 + -1 + local_40);
        uVar1 = uVar5 - 0x20;
        if ((uVar1 < 0x1c) && ((0x8001001U >> (uVar1 & 0x1f) & 1) != 0)) break;
        iVar6 = local_40 + -1;
        iVar8 = local_38 + 1;
      } while (uVar5 != 9);
      local_28 = (int *)0x0;
      local_3c = 0;
      local_14 = 0;
      local_40 = -local_40;
      local_34 = 0;
      iVar6 = 0;
      piVar3 = (int *)0x0;
      local_20 = (undefined1 *)&local_4c;
      while (local_24 = piVar3, iVar6 < *(int *)(local_30 + 0x10c)) {
        local_2c = iVar6;
        local_28 = piVar3;
        iVar6 = FUN_101b9a50(*(undefined4 *)(*(int *)(local_30 + 0x114) + iVar6 * 4),local_48,
                             local_40);
        if (iVar6 == 0) {
          local_4c = *(int *)(local_30 + 0x114);
          if (local_34 == local_3c) {
            if (local_3c == 0) {
              iVar6 = 8;
            }
            else {
              iVar6 = local_3c / 2 + local_3c;
            }
            local_44 = local_3c + 1;
            if (local_3c + 1 < iVar6) {
              local_44 = iVar6;
            }
            local_28 = local_24;
            local_14 = 0;
            piVar3 = (int *)FUN_100fa1fa(local_44 * 4);
            piVar2 = local_24;
            if (local_24 != (int *)0x0) {
              FUN_1025b2d0(piVar3,local_24,local_3c << 2);
              local_28 = piVar2;
              local_24 = piVar3;
              FUN_100fa2cb(piVar2);
              piVar3 = local_24;
            }
          }
          else {
            local_44 = local_3c;
            piVar3 = local_24;
          }
          piVar3[local_34] = *(int *)(local_4c + local_2c * 4);
          local_34 = local_34 + 1;
          local_3c = local_44;
          local_24 = piVar3;
        }
        piVar3 = local_24;
        iVar6 = local_2c + 1;
      }
      if (local_34 == 0) {
        local_14 = 0;
        local_28 = piVar3;
        FUN_101b92e6(local_30,"No match for \"%.*s\"!\n",local_40,local_48);
      }
      else {
        iVar6 = local_40;
        if (local_34 != 1) {
          do {
            local_2c = iVar6;
            if (0 < local_34) {
              iVar6 = 0;
              iVar8 = 0;
              do {
                if (iVar8 != 0) {
                  if ((iVar6 != 0) &&
                     (iVar4 = _toupper((int)*(char *)(piVar3[iVar8] + local_2c)), iVar6 == iVar4))
                  goto LAB_101b993a;
                  local_14 = 0;
                  if (0 < local_2c) {
                    local_28 = local_24;
                    FUN_1014269e(-(local_38 + *(int *)(param_2 + 0x1c)),local_40);
                    local_28 = local_24;
                    FUN_101426f2(*(undefined4 *)(param_2 + 0x28),*local_24,local_2c + *local_24);
                  }
                  local_28 = local_24;
                  FUN_101b92e6(local_30,"Possible matches:\n");
                  iVar6 = 0;
                  while (iVar6 < local_34) {
                    local_28 = local_24;
                    local_2c = iVar6;
                    FUN_101b92e6(local_30,"- %s\n",local_24[iVar6]);
                    iVar6 = local_2c + 1;
                  }
                  goto code_r0x101b98cf;
                }
                iVar6 = _toupper((int)*(char *)(*piVar3 + local_2c));
LAB_101b993a:
                iVar8 = iVar8 + 1;
              } while (iVar8 < local_34);
            }
            iVar6 = local_2c + 1;
          } while( true );
        }
        local_14 = 0;
        local_28 = piVar3;
        FUN_1014269e(-(local_38 + *(int *)(param_2 + 0x1c)),local_40);
        local_28 = local_24;
        FUN_101426f2(*(undefined4 *)(param_2 + 0x28),*local_24,0);
        local_28 = local_24;
        FUN_101426f2(*(undefined4 *)(param_2 + 0x28),&DAT_1034bcc8,0);
      }
code_r0x101b98cf:
      local_28 = local_24;
      local_14 = 0xffffffff;
      if (local_24 != (int *)0x0) {
        FUN_100fa2cb(local_24);
      }
    }
    goto code_r0x101b9a1c;
  }
  iVar6 = *(int *)(param_1 + 0x124);
  if (*(int *)(param_2 + 0x14) == 0x204) {
    if (iVar6 == -1) goto code_r0x101b9a1c;
    iVar8 = -1;
    if (iVar6 + 1 < *(int *)(param_1 + 0x118)) {
      iVar8 = iVar6 + 1;
    }
code_r0x101b99df:
    *(int *)(param_1 + 0x124) = iVar8;
    if (iVar6 == iVar8) goto code_r0x101b9a1c;
    if (-1 < iVar8) goto code_r0x101b99f1;
    puVar7 = &DAT_10356101;
  }
  else {
    if (*(int *)(param_2 + 0x14) != 0x203) goto code_r0x101b9a1c;
    if (iVar6 == -1) {
      iVar8 = *(int *)(param_1 + 0x118) + -1;
      goto code_r0x101b99df;
    }
    if (iVar6 < 1) goto code_r0x101b9a1c;
    iVar8 = iVar6 + -1;
    *(int *)(param_1 + 0x124) = iVar8;
code_r0x101b99f1:
    puVar7 = *(undefined1 **)(*(int *)(param_1 + 0x120) + iVar8 * 4);
  }
  FUN_1014269e(0,*(undefined4 *)(param_2 + 0x20));
  FUN_101426f2(0,puVar7,0);
code_r0x101b9a1c:
  *unaff_FS_OFFSET = local_1c;
  return 0;
}


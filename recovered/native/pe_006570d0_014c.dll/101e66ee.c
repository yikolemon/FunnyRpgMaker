/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e66ee */

int __fastcall FUN_101e66ee(int param_1,uint param_2,int param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int local_2c;
  uint *local_28;
  undefined4 local_24;
  uint *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  local_18 = 0;
  local_24 = *(undefined4 *)(param_1 + 100);
  puVar6 = *(uint **)(param_1 + 0x2e0);
  if (puVar6 == (uint *)0x0) {
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    iVar3 = local_18;
    if (param_2 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(param_3 + uVar4 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x2dd) = 1;
          local_18 = FUN_101e4fb4(param_1,0);
          iVar3 = local_18;
          if (local_18 == 0) {
            puVar6 = *(uint **)(param_1 + 0x2e0);
            goto LAB_101e6721;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
    }
    goto LAB_101e6a09;
  }
LAB_101e6721:
  local_28 = (uint *)puVar6[3];
  uVar4 = *local_28;
  if (param_2 < *local_28) {
    uVar4 = param_2;
  }
  if (uVar4 != 0) {
    uVar2 = 0;
    do {
      if (*(int *)(param_3 + uVar2 * 4) - 0x10001U < 0xfffdffff) {
        local_18 = 6;
        iVar3 = local_18;
        goto LAB_101e6a09;
      }
      uVar2 = uVar2 + 1;
    } while (uVar4 != uVar2);
  }
  if ((*(char *)(param_1 + 0x2dc) == '\0') && (puVar6[0x13] == 0)) {
    local_18 = FUN_101e6a2c();
    if ((local_18 != 0x8e) && (iVar3 = local_18, local_18 != 0)) goto LAB_101e6a09;
    local_18 = 0;
  }
  local_1c = puVar6[1];
  if (local_1c == 0) {
    uVar2 = FUN_101c00c3(local_24,4,0,*local_28,0,&local_18);
    puVar6[1] = uVar2;
    iVar3 = local_18;
    if (local_18 != 0) goto LAB_101e6a09;
  }
  uVar2 = puVar6[2];
  if (uVar2 == 0) {
    uVar2 = FUN_101c00c3(local_24,4,0,*local_28,0,&local_18);
    puVar6[2] = uVar2;
    iVar3 = local_18;
    if (local_18 != 0) goto LAB_101e6a09;
    uVar7 = *local_28;
    local_2c = 1;
LAB_101e6938:
    *puVar6 = uVar7;
    if (param_3 != 0) {
      FUN_1025b2d0(uVar2,param_3,uVar4 * 4);
    }
    if (param_4 != '\0') {
      FUN_101e6dcf(puVar6[2],puVar6[1]);
    }
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    if (*puVar6 != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(puVar6[2] + uVar4 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x2dd) = 1;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (*puVar6 != uVar4);
    }
    if (*(int *)(param_1 + 0x2c4) != 0) {
      if (local_2c == 1) {
        local_18 = FUN_101e7021();
      }
      else if (local_2c == 2) {
        FUN_101c0017(local_24,*(int *)(param_1 + 0x2c4));
        *(undefined4 *)(param_1 + 0x2c4) = 0;
        local_18 = FUN_101e6f26();
      }
    }
    iVar3 = local_18;
    if (puVar6[0xf] != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(puVar6[0x11] + uVar4 * 4) = 0xfffe0000;
        uVar4 = uVar4 + 1;
      } while (uVar4 < puVar6[0xf]);
    }
  }
  else {
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        if (*(int *)(uVar2 + uVar5 * 4) != *(int *)(param_3 + uVar5 * 4)) {
          local_2c = 2;
          goto LAB_101e690f;
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
    uVar5 = *local_28;
    iVar3 = local_2c;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      if (uVar4 < uVar5) {
        bVar1 = false;
        uVar7 = uVar4;
        do {
          if (*(int *)(uVar2 + uVar7 * 4) != 0) {
            bVar1 = true;
          }
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
        goto LAB_101e6900;
      }
    }
    else if (uVar4 < uVar5) {
      bVar1 = false;
      uVar7 = uVar4;
      do {
        if (*(int *)(uVar2 + uVar7 * 4) !=
            *(int *)(((*(uint *)(param_1 + 4) >> 0x10) - 1) * uVar5 * 4 + puVar6[5] + uVar7 * 4)) {
          bVar1 = true;
        }
        uVar7 = uVar7 + 1;
      } while (uVar5 != uVar7);
LAB_101e6900:
      local_2c = 0;
      uVar5 = uVar4;
      iVar3 = param_1;
      local_20 = puVar6;
      if (bVar1) {
LAB_101e690f:
        uVar7 = *local_28;
        if (uVar5 < uVar7) {
          do {
            if (*(int *)(uVar2 + uVar5 * 4) != 0) {
              local_2c = 2;
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar7 != uVar5);
        }
        goto LAB_101e6938;
      }
    }
    local_2c = iVar3;
    iVar3 = -1;
  }
LAB_101e6a09:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


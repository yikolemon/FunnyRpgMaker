/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043de5e */

int __fastcall FUN_0043de5e(int param_1,uint param_2,uint *param_3,char param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int local_2c;
  uint *local_28;
  int local_24;
  uint *local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  local_18 = 0;
  local_24 = *(int *)(param_1 + 100);
  puVar6 = *(uint **)(param_1 + 0x2e0);
  if (puVar6 == (uint *)0x0) {
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    iVar4 = local_18;
    if (param_2 != 0) {
      uVar5 = 0;
      do {
        if (param_3[uVar5] != 0) {
          *(undefined1 *)(param_1 + 0x2dd) = 1;
          local_18 = FUN_0043c724(param_1,(undefined4 *)0x0);
          iVar4 = local_18;
          if (local_18 == 0) {
            puVar6 = *(uint **)(param_1 + 0x2e0);
            goto LAB_0043de91;
          }
          break;
        }
        uVar5 = uVar5 + 1;
      } while (param_2 != uVar5);
    }
    goto LAB_0043e179;
  }
LAB_0043de91:
  local_28 = (uint *)puVar6[3];
  uVar5 = *local_28;
  if (param_2 < *local_28) {
    uVar5 = param_2;
  }
  if (uVar5 != 0) {
    uVar2 = 0;
    do {
      if (param_3[uVar2] - 0x10001 < 0xfffdffff) {
        local_18 = 6;
        iVar4 = local_18;
        goto LAB_0043e179;
      }
      uVar2 = uVar2 + 1;
    } while (uVar5 != uVar2);
  }
  if ((*(char *)(param_1 + 0x2dc) == '\0') && (puVar6[0x13] == 0)) {
    local_18 = FUN_0043e19c(param_1);
    if ((local_18 != 0x8e) && (iVar4 = local_18, local_18 != 0)) goto LAB_0043e179;
    local_18 = 0;
  }
  local_1c = puVar6[1];
  if (local_1c == 0) {
    uVar2 = FUN_0041c6b3(local_24,4,0,*local_28,0,&local_18);
    puVar6[1] = uVar2;
    iVar4 = local_18;
    if (local_18 != 0) goto LAB_0043e179;
  }
  puVar3 = (uint *)puVar6[2];
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)FUN_0041c6b3(local_24,4,0,*local_28,0,&local_18);
    puVar6[2] = (uint)puVar3;
    iVar4 = local_18;
    if (local_18 != 0) goto LAB_0043e179;
    uVar7 = *local_28;
    local_2c = 1;
LAB_0043e0a8:
    *puVar6 = uVar7;
    if (param_3 != (uint *)0x0) {
      FUN_004878c0(puVar3,param_3,uVar5 * 4);
    }
    if (param_4 != '\0') {
      if (local_1c == 0) {
        uVar5 = *puVar6;
      }
      FUN_0043e53f(param_1,uVar5,puVar6[2],puVar6[1]);
    }
    *(undefined1 *)(param_1 + 0x2dd) = 0;
    if (*puVar6 != 0) {
      uVar5 = 0;
      do {
        if (*(int *)(puVar6[2] + uVar5 * 4) != 0) {
          *(undefined1 *)(param_1 + 0x2dd) = 1;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (*puVar6 != uVar5);
    }
    if (*(int *)(param_1 + 0x2c4) != 0) {
      if (local_2c == 1) {
        local_18 = FUN_0043e791(param_1,*(int **)(param_1 + 0x68));
      }
      else if (local_2c == 2) {
        FUN_0041c607(local_24,*(int *)(param_1 + 0x2c4));
        *(undefined4 *)(param_1 + 0x2c4) = 0;
        local_18 = FUN_0043e696(param_1,*(int **)(param_1 + 0x68));
      }
    }
    iVar4 = local_18;
    if (puVar6[0xf] != 0) {
      uVar5 = 0;
      do {
        *(undefined4 *)(puVar6[0x11] + uVar5 * 4) = 0xfffe0000;
        uVar5 = uVar5 + 1;
      } while (uVar5 < puVar6[0xf]);
    }
  }
  else {
    if (uVar5 != 0) {
      uVar2 = 0;
      do {
        if (puVar3[uVar2] != param_3[uVar2]) {
          local_2c = 2;
          goto LAB_0043e07f;
        }
        uVar2 = uVar2 + 1;
      } while (uVar5 != uVar2);
    }
    uVar2 = *local_28;
    iVar4 = local_2c;
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      if (uVar5 < uVar2) {
        bVar1 = false;
        uVar7 = uVar5;
        do {
          if (puVar3[uVar7] != 0) {
            bVar1 = true;
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 != uVar7);
        goto LAB_0043e070;
      }
    }
    else if (uVar5 < uVar2) {
      bVar1 = false;
      uVar7 = uVar5;
      do {
        if (puVar3[uVar7] !=
            *(uint *)(((*(uint *)(param_1 + 4) >> 0x10) - 1) * uVar2 * 4 + puVar6[5] + uVar7 * 4)) {
          bVar1 = true;
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
LAB_0043e070:
      local_2c = 0;
      uVar2 = uVar5;
      iVar4 = param_1;
      local_20 = puVar6;
      if (bVar1) {
LAB_0043e07f:
        uVar7 = *local_28;
        if (uVar2 < uVar7) {
          do {
            if (puVar3[uVar2] != 0) {
              local_2c = 2;
              break;
            }
            uVar2 = uVar2 + 1;
          } while (uVar7 != uVar2);
        }
        goto LAB_0043e0a8;
      }
    }
    local_2c = iVar4;
    iVar4 = -1;
  }
LAB_0043e179:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_2c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_2c);
  }
  return iVar4;
}


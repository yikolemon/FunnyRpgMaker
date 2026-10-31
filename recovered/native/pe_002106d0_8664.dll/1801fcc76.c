/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fcc76 */

int FUN_1801fcc76(longlong param_1)

{
  char *_Str1;
  char *_Str2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_328 [32];
  undefined8 local_308;
  int *local_300;
  ulonglong local_2f8;
  ulonglong local_2f0;
  int local_2e4;
  undefined1 local_2e0 [152];
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_228;
  int local_204;
  longlong local_200;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1a0;
  undefined8 local_168;
  int local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_b8;
  undefined8 local_b0;
  int local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_328;
  uVar5 = *(undefined8 *)(param_1 + 0x2a0);
  FUN_1801fd2ae(local_2e0);
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x1c8) = 0xf5c;
  *(undefined8 *)(param_1 + 0x180) = 0x70027a000;
  local_2e4 = FUN_1801fd2bb(local_2e0,*(undefined8 *)(param_1 + 0xa0),
                            *(undefined8 *)(param_1 + 0x98),uVar5);
  if ((((local_2e4 != 0) ||
       (local_2e4 = FUN_1801fd4a8(param_1,local_2e0,local_248,local_240), local_2e4 != 0)) ||
      (local_2e4 = FUN_1801fd872(local_2e0,uVar5), local_2e4 != 0)) ||
     (local_2e4 = FUN_1801fd4a8(param_1,local_2e0,local_238,local_230), local_2e4 != 0))
  goto LAB_1801fd112;
  *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xfe;
  piVar4 = *(int **)(param_1 + 0x2e0);
  if (piVar4 == (int *)0x0) {
LAB_1801fced3:
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  else {
    if (*piVar4 != 1 << (*(byte *)(piVar4 + 1) & 0x1f)) {
      FUN_1801fc2b5(param_1);
      piVar4 = *(int **)(param_1 + 0x2e0);
      if (piVar4 == (int *)0x0) goto LAB_1801fced3;
    }
    if ((piVar4[0xbe] != 0) && (piVar4[0xbe] != piVar4[1])) {
      piVar4[0xbe] = 0;
      piVar4 = *(int **)(param_1 + 0x2e0);
      if (piVar4 == (int *)0x0) goto LAB_1801fced3;
    }
    if ((*piVar4 == 0) || (piVar4[1] == 0)) {
      FUN_1801fc2b5(param_1);
      piVar4 = *(int **)(param_1 + 0x2e0);
      if (piVar4 == (int *)0x0) goto LAB_1801fced3;
    }
    if (*(longlong *)(piVar4 + 0x42) == 0) {
      FUN_1801fc2b5(param_1);
      piVar4 = *(int **)(param_1 + 0x2e0);
      if (piVar4 == (int *)0x0) goto LAB_1801fced3;
    }
    if (*(longlong *)(piVar4 + 10) == 0) {
      FUN_1801fc2b5(param_1);
      piVar4 = *(int **)(param_1 + 0x2e0);
      if (piVar4 == (int *)0x0) goto LAB_1801fced3;
    }
    if ((ulonglong)(uint)piVar4[1] != 0) {
      lVar6 = 0;
      do {
        if (*(char *)((longlong)piVar4 + lVar6 + 0xa8) == '\0') {
          FUN_1801fc2b5(param_1);
          if (*(longlong *)(param_1 + 0x2e0) == 0) goto LAB_1801fced3;
          break;
        }
        lVar6 = lVar6 + 0x18;
      } while ((ulonglong)(uint)piVar4[1] * 0x18 != lVar6);
    }
    if (*(int *)(param_1 + 0x2f0) != 0) {
      local_300 = &local_2e4;
      local_308 = 0;
      uVar5 = FUN_1801c9c3f(*(undefined8 *)(param_1 + 0x98),4,0);
      *(undefined8 *)(param_1 + 0x2f8) = uVar5;
      if (local_2e4 != 0) {
        *(undefined4 *)(param_1 + 0x2f0) = 0;
        goto LAB_1801fd112;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x240) = local_1c8;
  if (local_98 != 0) {
    *(undefined4 *)(param_1 + 0x220) = local_b8;
    *(undefined8 *)(param_1 + 0x208) = local_b0;
    *(undefined8 *)(param_1 + 0x228) = local_90;
    *(undefined8 *)(param_1 + 0x230) = uStack_88;
    *(undefined8 *)(param_1 + 0x238) = local_58;
    local_98 = 0;
    local_58 = 0;
  }
  if ((*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) == 0) && (local_150 == 0)) {
    local_2e4 = 3;
  }
  local_150 = 0;
  *(undefined8 *)(param_1 + 0x210) = local_168;
  *(undefined8 *)(param_1 + 0x250) = local_148;
  *(undefined8 *)(param_1 + 600) = uStack_140;
  *(undefined8 *)(param_1 + 0x218) = local_1c0;
  *(undefined8 *)(param_1 + 0x248) = local_1a0;
  local_1c0 = 0;
  local_1a0 = 0;
  if (*(int *)(param_1 + 0x1e0) == 1) {
    local_2f8 = 0;
    local_2f0 = 0;
    if (0 < local_204) {
      local_2f0 = 0;
      uVar8 = 0;
      local_2f8 = 0;
      do {
        _Str1 = *(char **)(local_200 + uVar8 * 8);
        *(undefined2 *)(*(longlong *)(param_1 + 0x1f8) + uVar8 * 2) = 0;
        *(char **)(*(longlong *)(param_1 + 0x200) + uVar8 * 8) = ".notdef";
        if ((_Str1 != (char *)0x0) && (iVar2 = *(int *)(param_1 + 0x240), 0 < (longlong)iVar2)) {
          lVar6 = *(longlong *)(param_1 + 0x248);
          lVar7 = 0;
          do {
            _Str2 = *(char **)(lVar6 + lVar7 * 8);
            iVar1 = strcmp(_Str1,_Str2);
            if (iVar1 == 0) {
              *(short *)(*(longlong *)(param_1 + 0x1f8) + uVar8 * 2) = (short)lVar7;
              *(char **)(*(longlong *)(param_1 + 0x200) + uVar8 * 8) = _Str2;
              iVar2 = strcmp(".notdef",_Str2);
              if (iVar2 != 0) {
                if ((int)uVar8 < (int)local_2f8) {
                  local_2f8 = uVar8;
                }
                local_2f8 = local_2f8 & 0xffffffff;
                uVar3 = (int)uVar8 + 1;
                iVar2 = (int)local_2f0;
                local_2f0 = local_2f0 & 0xffffffff;
                if (iVar2 <= (int)uVar3) {
                  local_2f0 = (ulonglong)uVar3;
                }
              }
              break;
            }
            lVar7 = lVar7 + 1;
          } while (iVar2 != lVar7);
        }
        uVar8 = uVar8 + 1;
      } while ((longlong)uVar8 < (longlong)local_204);
    }
    *(int *)(param_1 + 0x1ec) = (int)local_2f8;
    *(int *)(param_1 + 0x1f0) = (int)local_2f0;
    *(undefined4 *)(param_1 + 0x1e8) = local_228;
  }
  if (1000 < *(uint *)(param_1 + 0x184)) {
    *(undefined4 *)(param_1 + 0x184) = 7;
  }
  if (1000 < *(uint *)(param_1 + 0x188)) {
    *(undefined4 *)(param_1 + 0x188) = 1;
  }
LAB_1801fd112:
  FUN_1801fdd21(local_2e0);
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_328)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_328);
  }
  return local_2e4;
}


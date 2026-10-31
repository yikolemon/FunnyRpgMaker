/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180112c19 */

void FUN_180112c19(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  lVar2 = DAT_180419160;
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  uVar11 = *(uint *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  uVar6 = FUN_18010f8ee();
  if ((*(byte *)(lVar2 + 0x12f5) & 4) == 0) {
    if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
      FUN_18011dd57(param_1,uVar6);
      return;
    }
    goto LAB_1801130d9;
  }
  *(undefined1 *)(param_1 + 0x108) = 0;
  if (((uVar11 & 0x6000000) != 0) && (*(char *)(param_1 + 0x110) == '\x01')) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (((((*(byte *)(lVar2 + 0x2031) & 8) == 0) && (*(longlong *)(param_1 + 0x48) == 0)) &&
      ((lVar7 = *(longlong *)(param_1 + 0x408), lVar7 == 0 ||
       (((*(char *)(lVar7 + 0x112) == '\x01' && (*(char *)(lVar7 + 0x10a) != '\x01')) ||
        (lVar7 = *(longlong *)(lVar7 + 0x48), *(longlong *)(param_1 + 0x48) = lVar7, lVar7 == 0)))))
      ) && (*(int *)(param_1 + 0x50) != 0)) {
    lVar7 = FUN_18010f8b9();
    *(longlong *)(param_1 + 0x48) = lVar7;
    if (lVar7 == 0) {
      if ((*(float *)(param_1 + 0x54) != DAT_1802de564) ||
         (NAN(*(float *)(param_1 + 0x54)) || NAN(DAT_1802de564))) {
        if ((*(float *)(param_1 + 0x58) != DAT_1802de564) ||
           (NAN(*(float *)(param_1 + 0x58)) || NAN(DAT_1802de564))) {
          local_48 = 0;
          uVar9 = FUN_18011351e(param_1,*(undefined4 *)(param_1 + 0x10),param_1 + 0x54,
                                param_1 + 0x68);
          *(undefined8 *)(param_1 + 0x48) = uVar9;
        }
      }
    }
  }
  uVar1 = *(uint *)(lVar2 + 0x2030);
  if ((uVar1 >> 0xb & 1) != 0) {
    lVar7 = FUN_18010f8b9(*(undefined4 *)(lVar2 + 0x209c));
    *(longlong *)(param_1 + 0x48) = lVar7;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar2 + 0x209c);
    if (((lVar7 != 0) && ((*(byte *)(param_1 + 0x16) & 0x80) != 0)) &&
       (*(longlong *)(lVar7 + 0x78) != 0)) {
      *(longlong *)(lVar7 + 0x78) = param_1;
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x10);
      **(undefined4 **)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x10);
    }
    goto LAB_180112d27;
  }
  if ((uVar11 & 0x11000000) == 0) {
    if ((*(longlong *)(param_1 + 0x4c0) != 0) &&
       (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x4c0) + 0x90), lVar7 != 0))
    goto LAB_180112ce1;
    if ((uVar11 >> 0x19 & 1) != 0) {
      uVar9 = *(undefined8 *)(lVar2 + 0x2190);
      goto LAB_180112ce5;
    }
    cVar3 = FUN_18012f386(param_1);
    if (cVar3 != '\0') {
LAB_180112e68:
      local_48 = 0;
      uVar9 = FUN_18011351e(param_1,*(undefined4 *)(param_1 + 0x10),param_1 + 0x60,param_1 + 0x68);
      goto LAB_180112ce5;
    }
    if (((*(longlong *)(lVar2 + 0x1628) == 0) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x1628) + 0x428) != param_1)) ||
       (cVar3 = FUN_1801088d4(0), cVar3 == '\0')) {
      if (((*(longlong *)(param_1 + 0x48) != 0) &&
          (param_1 == *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x78))) &&
         ((*(int *)(lVar2 + 0x167c) == 0 || (*(char *)(lVar2 + 0x1689) == '\x01')))) {
        FUN_18012f7fa(param_1);
      }
    }
    else if ((*(longlong *)(param_1 + 0x48) != 0) &&
            (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x78) == param_1)) goto LAB_180112e68;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x408);
LAB_180112ce1:
    uVar9 = *(undefined8 *)(lVar7 + 0x48);
LAB_180112ce5:
    *(undefined8 *)(param_1 + 0x48) = uVar9;
  }
LAB_180112d27:
  if ((*(longlong *)(param_1 + 0x48) == 0) && (cVar3 = FUN_180108520(param_1,uVar6), cVar3 == '\0'))
  {
    local_48 = 0;
    uVar6 = FUN_18011351e(param_1,*(undefined4 *)(param_1 + 0x10),param_1 + 0x60,param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
  }
  if ((uVar1 >> 0xb & 1) == 0) {
    if ((uVar11 & 0x6000000) == 0) {
      puVar10 = *(undefined4 **)(param_1 + 0x48);
      if (puVar10 == (undefined4 *)0x0) {
        uVar11 = uVar11 & 0x1000000;
      }
      else {
        lVar7 = *(longlong *)(puVar10 + 0x1e);
        uVar11 = uVar11 & 0x1000000;
        if ((uVar11 == 0 && (lVar7 != 0 && param_1 != lVar7)) &&
           (uVar11 = 0, *(longlong *)(param_1 + 0x4c0) == 0)) {
          if (((*(byte *)(param_1 + 0x16) & 0x80) == 0) ||
             (((*(byte *)(param_1 + 0x495) & 5) == 1 || (*(int *)(lVar2 + 4) <= (int)puVar10[0x21]))
             )) {
            cVar3 = FUN_18012f7fa(param_1);
            if (cVar3 == '\0') {
              local_48 = 0x20;
              uVar6 = FUN_18011351e(param_1,*(undefined4 *)(param_1 + 0x10),param_1 + 0x60,
                                    param_1 + 0x68);
              *(undefined8 *)(param_1 + 0x48) = uVar6;
            }
          }
          else {
            if ((*(byte *)(lVar2 + 0x2acd) & 8) != 0) {
              FUN_1800fdfea("[viewport] Window \'%s\' steal Viewport %08X from Window \'%s\'\n",
                            *(undefined8 *)(param_1 + 8),*puVar10,*(undefined8 *)(lVar7 + 8));
              puVar10 = *(undefined4 **)(param_1 + 0x48);
            }
            *(longlong *)(puVar10 + 0x1e) = param_1;
            **(undefined4 **)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x10);
            *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x8c) = 0;
          }
          goto LAB_180112fb7;
        }
      }
      if (uVar11 == 0 && *(int *)(param_1 + 0x5c) < 0) goto LAB_180112fad;
    }
    else {
      if ((uVar11 >> 0x19 & 1) == 0) {
        puVar8 = (undefined8 *)
                 (*(longlong *)(lVar2 + 0x2160) + (longlong)*(int *)(lVar2 + 0x2158) * 0x38 + -0xc);
      }
      else {
        puVar8 = (undefined8 *)(lVar2 + 0x118);
      }
      uVar6 = *puVar8;
      bVar12 = true;
      if ((*(char *)(lVar2 + 0x21f4) == '\x01') && (*(char *)(lVar2 + 0x21f5) == '\x01')) {
        bVar12 = *(longlong *)(lVar2 + 0x2200) == 0;
      }
      local_38 = uVar6;
      bVar4 = FUN_1801088d4(&local_38);
      if ((((uVar11 & 0x12000000) != 0 | *(byte *)(param_1 + 0x110)) == 1) &&
         (bVar12 != true || bVar4 != 0)) {
        if ((bVar12 & bVar4) != 1) {
          FUN_18011aef2(&local_40,*(undefined4 *)(param_1 + 0x14));
          uVar6 = local_40;
        }
        local_40 = uVar6;
        iVar5 = FUN_18012f810(&local_40);
      }
      else {
        puVar10 = *(undefined4 **)(param_1 + 0x48);
LAB_180112fad:
        iVar5 = (int)*(short *)((longlong)puVar10 + 0xaa);
      }
      *(int *)(param_1 + 0x5c) = iVar5;
    }
  }
LAB_180112fb7:
  *(bool *)(param_1 + 0x108) = param_1 == *(longlong *)(*(undefined4 **)(param_1 + 0x48) + 0x1e);
  *(undefined4 *)(param_1 + 0x50) = **(undefined4 **)(param_1 + 0x48);
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return;
  }
LAB_1801130d9:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010df56 */

void __fastcall FUN_1010df56(int param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  iVar8 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_28;
  uVar9 = *(uint *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  iVar4 = FUN_1010ad36();
  if ((*(byte *)(iVar8 + 0x120d) & 4) == 0) {
    FUN_10118d2d(param_1,iVar4);
    goto LAB_1010e339;
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  if (((uVar9 & 0x6000000) != 0) && (*(char *)(param_1 + 0x100) == '\x01')) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (((((*(byte *)(iVar8 + 0x1ed1) & 8) == 0) && (*(int *)(param_1 + 0x3c) == 0)) &&
      ((iVar5 = *(int *)(param_1 + 0x3a0), iVar5 == 0 ||
       (((*(char *)(iVar5 + 0x102) == '\x01' && (*(char *)(iVar5 + 0xfa) != '\x01')) ||
        (iVar5 = *(int *)(iVar5 + 0x3c), *(int *)(param_1 + 0x3c) = iVar5, iVar5 == 0)))))) &&
     (*(int *)(param_1 + 0x40) != 0)) {
    iVar5 = FUN_1010ad03(*(int *)(param_1 + 0x40));
    *(int *)(param_1 + 0x3c) = iVar5;
    if (iVar5 == 0) {
      if ((*(float *)(param_1 + 0x44) != DAT_102b89b4) ||
         (NAN(*(float *)(param_1 + 0x44)) || NAN(DAT_102b89b4))) {
        if ((*(float *)(param_1 + 0x48) != DAT_102b89b4) ||
           (NAN(*(float *)(param_1 + 0x48)) || NAN(DAT_102b89b4))) {
          uVar6 = FUN_1010e792(param_1 + 0x44,param_1 + 0x58,0);
          *(undefined4 *)(param_1 + 0x3c) = uVar6;
        }
      }
    }
  }
  uVar1 = *(uint *)(iVar8 + 0x1ed0);
  if ((uVar1 >> 0xb & 1) != 0) {
    local_28 = iVar8;
    iVar4 = FUN_1010ad03(*(undefined4 *)(iVar8 + 0x1f34));
    *(int *)(param_1 + 0x3c) = iVar4;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(local_28 + 0x1f34);
    iVar8 = local_28;
    if (((iVar4 != 0) && ((*(byte *)(param_1 + 0xe) & 0x80) != 0)) && (*(int *)(iVar4 + 0x58) != 0))
    {
      *(int *)(iVar4 + 0x58) = param_1;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 8);
      **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 8);
    }
    goto LAB_1010e19d;
  }
  if ((uVar9 & 0x11000000) == 0) {
    if ((*(int *)(param_1 + 0x430) != 0) &&
       (iVar5 = *(int *)(*(int *)(param_1 + 0x430) + 0x78), iVar5 != 0)) goto LAB_1010dfea;
    if ((uVar9 >> 0x19 & 1) != 0) {
      uVar6 = *(undefined4 *)(iVar8 + 0x1ff0);
      goto LAB_1010dfed;
    }
    local_28 = iVar4;
    cVar2 = FUN_101292c3();
    if (cVar2 == '\0') {
      if (((*(int *)(iVar8 + 0x14dc) == 0) ||
          (*(int *)(*(int *)(iVar8 + 0x14dc) + 0x3b0) != param_1)) ||
         (cVar2 = FUN_10103c30(0), cVar2 == '\0')) {
        if (((*(int *)(param_1 + 0x3c) != 0) &&
            (param_1 == *(int *)(*(int *)(param_1 + 0x3c) + 0x58))) &&
           ((*(int *)(iVar8 + 0x1528) == 0 || (*(char *)(iVar8 + 0x1535) == '\x01')))) {
          FUN_101296d8();
        }
      }
      else if ((*(int *)(param_1 + 0x3c) != 0) &&
              (*(int *)(*(int *)(param_1 + 0x3c) + 0x58) == param_1)) {
        uVar6 = FUN_1010e792(param_1 + 0x50,param_1 + 0x58,0);
        goto LAB_1010dfed;
      }
    }
    else {
      uVar6 = FUN_1010e792(param_1 + 0x50,param_1 + 0x58,0);
      *(undefined4 *)(param_1 + 0x3c) = uVar6;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x3a0);
LAB_1010dfea:
    uVar6 = *(undefined4 *)(iVar5 + 0x3c);
LAB_1010dfed:
    *(undefined4 *)(param_1 + 0x3c) = uVar6;
  }
LAB_1010e19d:
  if ((*(int *)(param_1 + 0x3c) == 0) && (cVar2 = FUN_10103881(), cVar2 == '\0')) {
    uVar6 = FUN_1010e792(param_1 + 0x50,param_1 + 0x58,0);
    *(undefined4 *)(param_1 + 0x3c) = uVar6;
  }
  if ((uVar1 >> 0xb & 1) == 0) {
    if ((uVar9 & 0x6000000) == 0) {
      puVar7 = *(undefined4 **)(param_1 + 0x3c);
      if (puVar7 == (undefined4 *)0x0) {
        uVar9 = uVar9 & 0x1000000;
      }
      else {
        iVar4 = puVar7[0x16];
        uVar9 = uVar9 & 0x1000000;
        if ((uVar9 == 0 && (iVar4 != 0 && param_1 != iVar4)) &&
           (uVar9 = 0, *(int *)(param_1 + 0x430) == 0)) {
          if (((*(byte *)(param_1 + 0xe) & 0x80) == 0) ||
             (((*(byte *)(param_1 + 0x409) & 5) == 1 || (*(int *)(iVar8 + 4) <= (int)puVar7[0x18])))
             ) {
            cVar2 = FUN_101296d8();
            if (cVar2 == '\0') {
              uVar6 = FUN_1010e792(param_1 + 0x50,param_1 + 0x58,0x20);
              *(undefined4 *)(param_1 + 0x3c) = uVar6;
            }
          }
          else {
            if ((*(byte *)(iVar8 + 0x27b5) & 8) != 0) {
              FUN_100f99e6("[viewport] Window \'%s\' steal Viewport %08X from Window \'%s\'\n",
                           *(undefined4 *)(param_1 + 4),*puVar7,*(undefined4 *)(iVar4 + 4));
              puVar7 = *(undefined4 **)(param_1 + 0x3c);
            }
            puVar7[0x16] = param_1;
            **(undefined4 **)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 8);
            *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x68) = 0;
          }
          goto LAB_1010e327;
        }
      }
      if (uVar9 == 0 && *(int *)(param_1 + 0x4c) < 0) goto LAB_1010e31d;
    }
    else {
      if ((uVar9 >> 0x19 & 1) == 0) {
        puVar7 = (undefined4 *)(*(int *)(iVar8 + 0x1fd0) + *(int *)(iVar8 + 0x1fc8) * 0x28 + -8);
      }
      else {
        puVar7 = (undefined4 *)(iVar8 + 0xe4);
      }
      uVar6 = *puVar7;
      local_28 = puVar7[1];
      bVar10 = true;
      if ((*(char *)(iVar8 + 0x2040) == '\x01') && (*(char *)(iVar8 + 0x2041) == '\x01')) {
        bVar10 = *(int *)(iVar8 + 0x2048) == 0;
      }
      local_1c = uVar6;
      local_18 = local_28;
      bVar3 = FUN_10103c30(&local_1c);
      if ((((uVar9 & 0x12000000) != 0 | *(byte *)(param_1 + 0x100)) == 1) &&
         (bVar10 != true || bVar3 != 0)) {
        if ((bVar10 & bVar3) == 1) {
          local_20 = local_28;
          local_24 = uVar6;
        }
        else {
          FUN_10116108();
        }
        iVar8 = FUN_101296ea();
      }
      else {
        puVar7 = *(undefined4 **)(param_1 + 0x3c);
LAB_1010e31d:
        iVar8 = (int)*(short *)((int)puVar7 + 0x86);
      }
      *(int *)(param_1 + 0x4c) = iVar8;
    }
  }
LAB_1010e327:
  *(bool *)(param_1 + 0xf8) = param_1 == (*(undefined4 **)(param_1 + 0x3c))[0x16];
  *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(param_1 + 0x3c);
LAB_1010e339:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}


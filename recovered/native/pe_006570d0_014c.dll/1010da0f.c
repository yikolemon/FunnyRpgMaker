/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010da0f */

void FUN_1010da0f(int param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 local_1c;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  if ((*(char *)(param_1 + 0x102) == '\x01') && (*(char *)(param_1 + 0xfa) == '\0')) {
LAB_1010dc22:
    if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
      FUN_1011cc09();
      return;
    }
    goto LAB_1010dc66;
  }
  cVar3 = FUN_1010d9e3(param_1);
  if (cVar3 == '\0') {
    uVar6 = *(uint *)(param_1 + 0xc) >> 0x13 & 1;
    if (((*(byte *)(iVar2 + 0x1ed0) & 1) != 0) &&
       ((*(uint *)(iVar2 + 0x1ed4) & (int)*(char *)(param_1 + 0x121)) != 0)) {
      uVar6 = uVar6 | *(byte *)(iVar2 + 0x1f14);
    }
    if (uVar6 == 0) {
      iVar5 = *(int *)(param_1 + 0x438);
      goto LAB_1010daa5;
    }
LAB_1010db1f:
    FUN_10118c2f(iVar2,param_1,1);
  }
  else {
    iVar5 = *(int *)(param_1 + 0x438);
    if (iVar5 == 0) {
      iVar5 = FUN_1011b53b(iVar2);
      *(int *)(param_1 + 0x438) = iVar5;
    }
LAB_1010daa5:
    iVar7 = *(int *)(param_1 + 0x430);
    if ((iVar7 != 0 || iVar5 == 0) || (iVar7 = FUN_1011cc1f(), iVar7 != 0)) {
      if (*(int *)(iVar7 + 0x8c) < *(int *)(iVar2 + 4)) {
        do {
          iVar5 = iVar7;
          iVar7 = *(int *)(iVar5 + 0x18);
        } while (iVar7 != 0);
        if (*(int *)(iVar5 + 0x8c) < *(int *)(iVar2 + 4)) goto LAB_1010db1f;
        *(byte *)(param_1 + 0x409) = *(byte *)(param_1 + 0x409) | 1;
      }
      else {
        FUN_1011cd05();
        if (*(int *)(iVar7 + 0x78) == 0) {
          if (*(int *)(iVar7 + 0x14) == 2) {
            *(byte *)(param_1 + 0x409) = *(byte *)(param_1 + 0x409) | 1;
          }
          if ((1 < *(int *)(iVar7 + 0x24)) && (*(char *)(param_1 + 0x100) == '\x01'))
          goto LAB_1010dc22;
        }
        else {
          *(undefined4 *)(iVar7 + 0x14) = 3;
          if (((*(byte *)(iVar7 + 0x10) & 1) == 0) &&
             (*(short *)(param_1 + 0x10e) < *(short *)(*(int *)(iVar7 + 0x78) + 0x10e)))
          goto LAB_1010db1f;
          local_1c = 0;
          FUN_10111d56(iVar7 + 0x34,0,&local_1c);
          FUN_10107cf6(iVar7 + 0x3c,0);
          *(undefined1 *)(iVar2 + 0x1f14) = 0;
          bVar1 = *(byte *)(param_1 + 0x409);
          *(byte *)(param_1 + 0x409) = bVar1 & 0xf8 | 3;
          if ((*(byte *)(iVar7 + 0x10) & 1) == 0) {
            if (*(int *)(iVar7 + 0x7c) == param_1) {
              *(byte *)(param_1 + 0x409) = bVar1 | 7;
            }
            uVar6 = *(uint *)(param_1 + 0xc);
            *(uint *)(param_1 + 0xc) = uVar6 | 0x1000002;
            *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) | 2;
            uVar8 = uVar6 | 0x1000003;
            if ((*(uint *)(iVar7 + 0x10) & 0x3000) == 0) {
              uVar8 = uVar6 & 0xfffffffe | 0x1000002;
            }
            *(uint *)(param_1 + 0xc) = uVar8;
            if ((*(int *)(iVar7 + 0x30) != 0) && (*(char *)(param_1 + 0xfa) == '\x01')) {
              uVar4 = FUN_1011cd3e();
              *(undefined2 *)(param_1 + 0x40a) = uVar4;
            }
            if ((*(byte *)(iVar7 + 0xac) & 0x40) == 0) {
              if ((param_2 != (undefined1 *)0x0) &&
                 (*(int *)(iVar7 + 0xa0) == *(int *)(param_1 + 0xb8))) {
LAB_1010dc44:
                *param_2 = 0;
              }
            }
            else if (param_2 != (undefined1 *)0x0) goto LAB_1010dc44;
            uVar9 = FUN_101021d4(*(undefined4 *)(param_1 + 4),0);
            *(undefined4 *)(param_1 + 0xbc) = uVar9;
          }
        }
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
LAB_1010dc66:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


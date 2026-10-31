/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10282aea */

void FUN_10282aea(int param_1,ushort *param_2,uint param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  DWORD DVar5;
  uint uVar6;
  undefined8 local_2c;
  int local_24;
  int local_20;
  uint local_1c;
  ushort *local_18;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar6 = 0;
  local_20 = param_1;
  local_18 = param_2;
  local_14 = 0;
  if ((param_1 != 0) && (param_3 == 0)) goto LAB_10282d7c;
  if (param_2 == (ushort *)0x0) {
    *(undefined1 *)(param_4 + 0x1c) = 1;
    *(undefined4 *)(param_4 + 0x18) = 0x16;
    FUN_10274034(0,0,0,0,0,param_4);
    goto LAB_10282d7c;
  }
  if (*(char *)(param_4 + 0x14) == '\0') {
    FUN_1025ec50();
  }
  iVar4 = *(int *)(param_4 + 0xc);
  if (*(int *)(iVar4 + 8) == 0xfde9) {
    local_2c = 0;
    FUN_10287383(local_20,&local_18,param_3,&local_2c,param_4);
    goto LAB_10282d7c;
  }
  if (local_20 == 0) {
    if (*(int *)(iVar4 + 0xa8) == 0) {
      uVar2 = *local_18;
      puVar3 = local_18;
      while (uVar2 != 0) {
        if (0xff < uVar2) goto LAB_10282d6e;
        puVar3 = puVar3 + 1;
        uVar2 = *puVar3;
      }
      goto LAB_10282d7c;
    }
    iVar4 = FUN_10274283(*(undefined4 *)(iVar4 + 8),0,local_18,0xffffffff,0,0,0,&local_14);
joined_r0x10282d63:
    if ((iVar4 != 0) && (local_14 == 0)) goto LAB_10282d7c;
  }
  else {
    if (*(int *)(iVar4 + 0xa8) == 0) {
      if (param_3 != 0) {
        do {
          if (0xff < *local_18) goto LAB_10282d6e;
          *(char *)(local_20 + uVar6) = (char)*local_18;
          uVar2 = *local_18;
          local_18 = local_18 + 1;
        } while ((uVar2 != 0) && (uVar6 = uVar6 + 1, uVar6 < param_3));
      }
      goto LAB_10282d7c;
    }
    if (*(int *)(iVar4 + 4) == 1) {
      if (param_3 != 0) {
        local_1c = param_3;
        puVar3 = local_18;
        do {
          if (*puVar3 == 0) {
            param_3 = ((int)puVar3 - (int)local_18 >> 1) + 1;
            break;
          }
          puVar3 = puVar3 + 1;
          local_1c = local_1c - 1;
        } while (local_1c != 0);
        iVar4 = *(int *)(param_4 + 0xc);
      }
      iVar4 = FUN_10274283(*(undefined4 *)(iVar4 + 8),0,local_18,param_3,local_20,param_3,0,
                           &local_14);
      goto joined_r0x10282d63;
    }
    local_1c = FUN_10274283(*(undefined4 *)(*(int *)(param_4 + 0xc) + 8),0,local_18,0xffffffff,
                            local_20,param_3,0,&local_14);
    if (local_14 == 0) {
      if (local_1c != 0) goto LAB_10282d7c;
      DVar5 = GetLastError();
      if (DVar5 == 0x7a) {
        if (param_3 != 0) {
          do {
            iVar4 = *(int *)(*(int *)(param_4 + 0xc) + 4);
            if (5 < iVar4) {
              iVar4 = 5;
            }
            uVar6 = FUN_10274283(*(undefined4 *)(*(int *)(param_4 + 0xc) + 8),0,local_18,1,local_10,
                                 iVar4,0,&local_14);
            local_2c = CONCAT44(uVar6,(undefined4)local_2c);
            if ((((uVar6 == 0) || (local_14 != 0)) || ((int)uVar6 < 0)) || (5 < uVar6))
            goto LAB_10282d6e;
            if (param_3 < uVar6 + local_1c) break;
            local_24 = 0;
            if (0 < (int)uVar6) {
              do {
                cVar1 = local_10[local_24];
                *(char *)(local_20 + local_1c) = cVar1;
                if (cVar1 == '\0') goto LAB_10282d7c;
                local_24 = local_24 + 1;
                local_1c = local_1c + 1;
              } while (local_24 < (int)uVar6);
            }
            local_18 = local_18 + 1;
          } while (local_1c < param_3);
        }
        goto LAB_10282d7c;
      }
    }
  }
LAB_10282d6e:
  *(undefined4 *)(param_4 + 0x18) = 0x2a;
  *(undefined1 *)(param_4 + 0x1c) = 1;
LAB_10282d7c:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


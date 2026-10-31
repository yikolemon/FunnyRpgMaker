/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001f304 */

ushort * FUN_14001f304(ushort *param_1,byte *param_2,uint param_3,undefined4 param_4,char param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 2;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0xf;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = (ushort)((param_3 & 0xff) << 8) | (ushort)(param_3 & 0xff);
  }
  else {
    cVar2 = FUN_14000d7b8(param_2,&DAT_14016fed7);
    if ((((cVar2 == '\0') && (cVar2 = FUN_14000d7b8(param_2,"false"), cVar2 == '\0')) &&
        (cVar2 = FUN_14000d7b8(param_2,&DAT_14016f834), cVar2 == '\0')) &&
       (cVar2 = FUN_14000d7b8(param_2,&DAT_14016fdfc), cVar2 == '\0')) {
      iVar3 = FUN_14000d73c(param_2,0,2,"0x");
      if ((iVar3 != 0) && (iVar3 = FUN_14000d73c(param_2,0,2,&DAT_14017067c), iVar3 != 0)) {
        local_50 = 0;
        cVar2 = FUN_140022a03(param_2);
        if ((cVar2 != '\0') && (lVar4 = FUN_140025c40(param_2,&DAT_1401707e9,0), lVar4 == -1)) {
          FUN_140006874(param_1,param_2);
          return param_1;
        }
      }
      lVar4 = *(longlong *)(param_2 + 0x10);
      pbVar5 = param_2;
      if (0xf < *(ulonglong *)(param_2 + 0x18)) {
        pbVar5 = *(byte **)param_2;
      }
      if (lVar4 == 1) {
        iVar3 = isprint((uint)*pbVar5);
        if (iVar3 == 0) {
          FUN_140025c82(param_1,param_2);
        }
        else {
          cVar2 = FUN_14000d7b8(param_2,"\'");
          if (cVar2 == '\0') {
            FUN_14002213a(local_70,1,param_4);
            FUN_140009e5b(&local_50,local_70,param_2);
            FUN_14000cf50(&local_50,param_4);
            *(undefined4 *)(param_1 + 8) = (undefined4)local_40;
            *(undefined4 *)(param_1 + 10) = local_40._4_4_;
            *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_38;
            *(undefined4 *)(param_1 + 0xe) = uStack_38._4_4_;
            *(undefined4 *)param_1 = (undefined4)local_50;
            *(undefined4 *)(param_1 + 2) = local_50._4_4_;
            *(undefined4 *)(param_1 + 4) = uStack_48;
            *(undefined4 *)(param_1 + 6) = uStack_44;
            local_40 = 0;
            uStack_38 = 0xf;
            local_50 = local_50 & 0xffffffffffffff00;
            FUN_1400017de(&local_50);
            FUN_1400017de(local_70);
          }
          else {
            FUN_14002213a(local_70,1,param_3);
            FUN_14000ed8c(&local_50,local_70,"\'");
            FUN_14000cf50(&local_50,param_3);
            *(undefined4 *)(param_1 + 8) = (undefined4)local_40;
            *(undefined4 *)(param_1 + 10) = local_40._4_4_;
            *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_38;
            *(undefined4 *)(param_1 + 0xe) = uStack_38._4_4_;
            *(undefined4 *)param_1 = (undefined4)local_50;
            *(undefined4 *)(param_1 + 2) = local_50._4_4_;
            *(undefined4 *)(param_1 + 4) = uStack_48;
            *(undefined4 *)(param_1 + 6) = uStack_44;
            local_40 = 0;
            uStack_38 = 0xf;
            local_50 = local_50 & 0xffffffffffffff00;
            FUN_1400017de(&local_50);
            FUN_1400017de(local_70);
          }
        }
      }
      else {
        if (*pbVar5 == 0x30) {
          bVar1 = pbVar5[1];
          if (bVar1 == 0x62) {
            if (lVar4 != 2) {
              lVar6 = 2;
              do {
                if ((pbVar5[lVar6] & 0xfe) != 0x30) goto LAB_14001f65a;
                lVar6 = lVar6 + 1;
              } while (lVar4 != lVar6);
            }
            FUN_140006874(param_1,param_2);
            return param_1;
          }
          if (bVar1 == 0x6f) {
            if (lVar4 != 2) {
              lVar6 = 2;
              do {
                if ((pbVar5[lVar6] & 0xf8) != 0x30) goto LAB_14001f65a;
                lVar6 = lVar6 + 1;
              } while (lVar4 != lVar6);
            }
            FUN_140006874(param_1,param_2);
            return param_1;
          }
          if (bVar1 == 0x78) {
            if (lVar4 != 2) {
              lVar6 = 2;
              do {
                if ((9 < (byte)(pbVar5[lVar6] - 0x30)) &&
                   ((uVar7 = pbVar5[lVar6] - 0x41, 0x25 < uVar7 ||
                    ((0x3f0000003fU >> ((ulonglong)uVar7 & 0x3f) & 1) == 0)))) goto LAB_14001f65a;
                lVar6 = lVar6 + 1;
              } while (lVar4 != lVar6);
            }
            FUN_140006874(param_1,param_2);
            return param_1;
          }
        }
LAB_14001f65a:
        cVar2 = FUN_140026081(param_2);
        if (cVar2 == '\0') {
          FUN_140025c82(param_1,param_2);
        }
        else {
          cVar2 = FUN_1400260dc(param_2);
          if (cVar2 == '\0') {
            FUN_14002213a(local_70,1,param_3);
            FUN_140009e5b(&local_50,local_70,param_2);
            FUN_14000cf50(&local_50,param_3);
            *(undefined4 *)(param_1 + 8) = (undefined4)local_40;
            *(undefined4 *)(param_1 + 10) = local_40._4_4_;
            *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_38;
            *(undefined4 *)(param_1 + 0xe) = uStack_38._4_4_;
            *(undefined4 *)param_1 = (undefined4)local_50;
            *(undefined4 *)(param_1 + 2) = local_50._4_4_;
            *(undefined4 *)(param_1 + 4) = uStack_48;
            *(undefined4 *)(param_1 + 6) = uStack_44;
            local_40 = 0;
            uStack_38 = 0xf;
            local_50 = local_50 & 0xffffffffffffff00;
            FUN_1400017de(&local_50);
            FUN_1400017de(local_70);
          }
          else if ((param_5 == '\0') && (100 < *(ulonglong *)(param_2 + 0x10))) {
            FUN_14000169c(local_70,&DAT_140171cd8);
            FUN_140009e5b(&local_50,local_70,param_2);
            FUN_14000ed8c(param_1,&local_50,&DAT_140171cd8);
            FUN_1400017de(&local_50);
            FUN_1400017de(local_70);
          }
          else {
            FUN_140026112(local_70,param_2);
            FUN_14002213a(local_90,1,param_3);
            FUN_140018470(&local_50);
            FUN_14000cf50(&local_50,param_3);
            *(undefined4 *)(param_1 + 8) = (undefined4)local_40;
            *(undefined4 *)(param_1 + 10) = local_40._4_4_;
            *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_38;
            *(undefined4 *)(param_1 + 0xe) = uStack_38._4_4_;
            *(undefined4 *)param_1 = (undefined4)local_50;
            *(undefined4 *)(param_1 + 2) = local_50._4_4_;
            *(undefined4 *)(param_1 + 4) = uStack_48;
            *(undefined4 *)(param_1 + 6) = uStack_44;
            local_40 = 0;
            uStack_38 = 0xf;
            local_50 = local_50 & 0xffffffffffffff00;
            FUN_1400017de(&local_50);
            FUN_1400017de(local_90);
            FUN_1400017de(local_70);
          }
        }
      }
    }
    else {
      FUN_140006874(param_1,param_2);
    }
  }
  return param_1;
}


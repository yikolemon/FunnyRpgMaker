/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180107870 */

byte FUN_180107870(undefined8 *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  lVar3 = DAT_180419160;
  local_38 = DAT_180402640 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
  if ((((param_2 != 0) && ((param_3 & 0x20) == 0)) && (*(int *)(DAT_180419160 + 0x1668) == param_2))
     && (*(int *)(DAT_180419160 + 0x166c) = *(int *)(DAT_180419160 + 0x166c) + 1,
        *(int *)(lVar3 + 0x165c) == param_2)) {
    local_40 = CONCAT44((float)((ulonglong)param_1[1] >> 0x20) + DAT_1802dc280._4_4_,
                        (float)param_1[1] + (float)DAT_1802dc280);
    local_48 = CONCAT44((float)((ulonglong)*param_1 >> 0x20) + DAT_1802de550._4_4_,
                        (float)*param_1 + (float)DAT_1802de550);
    local_58 = 0;
    local_68 = 0;
    local_60 = 0x40000000;
    FUN_180192c0a(*(undefined8 *)(lVar1 + 800),&local_48,&local_40,0xff0000ff);
  }
  if (*(longlong *)(lVar3 + 0x1610) == lVar1) {
    cVar4 = FUN_180107af4(param_1,param_1 + 1,1);
    if ((cVar4 != '\0') &&
       (((*(int *)(lVar3 + 0x1664) == 0 || (*(int *)(lVar3 + 0x1664) == param_2)) ||
        (*(char *)(lVar3 + 0x1678) == '\x01')))) {
      if (((*(int *)(lVar3 + 0x167c) == 0) || (*(int *)(lVar3 + 0x167c) == param_2)) ||
         ((*(char *)(lVar3 + 0x1689) != '\0' || (*(char *)(lVar3 + 0x168e) == '\x01')))) {
        if ((param_3 >> 0xd & 1) == 0) {
          cVar4 = FUN_1801074e6(lVar1,0);
          if (cVar4 != '\0') goto LAB_18010799e;
        }
        else {
LAB_18010799e:
          if (param_2 != 0) {
            if (((*(char *)(lVar3 + 0x2428) != '\x01') || (*(int *)(lVar3 + 0x2444) != param_2)) ||
               ((*(byte *)(lVar3 + 0x242c) & 2) != 0)) {
              FUN_18010745f(param_2);
              if (((param_3 >> 0xe & 1) == 0) ||
                 (*(undefined1 *)(lVar3 + 0x1678) = 1, *(int *)(lVar3 + 0x1668) == param_2)) {
                if ((param_2 == *(int *)(lVar3 + 0x1fe0)) &&
                   (((*(byte *)(lVar3 + 0x1fe9) & 4) != 0 && (*(int *)(lVar3 + 0x167c) != param_2)))
                   ) {
                  cVar4 = FUN_18010759c(0x11000);
                  if (cVar4 != '\0') {
                    uVar6 = FUN_180107c4e(*(undefined4 *)(lVar3 + 0x202c));
                    FUN_180107bf7("%s",uVar6);
                  }
                }
                if ((param_3 & 0x40) != 0) {
                  if (*(int *)(lVar3 + 0x167c) == param_2) {
                    FUN_180107456();
                  }
                  goto LAB_180107ab9;
                }
                if ((*(char *)(lVar3 + 0x2b09) == '\x01') && (*(int *)(lVar3 + 0x1668) == param_2))
                {
                  uVar6 = FUN_180103228(0);
                  local_58 = 0;
                  local_68 = 0;
                  local_60 = 0x3f800000;
                  FUN_180192c0a(uVar6,param_1,param_1 + 1,0xff00ffff);
                }
                if (*(int *)(lVar3 + 0x2b0c) == param_2) {
                  pcVar2 = (code *)swi(3);
                  bVar5 = (*pcVar2)();
                  return bVar5;
                }
                goto LAB_180107a95;
              }
            }
            goto LAB_180107ac2;
          }
          if ((param_3 & 0x40) == 0) {
LAB_180107a95:
            bVar5 = (short)param_3 < 0 | *(byte *)(lVar3 + 0x21f5) ^ 1;
            goto LAB_180107ac4;
          }
        }
LAB_180107ab9:
        *(undefined1 *)(lVar3 + 0x1679) = 1;
      }
    }
  }
LAB_180107ac2:
  bVar5 = 0;
LAB_180107ac4:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_88)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_88);
}


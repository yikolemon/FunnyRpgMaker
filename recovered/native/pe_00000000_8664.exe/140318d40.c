/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140318d40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_140318d40(undefined8 *param_1,int param_2,uint param_3)

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
  
  lVar3 = DAT_14062a630;
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  if ((((param_2 != 0) && ((param_3 & 0x20) == 0)) && (*(int *)(DAT_14062a630 + 0x1668) == param_2))
     && (*(int *)(DAT_14062a630 + 0x166c) = *(int *)(DAT_14062a630 + 0x166c) + 1,
        *(int *)(lVar3 + 0x165c) == param_2)) {
    local_40 = CONCAT44((float)((ulonglong)param_1[1] >> 0x20) + DAT_1404ed750._4_4_,
                        (float)param_1[1] + (float)DAT_1404ed750);
    local_48 = CONCAT44((float)((ulonglong)*param_1 >> 0x20) + DAT_1404efa20._4_4_,
                        (float)*param_1 + (float)DAT_1404efa20);
    local_58 = 0;
    local_68 = 0;
    local_60 = 0x40000000;
    FUN_1403a40da(*(undefined8 *)(lVar1 + 800),&local_48,&local_40,0xff0000ff);
  }
  if (*(longlong *)(lVar3 + 0x1610) == lVar1) {
    cVar4 = FUN_140318fc4(param_1,param_1 + 1,1);
    if ((cVar4 != '\0') &&
       (((*(int *)(lVar3 + 0x1664) == 0 || (*(int *)(lVar3 + 0x1664) == param_2)) ||
        (*(char *)(lVar3 + 0x1678) == '\x01')))) {
      if (((*(int *)(lVar3 + 0x167c) == 0) || (*(int *)(lVar3 + 0x167c) == param_2)) ||
         ((*(char *)(lVar3 + 0x1689) != '\0' || (*(char *)(lVar3 + 0x168e) == '\x01')))) {
        if ((param_3 >> 0xd & 1) == 0) {
          cVar4 = FUN_1403189b6(lVar1,0);
          if (cVar4 != '\0') goto LAB_140318e6e;
        }
        else {
LAB_140318e6e:
          if (param_2 != 0) {
            if (((*(char *)(lVar3 + 0x2428) != '\x01') || (*(int *)(lVar3 + 0x2444) != param_2)) ||
               ((*(byte *)(lVar3 + 0x242c) & 2) != 0)) {
              FUN_14031892f(param_2);
              if (((param_3 >> 0xe & 1) == 0) ||
                 (*(undefined1 *)(lVar3 + 0x1678) = 1, *(int *)(lVar3 + 0x1668) == param_2)) {
                if ((param_2 == *(int *)(lVar3 + 0x1fe0)) &&
                   (((*(byte *)(lVar3 + 0x1fe9) & 4) != 0 && (*(int *)(lVar3 + 0x167c) != param_2)))
                   ) {
                  cVar4 = FUN_140318a6c(0x11000);
                  if (cVar4 != '\0') {
                    uVar6 = FUN_14031911e(*(undefined4 *)(lVar3 + 0x202c));
                    FUN_1403190c7("opup",uVar6);
                  }
                }
                if ((param_3 & 0x40) != 0) {
                  if (*(int *)(lVar3 + 0x167c) == param_2) {
                    FUN_140318926();
                  }
                  goto LAB_140318f89;
                }
                if ((*(char *)(lVar3 + 0x2b09) == '\x01') && (*(int *)(lVar3 + 0x1668) == param_2))
                {
                  uVar6 = FUN_1403146f8(0);
                  local_58 = 0;
                  local_68 = 0;
                  local_60 = 0x3f800000;
                  FUN_1403a40da(uVar6,param_1,param_1 + 1,0xff00ffff);
                }
                if (*(int *)(lVar3 + 0x2b0c) == param_2) {
                  pcVar2 = (code *)swi(3);
                  bVar5 = (*pcVar2)();
                  return bVar5;
                }
                goto LAB_140318f65;
              }
            }
            goto LAB_140318f92;
          }
          if ((param_3 & 0x40) == 0) {
LAB_140318f65:
            bVar5 = (short)param_3 < 0 | *(byte *)(lVar3 + 0x21f5) ^ 1;
            goto LAB_140318f94;
          }
        }
LAB_140318f89:
        *(undefined1 *)(lVar3 + 0x1679) = 1;
      }
    }
  }
LAB_140318f92:
  bVar5 = 0;
LAB_140318f94:
  if (ram0x000140613b10 == (local_38 ^ (ulonglong)auStack_88)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_38 ^ (ulonglong)auStack_88);
}


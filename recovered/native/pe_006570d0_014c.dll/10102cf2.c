/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10102cf2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10102cf2(undefined8 *param_1,int param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  
  iVar3 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if ((((param_2 != 0) && ((param_3 & 0x20) == 0)) && (*(int *)(DAT_1039d74c + 0x1514) == param_2))
     && (*(int *)(DAT_1039d74c + 0x1518) = *(int *)(DAT_1039d74c + 0x1518) + 1,
        *(int *)(iVar3 + 0x1508) == param_2)) {
    local_1c = CONCAT44((float)((ulonglong)param_1[1] >> 0x20) + DAT_102b70a0._4_4_,
                        (float)param_1[1] + (float)DAT_102b70a0);
    local_24 = CONCAT44((float)((ulonglong)*param_1 >> 0x20) + DAT_102b89a0._4_4_,
                        (float)*param_1 + (float)DAT_102b89a0);
    FUN_1018b762(&local_24,&local_1c,_DAT_102b8bb0,_UNK_102b8bb4,_UNK_102b8bb8,_UNK_102b8bbc);
  }
  if (*(int *)(iVar3 + 0x14d0) == iVar1) {
    cVar4 = FUN_10102f3a(param_1,param_1 + 1,1);
    if (cVar4 != '\0') {
      if ((((*(int *)(iVar3 + 0x1510) == 0) || (*(int *)(iVar3 + 0x1510) == param_2)) ||
          (*(char *)(iVar3 + 0x1524) == '\x01')) &&
         (((*(int *)(iVar3 + 0x1528) == 0 || (*(int *)(iVar3 + 0x1528) == param_2)) ||
          ((*(char *)(iVar3 + 0x1535) != '\0' || (*(char *)(iVar3 + 0x153a) == '\x01')))))) {
        if ((param_3 >> 0xd & 1) == 0) {
          cVar4 = FUN_1010296d(iVar1,0);
          if (cVar4 != '\0') goto LAB_10102e03;
        }
        else {
LAB_10102e03:
          if (param_2 != 0) {
            if (((*(char *)(iVar3 + 0x2250) != '\x01') || (*(int *)(iVar3 + 0x2268) != param_2)) ||
               ((*(byte *)(iVar3 + 0x2254) & 2) != 0)) {
              FUN_101028e5(param_2);
              if (((param_3 >> 0xe & 1) == 0) ||
                 (*(undefined1 *)(iVar3 + 0x1524) = 1, *(int *)(iVar3 + 0x1514) == param_2)) {
                if ((param_2 == *(int *)(iVar3 + 0x1e80)) &&
                   (((*(byte *)(iVar3 + 0x1e89) & 4) != 0 && (*(int *)(iVar3 + 0x1528) != param_2)))
                   ) {
                  cVar4 = FUN_10102a1a(0x11000);
                  if (cVar4 != '\0') {
                    uVar6 = FUN_10103065(*(undefined4 *)(iVar3 + 0x1ecc));
                    FUN_10103022("%s",uVar6);
                  }
                }
                if ((param_3 & 0x40) != 0) {
                  if (*(int *)(iVar3 + 0x1528) == param_2) {
                    FUN_101028d8();
                  }
                  goto LAB_10102f0e;
                }
                if ((*(char *)(iVar3 + 0x27e5) == '\x01') && (*(int *)(iVar3 + 0x1514) == param_2))
                {
                  FUN_100fe900(0);
                  FUN_1018b762(param_1,param_1 + 1,_DAT_102b8bc0,_UNK_102b8bc4,_UNK_102b8bc8,
                               _UNK_102b8bcc);
                }
                if (*(int *)(iVar3 + 0x27e8) == param_2) {
                  pcVar2 = (code *)swi(3);
                  bVar5 = (*pcVar2)();
                  return bVar5;
                }
                goto LAB_10102eee;
              }
            }
            goto LAB_10102f15;
          }
          if ((param_3 & 0x40) == 0) {
LAB_10102eee:
            bVar5 = (short)param_3 < 0 | *(byte *)(iVar3 + 0x2041) ^ 1;
            goto LAB_10102f17;
          }
        }
LAB_10102f0e:
        *(undefined1 *)(iVar3 + 0x1525) = 1;
      }
    }
  }
LAB_10102f15:
  bVar5 = 0;
LAB_10102f17:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


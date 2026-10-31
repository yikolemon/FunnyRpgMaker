/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010870e */

void FUN_18010870e(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar2 = DAT_180419160;
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  if (*(longlong *)(DAT_180419160 + 0x1628) == 0) {
    if ((*(longlong *)(DAT_180419160 + 0x16a0) != 0) &&
       (*(int *)(*(longlong *)(DAT_180419160 + 0x16a0) + 0xc4) == *(int *)(DAT_180419160 + 0x167c)))
    {
      FUN_1801088af();
      if (*(char *)(lVar2 + 0x120) == '\0') goto LAB_18010883d;
    }
LAB_180108885:
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
      return;
    }
  }
  else {
    FUN_1801088af(*(undefined4 *)(DAT_180419160 + 0x167c));
    lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1628) + 0x428);
    bVar4 = 1;
    if (*(char *)(lVar1 + 0x10a) == '\0') {
      bVar4 = *(byte *)(lVar1 + 0x109);
    }
    if (*(char *)(lVar2 + 0x120) == '\x01') {
      bVar3 = FUN_1801088d4(lVar2 + 0x118);
      if ((bVar3 & bVar4) == 1) {
        fVar5 = (float)*(undefined8 *)(lVar2 + 0x118) - (float)*(undefined8 *)(lVar2 + 0x1694);
        fVar6 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x118) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(lVar2 + 0x1694) >> 0x20);
        local_30 = CONCAT44(fVar6,fVar5);
        if ((*(float *)(lVar1 + 0x60) != fVar5) || (NAN(*(float *)(lVar1 + 0x60)) || NAN(fVar5))) {
LAB_1801087bd:
          FUN_180108907(lVar1,&local_30,1);
          if ((*(longlong *)(lVar1 + 0x48) != 0) && (*(char *)(lVar1 + 0x108) == '\x01')) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x48) + 8) = local_30;
            lVar1 = *(longlong *)(lVar1 + 0x48);
            *(ulonglong *)(lVar1 + 0x20) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x148) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                          (float)*(undefined8 *)(lVar1 + 0x148) + (float)*(undefined8 *)(lVar1 + 8))
            ;
            FUN_18012bf4a(lVar1,&local_28,lVar1 + 0x148,lVar1 + 0x150);
            *(undefined8 *)(lVar1 + 0x28) = local_28;
          }
        }
        else if ((*(float *)(lVar1 + 100) != fVar6) || (NAN(*(float *)(lVar1 + 100)) || NAN(fVar6)))
        goto LAB_1801087bd;
        FUN_1801080ec(*(undefined8 *)(lVar2 + 0x1628),0);
        goto LAB_180108885;
      }
    }
    FUN_1801073dd();
LAB_18010883d:
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
      FUN_180107456();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140081a26 */

void FUN_140081a26(void)

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
  
  lVar2 = DAT_140f2a910;
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  if (*(longlong *)(DAT_140f2a910 + 0x1628) == 0) {
    if ((*(longlong *)(DAT_140f2a910 + 0x16a0) != 0) &&
       (*(int *)(*(longlong *)(DAT_140f2a910 + 0x16a0) + 0xc4) == *(int *)(DAT_140f2a910 + 0x167c)))
    {
      FUN_140081bc7();
      if (*(char *)(lVar2 + 0x120) == '\0') goto LAB_140081b55;
    }
LAB_140081b9d:
    if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
      return;
    }
  }
  else {
    FUN_140081bc7(*(undefined4 *)(DAT_140f2a910 + 0x167c));
    lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x1628) + 0x428);
    bVar4 = 1;
    if (*(char *)(lVar1 + 0x10a) == '\0') {
      bVar4 = *(byte *)(lVar1 + 0x109);
    }
    if (*(char *)(lVar2 + 0x120) == '\x01') {
      bVar3 = FUN_140081bec(lVar2 + 0x118);
      if ((bVar3 & bVar4) == 1) {
        fVar5 = (float)*(undefined8 *)(lVar2 + 0x118) - (float)*(undefined8 *)(lVar2 + 0x1694);
        fVar6 = (float)((ulonglong)*(undefined8 *)(lVar2 + 0x118) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(lVar2 + 0x1694) >> 0x20);
        local_30 = CONCAT44(fVar6,fVar5);
        if ((*(float *)(lVar1 + 0x60) != fVar5) || (NAN(*(float *)(lVar1 + 0x60)) || NAN(fVar5))) {
LAB_140081ad5:
          FUN_140081c1f(lVar1,&local_30,1);
          if ((*(longlong *)(lVar1 + 0x48) != 0) && (*(char *)(lVar1 + 0x108) == '\x01')) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x48) + 8) = local_30;
            lVar1 = *(longlong *)(lVar1 + 0x48);
            *(ulonglong *)(lVar1 + 0x20) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)(lVar1 + 0x148) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(lVar1 + 8) >> 0x20),
                          (float)*(undefined8 *)(lVar1 + 0x148) + (float)*(undefined8 *)(lVar1 + 8))
            ;
            FUN_1400a4e7a(lVar1,&local_28,lVar1 + 0x148,lVar1 + 0x150);
            *(undefined8 *)(lVar1 + 0x28) = local_28;
          }
        }
        else if ((*(float *)(lVar1 + 100) != fVar6) || (NAN(*(float *)(lVar1 + 100)) || NAN(fVar6)))
        goto LAB_140081ad5;
        FUN_140081404(*(undefined8 *)(lVar2 + 0x1628),0);
        goto LAB_140081b9d;
      }
    }
    FUN_1400806f5();
LAB_140081b55:
    if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
      FUN_14008076e();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}


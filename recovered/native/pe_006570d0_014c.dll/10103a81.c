/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10103a81 */

void FUN_10103a81(void)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  
  iVar2 = DAT_1039d74c;
  local_10 = DAT_10388d00 ^ (uint)&local_20;
  if (*(int *)(DAT_1039d74c + 0x14dc) == 0) {
    if ((*(int *)(DAT_1039d74c + 0x154c) != 0) &&
       (iVar1 = *(int *)(*(int *)(DAT_1039d74c + 0x154c) + 0xb4),
       iVar1 == *(int *)(DAT_1039d74c + 0x1528))) {
      FUN_10103c09(iVar1);
      if (*(char *)(iVar2 + 0xec) == '\0') goto LAB_10103ba2;
    }
LAB_10103be7:
    if (DAT_10388d00 == (local_10 ^ (uint)&local_20)) {
      return;
    }
  }
  else {
    FUN_10103c09(*(undefined4 *)(DAT_1039d74c + 0x1528));
    iVar1 = *(int *)(*(int *)(iVar2 + 0x14dc) + 0x3b0);
    bVar4 = 1;
    if (*(char *)(iVar1 + 0xfa) == '\0') {
      bVar4 = *(byte *)(iVar1 + 0xf9);
    }
    if (*(char *)(iVar2 + 0xec) == '\x01') {
      bVar3 = FUN_10103c30(iVar2 + 0xe4);
      if ((bVar3 & bVar4) == 1) {
        fVar5 = (float)*(undefined8 *)(iVar2 + 0xe4) - (float)*(undefined8 *)(iVar2 + 0x1540);
        fVar6 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0xe4) >> 0x20) -
                (float)((ulonglong)*(undefined8 *)(iVar2 + 0x1540) >> 0x20);
        local_20 = CONCAT44(fVar6,fVar5);
        if ((*(float *)(iVar1 + 0x50) != fVar5) || (NAN(*(float *)(iVar1 + 0x50)) || NAN(fVar5))) {
LAB_10103b29:
          FUN_10103c64(iVar1,&local_20,1);
          if ((*(int *)(iVar1 + 0x3c) != 0) && (*(char *)(iVar1 + 0xf8) == '\x01')) {
            *(undefined8 *)(*(int *)(iVar1 + 0x3c) + 8) = local_20;
            iVar1 = *(int *)(iVar1 + 0x3c);
            *(ulonglong *)(iVar1 + 0x20) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)(iVar1 + 0x100) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(iVar1 + 8) >> 0x20),
                          (float)*(undefined8 *)(iVar1 + 0x100) + (float)*(undefined8 *)(iVar1 + 8))
            ;
            FUN_10126046(&local_18,iVar1 + 0x100,iVar1 + 0x108);
            *(undefined8 *)(iVar1 + 0x28) = local_18;
          }
        }
        else if ((*(float *)(iVar1 + 0x54) != fVar6) ||
                (NAN(*(float *)(iVar1 + 0x54)) || NAN(fVar6))) goto LAB_10103b29;
        FUN_101034e2(*(undefined4 *)(iVar2 + 0x14dc),0);
        goto LAB_10103be7;
      }
    }
    FUN_10102871();
LAB_10103ba2:
    if (DAT_10388d00 == (local_10 ^ (uint)&local_20)) {
      FUN_101028d8();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


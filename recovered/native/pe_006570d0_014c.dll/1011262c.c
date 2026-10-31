/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011262c */

void FUN_1011262c(void)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 auStack_14 [8];
  uint local_c;
  
  iVar2 = DAT_1039d74c;
  local_c = DAT_10388d00 ^ (uint)auStack_14;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  if ((((*(char *)(iVar1 + 0x100) == '\x01') &&
       (*(int *)(DAT_1039d74c + 0x2048) == *(int *)(iVar1 + 0x3b8))) &&
      ((*(char *)(DAT_1039d74c + 0x209a) != '\0' || (*(int *)(DAT_1039d74c + 0x20a4) != 0)))) &&
     (*(int *)(DAT_1039d74c + 0x2050) == *(int *)(iVar1 + 0x19c))) {
    *(undefined1 *)(DAT_1039d74c + 0x209a) = 0;
    FUN_10112734();
    uVar3 = 1;
    if (*(char *)(DAT_1039d74c + 0x20d9) == '\0') {
      uVar3 = *(undefined1 *)(DAT_1039d74c + 0x209a);
    }
    *(undefined1 *)(DAT_1039d74c + 0x2099) = uVar3;
    if ((((*(float *)(iVar2 + 0x1e8c) < *(float *)(iVar1 + 0x28c)) ||
         (*(float *)(iVar2 + 0x1e90) < *(float *)(iVar1 + 0x290))) ||
        (*(float *)(iVar1 + 0x294) < *(float *)(iVar2 + 0x1e94))) ||
       (*(float *)(iVar1 + 0x298) < *(float *)(iVar2 + 0x1e98))) {
      FUN_1011278b(auStack_14,iVar1,iVar2 + 0x1e8c,0);
    }
  }
  if (DAT_10388d00 == (local_c ^ (uint)auStack_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1012d27b */

void FUN_1012d27b(undefined4 param_1,undefined4 param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  iVar2 = DAT_1039d74c;
  pfVar1 = (float *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x220);
  if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
    uStack_c = 0;
    uStack_10 = 0x1012d2a7;
    FUN_101119c9();
    uStack_c = param_2;
    uStack_10 = param_1;
    uStack_14 = 0x1012d2b1;
    FUN_1012d0cf();
    FUN_10111a82();
    return;
  }
  uStack_c = DAT_10388d00 ^ (uint)&uStack_14;
  *(undefined1 *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfb) = 1;
  if (*(char *)(*(int *)(iVar2 + 0x14cc) + 0xfe) == '\0') {
    FUN_100fa5d7(&uStack_10,&uStack_14,param_1,param_2);
    FUN_1012cbcc(uStack_10,uStack_14,1);
  }
  if (DAT_10388d00 == (uStack_c ^ (uint)&uStack_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a65fb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a65fb(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  
  pfVar7 = (float *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0xc);
  uVar9 = (ulonglong)_DAT_150b43d53;
  uVar6 = (ulonglong)*(uint *)(uVar9 + 0x14cc);
  if (*(char *)(uVar6 + 0xfe) == '\0') {
    uVar8 = (ulonglong)*(uint *)(uVar9 + 0x2358);
    if (*(uint *)(uVar9 + 0x2358) == 0) {
      *pfVar7 = 3.5639027e-29;
      pfVar7[-2] = 3.912505;
      pfVar7[-1] = 1.4013e-45;
      FUN_140754dc5();
    }
    else {
      if (*(char *)(uVar8 + 0x7b) == '\x01') {
        pfVar7[-2] = 3.9124873;
        pfVar7[-1] = 1.4013e-45;
        FUN_1407a66f9(uVar8);
      }
      if (((*(char *)(uVar8 + 0x7c) != '\0') || (*(int *)(uVar8 + 0x24) == 0)) ||
         (*(int *)(uVar8 + 0x2c) < *(int *)(uVar9 + 4))) {
        fVar1 = *(float *)(uVar6 + 0x148);
        fVar2 = *(float *)(uVar8 + 0x3c);
        pfVar7[1] = *(float *)(uVar8 + 0x44);
        *pfVar7 = fVar1 - fVar2;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(pfVar7 + -2) = &UNK_1407a6659;
        FUN_140755a9a();
      }
      *(float *)(uVar6 + 0x148) = *(float *)(uVar8 + 0x3c) + *(float *)(uVar8 + 0x48);
      if ('\x01' < *(char *)(uVar8 + 0x7a)) {
        *(undefined8 *)(uVar6 + 0x144) = *(undefined8 *)(uVar8 + 0x90);
      }
      *(undefined2 *)(uVar8 + 0x82) = 0xffff;
      uVar10 = (*(byte *)(uVar8 + 0x12) & 0x10) == 0;
      if ((bool)uVar10) {
        pfVar7[-2] = 3.9125233;
        pfVar7[-1] = 1.4013e-45;
        FUN_14076b438();
      }
      uVar3 = *(uint *)(uVar9 + 0x237c);
      *(ulonglong *)(uVar9 + 0x237c) = (ulonglong)uVar3;
      if ((bool)uVar10) {
        uVar5 = 0;
      }
      else {
        iVar4 = *(int *)(uVar9 + 0x2384);
        pfVar7[-2] = 3.912531;
        pfVar7[-1] = 1.4013e-45;
        uVar5 = FUN_1407a74fa(iVar4 + uVar3 * 8 + -8);
      }
      *(undefined4 *)(uVar9 + 0x2358) = uVar5;
    }
  }
  return;
}


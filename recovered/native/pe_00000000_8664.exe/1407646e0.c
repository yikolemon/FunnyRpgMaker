/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407646e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407646e0(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x24);
  uVar4 = (ulonglong)*(uint *)((ulonglong)_DAT_150b01e38 + 0x14cc);
  if (*(char *)(uVar4 + 0xfe) != '\0') {
    return;
  }
  if (0.0 <= (float)puVar3[0xe]) {
    puVar3[1] = *(float *)(uVar4 + 0x17c) - (float)puVar3[0xe];
    *puVar3 = 0;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar3 + -2) = &UNK_140764731;
    FUN_140755a9a();
  }
  fVar1 = *(float *)(uVar4 + 0x148 + (ulonglong)*(byte *)(uVar4 + 0x184) * 8);
  *(undefined1 (*) [16])(puVar3 + 5) = ZEXT416((uint)fVar1);
  uVar2 = *(undefined4 *)(uVar4 + 0x170);
  puVar3[1] = (*(float *)(uVar4 + 0x148) - fVar1) + *(float *)((ulonglong)(uint)puVar3[0xd] + 4) +
              0.0;
  *puVar3 = uVar2;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -2) = &UNK_14076477d;
  FUN_140755a9a();
}


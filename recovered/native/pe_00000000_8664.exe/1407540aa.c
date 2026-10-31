/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407540aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407540aa(float param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe8 - 0x10);
  puVar3[2] = param_2;
  uVar2 = (ulonglong)_DAT_150af180a;
  uVar4 = (ulonglong)*(uint *)(uVar2 + 0x14cc);
  puVar3[3] = param_1 - *(float *)(uVar4 + 0x148);
  *(float *)(uVar4 + 0x148) = param_1;
  uVar1 = *(undefined4 *)(uVar4 + 0x160);
  puVar3[1] = param_1 - *(float *)(uVar2 + 0xd20);
  *puVar3 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar3 + -2) = &UNK_1407540fd;
  FUN_140755a9a();
}


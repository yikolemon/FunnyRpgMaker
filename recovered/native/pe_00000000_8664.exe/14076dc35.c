/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076dc35 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076dc35(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined4 *)(ulonglong)((int)&stack0x00000000 - 8);
  *puVar2 = (int)(puVar2 + 4);
  *(undefined8 *)(puVar2 + -2) = 0x1000;
  *(undefined8 *)(puVar2 + -4) = 0x14076dc54;
  cVar1 = FUN_14075a8ea();
  puVar3 = (undefined8 *)(ulonglong)((int)(puVar2 + -2) + 4);
  if (cVar1 != '\0') {
    puVar3[-1] = *puVar3;
    puVar3[-2] = puVar3[1];
    puVar3[-3] = 0x14076dc67;
    FUN_14076dc0e();
    puVar3 = (undefined8 *)(ulonglong)((int)(puVar3 + -2) + 8);
  }
  if (_DAT_150af6976 == (*(uint *)((longlong)puVar3 + 4) ^ (uint)puVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)((longlong)puVar3 + -8) = FUN_14076dc89;
  FUN_1408802b0(*(uint *)((longlong)puVar3 + 4) ^ (uint)puVar3);
}


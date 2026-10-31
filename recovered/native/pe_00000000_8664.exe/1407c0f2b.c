/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c0f2b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c0f2b(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  pcVar4 = (char *)(ulonglong)_DAT_14cc808b1039d74c;
  *pcVar4 = *pcVar4 + (char)_DAT_14cc808b1039d74c;
  uVar5 = (ulonglong)*(uint *)(pcVar4 + 0x1e8);
  if (*(uint *)(pcVar4 + 0x1e8) != 0) {
    puVar6 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
    iVar3 = puVar6[5];
    if (iVar3 < 0) {
      iVar3 = *(int *)(uVar5 + 0xc);
    }
    uVar1 = *(undefined4 *)(uVar5 + 0x14);
    uVar2 = *(undefined4 *)(uVar5 + 0x18);
    puVar6[2] = *(undefined4 *)((ulonglong)*(uint *)(uVar5 + 100) + (ulonglong)(uint)(iVar3 * 0x1c))
    ;
    puVar6[1] = uVar2;
    *puVar6 = uVar1;
    *(undefined8 *)(puVar6 + -2) = 0x1407c0f7f;
    FUN_140742235();
    return;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407b9056 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b9056(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 unaff_RBX;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar5 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x84);
  uVar6 = (ulonglong)(uint)puVar5[0x26];
  pcVar4 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff80);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  pcVar4[0xe000] = pcVar4[0xe000] + (char)((ulonglong)unaff_RBX >> 8);
  puVar5[0xd] = (uint)pcVar4 & *(uint *)(uVar6 + 4);
  uVar3 = _DAT_150b567d3;
  uVar7 = (ulonglong)_DAT_150b567d3;
  *(undefined1 *)(uVar6 + 0x1f6) = 1;
  *(undefined2 *)(uVar6 + 0x1b6) = 0;
  uVar1 = *(undefined4 *)(uVar6 + 0x2c);
  iVar2 = *(int *)(uVar6 + 0x40);
  puVar5[1] = 0;
  *puVar5 = uVar1;
  puVar5[2] = iVar2 + 0x1f >> 3 & 0xfffffffc;
  *(undefined8 *)(puVar5 + -2) = 0x1407b90b8;
  FUN_1408b3720();
  uVar1 = *(undefined4 *)(uVar6 + 0x28);
  iVar2 = *(int *)(uVar6 + 0x40);
  puVar5[0xe] = 0;
  puVar5[1] = 0;
  *puVar5 = uVar1;
  puVar5[2] = iVar2 + 0x1f >> 3 & 0xfffffffc;
  *(undefined8 *)(puVar5 + -2) = 0x1407b90df;
  FUN_1408b3720();
  *(undefined2 *)(uVar6 + 0x1d2) = 0xffff;
  puVar5[7] = uVar3;
  puVar5[1] = *(undefined4 *)(uVar7 + 0xd0c);
  *puVar5 = 0x3f800000;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -2) = &UNK_1407b9106;
  FUN_140755a9a();
}


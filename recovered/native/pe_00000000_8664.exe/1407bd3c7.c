/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bd3c7 */

void FUN_1407bd3c7(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  puVar5 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 8);
  uVar7 = (ulonglong)(uint)puVar5[7];
  iVar2 = *(int *)(uVar7 + 0x48);
  iVar3 = *(int *)(uVar7 + 0x10);
  uVar4 = *(uint *)(uVar7 + 0x158);
  if (*(char *)((ulonglong)uVar4 + 0x185) == '\x01') {
    *(undefined8 *)(puVar5 + -2) = 0x1407bd3ed;
    FUN_140769412();
  }
  uVar6 = 0x4c;
  if ((*(byte *)(uVar7 + 0x68) & 1) == 0) {
    uVar6 = (ulonglong)((uint)*(byte *)(uVar7 + 0x1f9) * 4 + 0x44);
  }
  uVar1 = *(undefined4 *)((uint)(iVar2 * 0x74 + iVar3) + uVar6);
  puVar5[1] = *(undefined4 *)((ulonglong)uVar4 + 0x15c);
  *puVar5 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar5 + -2) = &UNK_1407bd423;
  FUN_140755a9a();
}


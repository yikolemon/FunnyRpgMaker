/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140754d5e */

/* WARNING: Instruction at (ram,0x000140754d95) overlaps instruction at (ram,0x000140754d94)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140754d5e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong unaff_RBX;
  ulonglong uVar7;
  longlong unaff_R14;
  
  uVar4 = _DAT_150af24b7;
  uVar5 = unaff_RBX & 0xffffffff;
  uVar7 = (ulonglong)_DAT_150af24b7;
  uVar6 = (ulonglong)*(uint *)(uVar7 + 0x1f74);
  if ((int)*(uint *)(uVar7 + 0x1f74) < (int)unaff_RBX) {
    FUN_140754dc5();
    uVar5 = (ulonglong)*(uint *)(uVar7 + 0x1f74);
    uVar6 = uVar5;
  }
  if (0 < (int)uVar5) {
    do {
      uVar6 = (ulonglong)(uint)((int)uVar6 * 5);
      puVar2 = (undefined8 *)(((ulonglong)*(uint *)(uVar7 + 0x1f7c) - 0x10) + uVar6 * 4);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)
               ((ulonglong)(uVar4 + 0xe00) +
               (ulonglong)
               (uint)(*(int *)(((ulonglong)*(uint *)(uVar7 + 0x1f7c) - 0x14) + uVar6 * 4) << 4));
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      uVar6 = (ulonglong)*(uint *)(uVar7 + 0x1f74);
      *(ulonglong *)(unaff_R14 + 0x1f74) = uVar6;
    } while (1 < uVar5);
  }
  return;
}


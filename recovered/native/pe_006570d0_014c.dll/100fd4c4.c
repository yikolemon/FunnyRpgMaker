/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fd4c4 */

void FUN_100fd4c4(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = DAT_1039d74c;
  iVar4 = *(int *)(DAT_1039d74c + 0x1f80);
  if (iVar4 < param_1) {
    FUN_100fcef5("Calling PopStyleVar() too many times!");
    iVar4 = *(int *)(iVar1 + 0x1f80);
    param_1 = iVar4;
  }
  if (0 < param_1) {
    param_1 = param_1 + 1;
    do {
      iVar4 = *(int *)(iVar1 + 0x1f88) + iVar4 * 0xc;
      puVar2 = (uint *)FUN_100fd097(*(undefined4 *)(iVar4 + -0xc));
      uVar5 = *puVar2 & 0xffff;
      uVar3 = *puVar2 >> 0x10;
      if (uVar5 == 0x802) {
        *(undefined4 *)(iVar1 + 0xcc0 + uVar3) = *(undefined4 *)(iVar4 + -8);
        *(undefined4 *)(iVar1 + 0xcc4 + uVar3) = *(undefined4 *)(iVar4 + -4);
      }
      else if (uVar5 == 0x801) {
        *(undefined4 *)(iVar1 + 0xcc0 + uVar3) = *(undefined4 *)(iVar4 + -8);
      }
      iVar4 = *(int *)(iVar1 + 0x1f80) + -1;
      *(int *)(iVar1 + 0x1f80) = iVar4;
      param_1 = param_1 + -1;
    } while (1 < param_1);
  }
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180101ccb */

void FUN_180101ccb(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  
  lVar2 = DAT_180419160;
  iVar3 = *(int *)(DAT_180419160 + 0x20f8);
  if (iVar3 < param_1) {
    FUN_180101698("Calling PopStyleVar() too many times!");
    iVar3 = *(int *)(lVar2 + 0x20f8);
    param_1 = iVar3;
  }
  if (0 < param_1) {
    param_1 = param_1 + 1;
    do {
      lVar1 = *(longlong *)(lVar2 + 0x2100) + (longlong)iVar3 * 0xc;
      puVar4 = (uint *)FUN_180101861(*(undefined4 *)(lVar1 + -0xc));
      uVar6 = *puVar4 & 0xffff;
      uVar5 = (ulonglong)(*puVar4 >> 0x10);
      if (uVar6 == 0x802) {
        *(undefined4 *)(lVar2 + 0xda8 + uVar5) = *(undefined4 *)(lVar1 + -8);
        *(undefined4 *)(lVar2 + 0xdac + uVar5) = *(undefined4 *)(lVar1 + -4);
      }
      else if (uVar6 == 0x801) {
        *(undefined4 *)(lVar2 + 0xda8 + uVar5) = *(undefined4 *)(lVar1 + -8);
      }
      iVar3 = *(int *)(lVar2 + 0x20f8) + -1;
      *(int *)(lVar2 + 0x20f8) = iVar3;
      param_1 = param_1 + -1;
    } while (1 < param_1);
  }
  return;
}


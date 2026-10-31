/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140312af5 */

void FUN_140312af5(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  
  lVar4 = DAT_14062a630;
  iVar5 = *(int *)(DAT_14062a630 + 0x20e8);
  if (iVar5 < param_1) {
    FUN_140312b68("enu ");
    iVar5 = *(int *)(lVar4 + 0x20e8);
    param_1 = iVar5;
  }
  if (0 < param_1) {
    uVar6 = param_1 + 1;
    do {
      puVar2 = (undefined8 *)(*(longlong *)(lVar4 + 0x20f0) + -0x10 + (longlong)iVar5 * 0x14);
      uVar3 = puVar2[1];
      puVar1 = (undefined8 *)
               (lVar4 + 0xee8 +
               (longlong)*(int *)(*(longlong *)(lVar4 + 0x20f0) + -0x14 + (longlong)iVar5 * 0x14) *
               0x10);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      iVar5 = *(int *)(lVar4 + 0x20e8) + -1;
      *(int *)(lVar4 + 0x20e8) = iVar5;
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return;
}


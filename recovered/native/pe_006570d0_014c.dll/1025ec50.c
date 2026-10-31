/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025ec50 */

void __fastcall FUN_1025ec50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_1025ebf0();
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x4c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x48);
  FUN_10274977(iVar1,(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 4));
  FUN_102749a8(iVar1,(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4));
  if ((*(uint *)(iVar1 + 0x350) & 2) == 0) {
    *(uint *)(iVar1 + 0x350) = *(uint *)(iVar1 + 0x350) | 2;
    *(undefined1 *)(param_1 + 0x14) = 2;
  }
  return;
}


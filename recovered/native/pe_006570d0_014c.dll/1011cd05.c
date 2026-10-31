/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011cd05 */

void __fastcall FUN_1011cd05(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_1039d74c + 0xe00;
  iVar2 = -0x24;
  do {
    uVar1 = FUN_100fad3d(*(int *)((int)&PTR_s_Mouse_10338d61_0x12_102b86dc + iVar2) * 0x10 + iVar3);
    *(undefined4 *)(param_1 + 0x430 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  } while (iVar2 != 0);
  return;
}


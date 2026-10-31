/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c071 */

void __fastcall FUN_1020c071(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_1020cfb4();
  if ((iVar2 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar3 = 0;
    do {
      uVar1 = FUN_1020b2f6();
      *(undefined1 *)(param_1 + 0x10 + uVar3) = uVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0xc));
  }
  return;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101292c3 */

undefined4 __fastcall FUN_101292c3(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((((*(char *)(DAT_1039d74c + 0x71) == '\0') && ((*(byte *)(param_1 + 0x25) & 2) == 0)) ||
      ((*(byte *)(DAT_1039d74c + 0x120d) & 4) == 0)) ||
     (((*(byte *)(param_1 + 0x409) & 1) != 0 ||
      (uVar1 = *(uint *)(param_1 + 0xc) & 0xc000000, uVar2 = CONCAT31((int3)(uVar1 >> 8),1),
      (*(uint *)(param_1 + 0xc) & 0x13000000) != 0 || uVar1 == 0x4000000)))) {
    uVar2 = 0;
  }
  return uVar2;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10126899 */

undefined4 __fastcall FUN_10126899(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 4;
  if (((*(uint *)(param_1 + 0xc) & 0x6000000) == 0) &&
     (((*(uint *)(param_1 + 0xc) >> 0x18 & 1) == 0 ||
      (uVar1 = 3, (*(byte *)(param_1 + 0x409) & 1) != 0)))) {
    return 2;
  }
  return uVar1;
}


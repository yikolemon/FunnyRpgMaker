/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004113be */

void __fastcall FUN_004113be(int *param_1)

{
  uint uVar1;
  
  uVar1 = DAT_0050e8c0 ^ (uint)&stack0xfffffff4;
  if ((*(byte *)(param_1 + 3) < 0xb) && ((0x47eU >> (*(byte *)(param_1 + 3) & 0x1f) & 1) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504af0);
  }
  FUN_0041141c(param_1);
  if (DAT_0050e8c0 == (uVar1 ^ (uint)&stack0xfffffff4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(uVar1 ^ (uint)&stack0xfffffff4);
}


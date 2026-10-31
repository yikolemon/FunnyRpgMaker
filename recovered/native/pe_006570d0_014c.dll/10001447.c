/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10001447 */

uint FUN_10001447(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0xffffffdd) {
    iVar1 = FUN_10228350(param_1 + 0x23);
    uVar2 = iVar1 + 0x23U & 0xffffffe0;
    *(int *)(uVar2 - 4) = iVar1;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1000146d();
}


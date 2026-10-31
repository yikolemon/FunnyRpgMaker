/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10168eba */

undefined * __fastcall FUN_10168eba(uint param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = (param_1 & 0xe000) - 0x2000;
  puVar1 = &DAT_1033cdfd;
  if (uVar2 < 0x8000) {
    puVar1 = *(undefined **)((int)&PTR_s_FixedFit_10331be1_0x16_102b9b84 + (uVar2 >> 0xb));
  }
  return puVar1;
}


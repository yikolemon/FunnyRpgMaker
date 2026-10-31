/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027276a */

void FUN_1027276a(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBX + -4) = *(undefined4 *)(unaff_EBP + -0x2c);
  FUN_10258c90(*(undefined4 *)(unaff_EBP + -0x30));
  iVar1 = FUN_10272260();
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(unaff_EBP + -0x34);
  iVar1 = FUN_10272260();
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(unaff_EBP + -0x38);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((unaff_ESI[5] == 0x19930520 || ((unaff_ESI[5] == 0x19930521 || (unaff_ESI[5] == 0x19930522)))
       ))) && ((*(int *)(unaff_EBP + -0x3c) == 0 && (unaff_EDI != 0)))) {
    iVar1 = FUN_10258880(unaff_ESI[6]);
    if (iVar1 != 0) {
      FUN_10258760();
    }
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00494a2a */

void FUN_00494a2a(void)

{
  PVOID pvVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBX + -4) = *(undefined4 *)(unaff_EBP + -0x2c);
  FUN_00485350(*(int *)(unaff_EBP + -0x30));
  pvVar1 = FUN_00494580();
  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)(unaff_EBP + -0x34);
  pvVar1 = FUN_00494580();
  *(undefined4 *)((int)pvVar1 + 0x14) = *(undefined4 *)(unaff_EBP + -0x38);
  if ((((*unaff_ESI == -0x1f928c9d) && (unaff_ESI[4] == 3)) &&
      ((unaff_ESI[5] == 0x19930520 || ((unaff_ESI[5] == 0x19930521 || (unaff_ESI[5] == 0x19930522)))
       ))) && ((*(int *)(unaff_EBP + -0x3c) == 0 && (unaff_EDI != 0)))) {
    iVar2 = FUN_00485600(unaff_ESI[6]);
    if (iVar2 != 0) {
      FUN_004854d0(unaff_ESI);
    }
  }
  return;
}


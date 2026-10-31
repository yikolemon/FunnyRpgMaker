/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140202444 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_140202444(byte *param_1,longlong param_2)

{
  byte bVar2;
  uint in_EAX;
  uint uVar1;
  byte *unaff_RBX;
  
  uVar1 = in_EAX ^ *(uint *)(param_2 + -0x1b);
  *(uint *)(unaff_RBX + 0x42112009) = *(uint *)(unaff_RBX + 0x42112009) | uVar1;
  uVar1 = uVar1 + 0x572131;
  unaff_RBX[-0x67] = unaff_RBX[-0x67] | (byte)((ulonglong)param_2 >> 8);
  bVar2 = (byte)(uVar1 >> 8);
  *param_1 = *param_1 | bVar2;
  _DAT_1a0514788 = _DAT_1a0514788 - (ulonglong)uVar1;
  *param_1 = (byte)param_1;
  *unaff_RBX = *unaff_RBX & bVar2;
  *(int *)(ulonglong)(uVar1 ^ 0x2205014a) =
       *(int *)(ulonglong)(uVar1 ^ 0x2205014a) - ((int)unaff_RBX - *(int *)unaff_RBX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


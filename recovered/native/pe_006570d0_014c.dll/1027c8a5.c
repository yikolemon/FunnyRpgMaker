/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027c8a5 */

void FUN_1027c8a5(int param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short local_b4;
  undefined1 local_b2 [170];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x104;
  iVar2 = ___acrt_GetUserDefaultLocaleName_8(&local_b4,0x55);
  if (1 < iVar2) {
    psVar3 = &local_b4;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = FUN_1027bc60(param_1 + 0x250,0x55,&local_b4,((int)psVar3 - (int)local_b2 >> 1) + 1);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


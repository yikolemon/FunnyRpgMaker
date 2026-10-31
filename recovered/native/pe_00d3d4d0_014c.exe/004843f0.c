/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004843f0 */

void __cdecl FUN_004843f0(PVOID param_1)

{
  code *pcVar1;
  PVOID pvVar2;
  int iVar3;
  BOOL BVar4;
  
  if (DAT_0050ea68 != 0) {
    pvVar2 = EncodePointer(param_1);
    DAT_0050ea68 = DAT_0050ea68 + -1;
    *(PVOID *)(DAT_0050ea68 * 4 + 0x51bf88) = pvVar2;
    return;
  }
  iVar3 = ___acrt_get_sigabrt_handler();
  if (iVar3 != 0) {
    FUN_0049817c(0x16);
  }
  if ((DAT_0051adfc & 2) != 0) {
    BVar4 = IsProcessorFeaturePresent(0x17);
    if (BVar4 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)();
    }
    FUN_00495ccc(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0048d3b1(3);
}


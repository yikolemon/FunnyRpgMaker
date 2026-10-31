/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140273000 */

void FUN_140273000(undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = param_3 * 4 + 4;
  lVar2 = param_2;
  if (0xfff < uVar3) {
    lVar2 = *(longlong *)(param_2 + -8);
    if (0x1f < (ulonglong)((param_2 + -8) - lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = param_3 * 4 + 0x2b;
  }
  thunk_FUN_1404a2310(lVar2,uVar3);
  return;
}


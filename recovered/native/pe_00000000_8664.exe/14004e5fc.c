/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004e5fc */

ulonglong FUN_14004e5fc(undefined1 *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  
  switch(*param_1) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
                    /* WARNING: Subroutine does not return */
    FUN_140049b0a("Precision is not an integer.");
  case 1:
    uVar2 = (ulonglong)*(int *)(param_1 + 8);
    break;
  case 2:
    return (ulonglong)*(uint *)(param_1 + 8);
  case 3:
    uVar2 = *(ulonglong *)(param_1 + 8);
    break;
  case 4:
    return *(ulonglong *)(param_1 + 8);
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (-1 < (longlong)uVar2) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("Negative precision.");
}


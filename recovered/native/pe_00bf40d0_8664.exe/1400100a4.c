/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400100a4 */

ulonglong FUN_1400100a4(undefined1 *param_1)

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
    FUN_14000b455(0x14011be9b);
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
  FUN_14000b455(0x14011beed);
}


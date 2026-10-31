/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b890 */

ulonglong __fastcall FUN_1000b890(undefined1 *param_1)

{
  code *pcVar1;
  uint uVar2;
  
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
    FUN_10006198("Width is not an integer.");
  case 1:
    uVar2 = *(uint *)(param_1 + 8);
    if (-1 < (int)uVar2) goto LAB_1000b8ab;
    break;
  case 2:
    uVar2 = *(uint *)(param_1 + 8);
LAB_1000b8ab:
    return (ulonglong)uVar2;
  case 3:
    if (-1 < *(int *)(param_1 + 0xc)) {
      return CONCAT44(*(int *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
    }
    break;
  case 4:
    return *(ulonglong *)(param_1 + 8);
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Negative width.");
}


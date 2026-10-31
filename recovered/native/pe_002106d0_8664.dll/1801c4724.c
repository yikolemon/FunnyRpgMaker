/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c4724 */

void FUN_1801c4724(int *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*param_1 != 0) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar3 = (longlong)*param_1 * 0x38;
    do {
      uVar1 = 1;
      if (*(char *)(lVar2 + 0x24) == '\0') {
        if (*(char *)(lVar2 + 0x25) == '\x01') {
          FUN_18015561c(lVar2);
          uVar1 = *(undefined1 *)(lVar2 + 0x24);
        }
        else {
          uVar1 = 0;
        }
      }
      *(undefined1 *)(lVar2 + 0x25) = uVar1;
      lVar2 = lVar2 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  return;
}


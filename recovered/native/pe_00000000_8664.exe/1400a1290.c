/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a1290 */

void FUN_1400a1290(int *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_1400c4fe4(param_2,"%s (%d)",param_2,*param_1);
  if (cVar1 != '\0') {
    if (0 < (longlong)*param_1) {
      uVar2 = (longlong)*param_1 + 1;
      do {
        FUN_14009136c(*(undefined8 *)(*(longlong *)(param_1 + 2) + -0x10 + uVar2 * 8));
        FUN_1400a31b0(*(undefined8 *)(*(longlong *)(param_1 + 2) + -0x10 + uVar2 * 8),"Window");
        FUN_140091667();
        uVar2 = uVar2 - 1;
      } while (1 < uVar2);
    }
    FUN_1400c66d9();
    return;
  }
  return;
}


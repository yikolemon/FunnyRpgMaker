/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180128360 */

void FUN_180128360(int *param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_18014c0b4(param_2,"%s (%d)",param_2,*param_1);
  if (cVar1 != '\0') {
    if (0 < (longlong)*param_1) {
      uVar2 = (longlong)*param_1 + 1;
      do {
        FUN_180118054(*(undefined8 *)(*(longlong *)(param_1 + 2) + -0x10 + uVar2 * 8));
        FUN_18012a280(*(undefined8 *)(*(longlong *)(param_1 + 2) + -0x10 + uVar2 * 8),"Window");
        FUN_18011834f();
        uVar2 = uVar2 - 1;
      } while (1 < uVar2);
    }
    FUN_18014d7a9();
    return;
  }
  return;
}


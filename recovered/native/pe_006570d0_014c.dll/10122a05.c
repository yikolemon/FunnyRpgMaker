/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10122a05 */

void FUN_10122a05(int *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_10147bc2(param_2,"%s (%d)",param_2,*param_1);
  if (cVar1 != '\0') {
    if (0 < *param_1) {
      uVar2 = *param_1 + 1;
      do {
        FUN_101132aa(*(undefined4 *)(param_1[2] + -8 + uVar2 * 4));
        FUN_10124576(*(undefined4 *)(param_1[2] + -8 + uVar2 * 4),"Window");
        FUN_10113568();
        uVar2 = uVar2 - 1;
      } while (1 < uVar2);
    }
    FUN_10149387();
    return;
  }
  return;
}


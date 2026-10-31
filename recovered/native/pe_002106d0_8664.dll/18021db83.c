/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021db83 */

void FUN_18021db83(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 2);
    do {
      FUN_18021e7a8(lVar2,param_2,param_3,param_4);
      lVar2 = lVar2 + 0x28;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


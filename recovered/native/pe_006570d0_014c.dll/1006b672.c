/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006b672 */

void __fastcall FUN_1006b672(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_1006b6a2();
  iVar2 = *param_1;
  iVar1 = param_1[1];
  if (iVar2 != iVar1) {
    do {
      FUN_10024443(iVar2);
      iVar2 = iVar2 + 0x30;
    } while (iVar2 != iVar1);
    param_1[1] = *param_1;
  }
  return;
}


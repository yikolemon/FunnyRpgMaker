/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017ac55 */

void FUN_18017ac55(uint param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = 0x80;
  lVar2 = 0;
  do {
    if ((uVar1 & param_1) != 0) {
      *(undefined1 *)(param_2 + lVar2) = *(undefined1 *)(param_3 + lVar2);
    }
    lVar2 = lVar2 + 1;
    uVar1 = uVar1 >> 1;
  } while (lVar2 != 4);
  return;
}


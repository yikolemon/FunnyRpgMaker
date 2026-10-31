/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400bba25 */

undefined8 FUN_1400bba25(int *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 2);
  if (plVar3 != (longlong *)0x0) {
    iVar1 = *param_1;
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        if (*plVar3 != 0) {
          thunk_FUN_1401212e0();
          iVar1 = *param_1;
        }
        iVar2 = iVar2 + 1;
        plVar3 = plVar3 + 10;
      } while (iVar2 < iVar1);
      plVar3 = *(longlong **)(param_1 + 2);
    }
    thunk_FUN_1401212e0(plVar3);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return 0;
}


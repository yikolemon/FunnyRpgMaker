/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10266e3c */

undefined4 __thiscall FUN_10266e3c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x6c);
  *(int **)(param_1 + 0x6c) = piVar1 + 1;
  puVar2 = (undefined4 *)*piVar1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
LAB_10266e61:
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_10266494();
    if (iVar4 == 1) {
      *(undefined1 *)puVar2 = (undefined1)param_2;
    }
    else if (iVar4 == 2) {
      *(undefined2 *)puVar2 = (undefined2)param_2;
    }
    else if (iVar4 == 4) {
      *puVar2 = param_2;
    }
    else {
      if (iVar4 != 8) goto LAB_10266e61;
      *puVar2 = param_2;
      puVar2[1] = param_3;
    }
    uVar3 = 1;
  }
  return uVar3;
}


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b07d8 */

void __fastcall FUN_100b07d8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)*param_1;
  *(undefined4 *)puVar1[1] = 0;
  puVar1 = (undefined4 *)*puVar1;
  while (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    FUN_1006cb34(param_1,puVar1);
    puVar1 = puVar2;
  }
  iVar3 = *param_1;
  *(int *)iVar3 = iVar3;
  *(int *)(iVar3 + 4) = iVar3;
  param_1[1] = 0;
  return;
}


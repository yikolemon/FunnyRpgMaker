/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00441d9c */

void __fastcall FUN_00441d9c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)param_1[0x35];
  iVar2 = *(int *)(*param_1 + 100);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0041c607(iVar2,puVar1[7]);
    puVar1[7] = 0;
    FUN_0041c607(iVar2,puVar1[0x5c]);
    puVar1[0x5c] = 0;
    FUN_00442612(puVar1);
    param_1[0x35] = 0;
  }
  FUN_004426aa(iVar2,param_1 + 0x2e);
  return;
}


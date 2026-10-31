/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043a4f */

void FUN_140043a4f(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)param_1[0x22];
  lVar2 = *(longlong *)(*param_1 + 0x98);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_14001c53d(lVar2,puVar1[6]);
    puVar1[6] = 0;
    FUN_14001c53d(lVar2,puVar1[0x46]);
    puVar1[0x46] = 0;
    FUN_14004438f(puVar1);
    param_1[0x22] = 0;
  }
  FUN_140044434(lVar2,(undefined4 *)(param_1 + 0x1b));
  return;
}


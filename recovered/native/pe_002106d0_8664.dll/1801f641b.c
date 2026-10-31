/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f641b */

void FUN_1801f641b(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x22];
  uVar2 = *(undefined8 *)(*param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_1801c9b65(uVar2,*(undefined8 *)(lVar1 + 0x30));
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_1801c9b65(uVar2,*(undefined8 *)(lVar1 + 0x230));
    *(undefined8 *)(lVar1 + 0x230) = 0;
    FUN_1801f6d5b(lVar1);
    param_1[0x22] = 0;
  }
  FUN_1801f6e00(uVar2,param_1 + 0x1b);
  return;
}


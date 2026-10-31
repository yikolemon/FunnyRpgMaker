/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c4c2e */

undefined8 * FUN_1400c4c2e(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = FUN_14008aab0(param_1 + 0x10);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  for (uVar3 = 0; uVar3 < uVar2; uVar3 = uVar3 + 1) {
    local_31 = FUN_14008ab9c(param_1 + 0x10);
    puVar1 = (undefined1 *)param_2[1];
    if (puVar1 == (undefined1 *)param_2[2]) {
      FUN_1400660b8(param_2,puVar1,&local_31);
    }
    else {
      *puVar1 = local_31;
      param_2[1] = param_2[1] + 1;
    }
  }
  return param_2;
}


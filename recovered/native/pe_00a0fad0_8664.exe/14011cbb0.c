/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011cbb0 */

undefined2 FUN_14011cbb0(undefined2 param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x16;
    FUN_140120ee8();
    uVar1 = 0xffff;
  }
  else {
    FUN_14010b32c(param_2);
    uVar1 = FUN_14011cc10(param_1,param_2);
    FUN_14010b338(param_2);
  }
  return uVar1;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401aa3dc */

undefined2 FUN_1401aa3dc(undefined2 param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    uVar1 = 0xffff;
  }
  else {
    FUN_140193154(param_2);
    uVar1 = FUN_1401aa43c(param_1,param_2);
    FUN_140193160(param_2);
  }
  return uVar1;
}


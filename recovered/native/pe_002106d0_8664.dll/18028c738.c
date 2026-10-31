/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18028c738 */

undefined2 FUN_18028c738(undefined2 param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0x16;
    FUN_180290a50();
    uVar1 = 0xffff;
  }
  else {
    FUN_180272400(param_2);
    uVar1 = FUN_18028c798(param_1,param_2);
    FUN_18027240c(param_2);
  }
  return uVar1;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180175192 */

undefined4 FUN_180175192(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_18012be7d(0x4888);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_1801765d0("outofmem");
    uVar1 = 0;
  }
  else {
    FUN_1802a89a0(puVar2 + 1,0,0x4880);
    *puVar2 = param_1;
    FUN_18017ac75(puVar2);
    uVar1 = FUN_18017ace0(puVar2,1);
    FUN_180176664(param_1);
    thunk_FUN_180290e40(puVar2);
  }
  return uVar1;
}


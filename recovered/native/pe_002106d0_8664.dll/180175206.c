/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180175206 */

undefined8 FUN_180175206(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_18012be7d(0x4888);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_1801765d0("outofmem");
    uVar2 = 0;
  }
  else {
    FUN_1802a89a0(puVar1 + 1,0,0x4880);
    *puVar1 = param_1;
    FUN_18017ac75(puVar1);
    uVar2 = FUN_18017ce90(puVar1,param_2,param_3);
    thunk_FUN_180290e40(puVar1);
  }
  return uVar2;
}


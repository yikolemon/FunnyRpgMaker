/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000dd4a */

undefined8 * FUN_14000dd4a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_14000de16(param_1,puVar1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar2 = FUN_14000dd4a(param_1,*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_14000dd4a(param_1,param_2[2]);
    puVar1[2] = uVar2;
  }
  return puVar1;
}


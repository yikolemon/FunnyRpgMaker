/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140070af2 */

undefined8 * FUN_140070af2(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_140070bbe(param_1,puVar1,param_2 + 4);
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar2 = FUN_140070af2(param_1,*param_2,puVar1);
    *puVar1 = uVar2;
    uVar2 = FUN_140070af2(param_1,param_2[2]);
    puVar1[2] = uVar2;
  }
  return puVar1;
}


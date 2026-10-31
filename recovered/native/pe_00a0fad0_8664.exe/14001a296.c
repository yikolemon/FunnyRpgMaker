/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001a296 */

undefined8 *
FUN_14001a296(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  puVar2 = (undefined8 *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    puVar1 = (undefined8 *)FUN_1400d3680(0x28);
    puVar1[4] = param_2[4];
    *puVar1 = puVar2;
    puVar1[2] = puVar2;
    *(undefined1 *)((longlong)puVar1 + 0x19) = 0;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_2 + 3);
    uVar3 = FUN_14001a296(param_1,*param_2,puVar1,param_4,param_1,param_1,puVar1,uVar3);
    *puVar1 = uVar3;
    puVar2 = puVar1;
    uVar3 = FUN_14001a296(param_1,param_2[2]);
    puVar2[2] = uVar3;
  }
  return puVar2;
}


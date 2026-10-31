/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10057774 */

void __thiscall FUN_10057774(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uStack_14;
  
  uStack_14 = (uint)((ulonglong)param_2 >> 0x20);
  if ((uStack_14 & 0x7fffffff) < 0x7ff00000) {
    puVar1 = param_1 + 2;
    iVar2 = FUN_1005787f(puVar1,param_1 + 0x12,param_2);
    (**(code **)(*(int *)*param_1 + 4))(puVar1,iVar2 - (int)puVar1);
  }
  else {
    (**(code **)(*(int *)*param_1 + 4))("null",4);
  }
  return;
}


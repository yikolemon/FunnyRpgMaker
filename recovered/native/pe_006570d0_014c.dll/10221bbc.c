/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10221bbc */

void __thiscall
FUN_10221bbc(undefined8 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
            undefined4 param_5,uint param_6)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = -param_3;
  if ((int)-param_3 < 0) {
    uVar3 = param_3;
  }
  uVar2 = -param_6;
  if ((int)-param_6 < 0) {
    uVar2 = param_6;
  }
  puVar1 = (undefined8 *)&param_5;
  if (uVar2 < uVar3) {
    puVar1 = (undefined8 *)&param_2;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_1 = *puVar1;
  return;
}


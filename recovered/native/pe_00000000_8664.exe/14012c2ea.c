/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012c2ea */

void FUN_14012c2ea(undefined8 *param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar1 = (uint *)*param_1;
  lVar2 = param_1[1];
  uVar3 = param_1[2];
  puVar5 = puVar1;
  if ((lVar2 != 0) && (*(undefined8 **)(lVar2 + 0x130) == param_1)) {
    *(undefined8 *)(lVar2 + 0x130) = 0;
    puVar5 = (uint *)*param_1;
  }
  uVar4 = *puVar5;
  if ((uVar4 & 2) != 0) {
    FUN_14012fe9d(param_1);
    uVar4 = *(uint *)*param_1;
  }
  if ((uVar4 & 1) != 0) {
    FUN_14012ff1a(param_1);
  }
  if (*(code **)(puVar1 + 10) != (code *)0x0) {
    (**(code **)(puVar1 + 10))(param_1);
  }
  FUN_140128b39(uVar3,param_1);
  return;
}


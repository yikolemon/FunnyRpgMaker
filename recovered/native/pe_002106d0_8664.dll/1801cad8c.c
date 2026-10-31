/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cad8c */

void FUN_1801cad8c(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x90);
  lVar3 = plVar2[2];
  lVar4 = plVar2[3];
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 10) & 1) != 0) {
    if ((*(longlong *)(param_1 + 0xf0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 2) != 0)) {
      puVar5 = *(undefined8 **)(param_1 + 0xe8);
      FUN_1801c9b65(lVar3,*puVar5);
      *puVar5 = 0;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    FUN_1801c9b65(lVar3,*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(code **)(lVar4 + 0x70) != (code *)0x0) {
    (**(code **)(lVar4 + 0x70))(param_1);
  }
  FUN_1801ca6bc(param_1);
  puVar5 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar5 != (undefined8 *)0x0) {
    if ((*(byte *)(*plVar2 + 1) & 2) == 0) {
      FUN_1801c9b72(*puVar5);
      **(undefined8 **)(param_1 + 0xf0) = 0;
      puVar5 = *(undefined8 **)(param_1 + 0xf0);
    }
    FUN_1801c9b65(lVar3,puVar5);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}


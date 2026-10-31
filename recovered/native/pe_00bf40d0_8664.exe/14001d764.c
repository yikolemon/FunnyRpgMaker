/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d764 */

void FUN_14001d764(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x90);
  lVar3 = plVar2[2];
  lVar4 = plVar2[3];
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 10) & 1) != 0) {
    if ((*(longlong *)(param_1 + 0xf0) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 8) & 2) != 0)) {
      plVar5 = *(longlong **)(param_1 + 0xe8);
      FUN_14001c53d(lVar3,*plVar5);
      *plVar5 = 0;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    FUN_14001c53d(lVar3,*(longlong *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(code **)(lVar4 + 0x70) != (code *)0x0) {
    (**(code **)(lVar4 + 0x70))(param_1);
  }
  FUN_14001d094(param_1);
  puVar6 = *(undefined8 **)(param_1 + 0xf0);
  if (puVar6 != (undefined8 *)0x0) {
    if ((*(byte *)(*plVar2 + 1) & 2) == 0) {
      FUN_14001c54a((longlong *)*puVar6);
      **(undefined8 **)(param_1 + 0xf0) = 0;
      puVar6 = *(undefined8 **)(param_1 + 0xf0);
    }
    FUN_14001c53d(lVar3,(longlong)puVar6);
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004de27 */

void FUN_14004de27(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar1 = *(undefined8 **)param_1[7];
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  lVar2 = *(longlong *)(*param_1 + 0x98);
  lVar3 = *(longlong *)(*param_1 + 0x3e0);
  lVar4 = FUN_140050ea0(param_1);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(*puVar1);
    for (uVar5 = (ulonglong)*(uint *)(lVar3 + 0x8a8); uVar5 != 0; uVar5 = uVar5 - 1) {
      (**(code **)(lVar4 + 0x10))(puVar1[uVar5]);
    }
  }
  FUN_14001c53d(lVar2,(longlong)puVar1);
  return;
}


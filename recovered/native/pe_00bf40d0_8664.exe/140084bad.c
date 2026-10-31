/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140084bad */

undefined4 FUN_140084bad(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  puVar2 = *(undefined8 **)(lVar1 + 0x40);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)
             (**(code **)(param_1 + 0x30))
                       (*(undefined8 *)(param_1 + 0x40),1 << (*(byte *)(lVar1 + 0x30) & 0x1f),1);
    *(undefined8 **)(lVar1 + 0x40) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 1;
    }
  }
  uVar3 = *(uint *)(lVar1 + 0x34);
  if (uVar3 == 0) {
    uVar3 = 1 << (*(byte *)(lVar1 + 0x30) & 0x1f);
    *(uint *)(lVar1 + 0x34) = uVar3;
    *(undefined8 *)(lVar1 + 0x38) = 0;
  }
  if (param_3 < uVar3) {
    uVar3 = uVar3 - *(uint *)(lVar1 + 0x3c);
    uVar5 = (ulonglong)param_3;
    if (uVar3 < param_3) {
      uVar5 = (ulonglong)uVar3;
    }
    FUN_1400b3550((undefined8 *)((longlong)puVar2 + (ulonglong)*(uint *)(lVar1 + 0x3c)),
                  (undefined8 *)(param_2 - (ulonglong)param_3),uVar5);
    iVar4 = (int)uVar5;
    if (param_3 <= uVar3) {
      uVar3 = *(int *)(lVar1 + 0x3c) + iVar4;
      if (uVar3 == *(uint *)(lVar1 + 0x34)) {
        uVar3 = 0;
      }
      *(uint *)(lVar1 + 0x3c) = uVar3;
      if (*(uint *)(lVar1 + 0x34) <= *(uint *)(lVar1 + 0x38)) {
        return 0;
      }
      *(uint *)(lVar1 + 0x38) = *(uint *)(lVar1 + 0x38) + iVar4;
      return 0;
    }
    uVar3 = param_3 - iVar4;
    FUN_1400b3550(*(undefined8 **)(lVar1 + 0x40),(undefined8 *)(param_2 - (ulonglong)uVar3),
                  (ulonglong)uVar3);
    *(uint *)(lVar1 + 0x3c) = uVar3;
  }
  else {
    FUN_1400b3550(puVar2,(undefined8 *)(param_2 - (ulonglong)uVar3),(ulonglong)uVar3);
    *(undefined4 *)(lVar1 + 0x3c) = 0;
  }
  *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar1 + 0x34);
  return 0;
}


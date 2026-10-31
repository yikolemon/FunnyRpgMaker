/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188f70 */

void FUN_140188f70(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) ||
     ((&DAT_140f2aba0)[lVar1] = (&DAT_140f2aba0)[lVar1] + -1, (char)(&DAT_140f2aba0)[lVar1] < '\x01'
     )) {
    for (puVar2 = *(undefined8 **)(param_1 + 0x38); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      (*(code *)PTR__guard_dispatch_icall_140ee15d0)(0,param_1,*(undefined4 *)(puVar2 + 1));
    }
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      thunk_FUN_14018e090(puVar2,0x18);
      puVar2 = puVar3;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      thunk_FUN_14018e090(puVar2,0x18);
      puVar2 = puVar3;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (lVar1 != 0) {
      if ((*(longlong *)(lVar1 + 8) != 0) &&
         (lVar4 = (*(code *)PTR__guard_dispatch_icall_140ee15d0)(), lVar4 != 0)) {
        (*(code *)PTR__guard_dispatch_icall_140ee15d0)(lVar4,1);
      }
      thunk_FUN_14018e090(lVar1,0x10);
    }
  }
  return;
}


/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400895d0 */

void FUN_1400895d0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 == 0) ||
     ((&DAT_14013cd10)[lVar2] = (&DAT_14013cd10)[lVar2] + -1, (char)(&DAT_14013cd10)[lVar2] < '\x01'
     )) {
    for (puVar1 = *(undefined8 **)(param_1 + 0x38); puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      (*(code *)PTR__guard_dispatch_icall_1401200f0)(0,param_1,*(undefined4 *)(puVar1 + 1));
    }
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    while (puVar1 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar1;
      FUN_1400863f0();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x38);
    while (puVar1 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar1;
      FUN_1400863f0();
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      if ((*(longlong *)(*(longlong *)(param_1 + 0x40) + 8) != 0) &&
         (lVar2 = (*(code *)PTR__guard_dispatch_icall_1401200f0)(), lVar2 != 0)) {
        (*(code *)PTR__guard_dispatch_icall_1401200f0)(lVar2,1);
      }
      FUN_1400863f0();
    }
  }
  return;
}


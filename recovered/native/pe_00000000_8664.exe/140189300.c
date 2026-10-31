/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140189300 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140189300(char param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_140188dc0(local_res8,0);
  lVar1 = DAT_140f2ac08;
  if (DAT_140f2ac08 == 0) {
    lVar1 = FUN_1401891c0(0);
    if (DAT_140f2ac10 == '\0') {
      DAT_140f2ac10 = '\x01';
      FUN_14018e550(FUN_140189400);
    }
    DAT_140f2ac08 = lVar1;
    *(undefined4 *)(lVar1 + 0x20) = 0x3f;
    if (*(undefined **)(lVar1 + 0x28) != &DAT_140edd308) {
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        thunk_FUN_1401aea30();
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar2 = (undefined2 *)_malloc_base(2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0x43;
      }
      *(undefined2 **)(lVar1 + 0x28) = puVar2;
    }
    (*(code *)PTR__guard_dispatch_icall_140ee15d0)(lVar1);
    _DAT_140f2abb8 = lVar1;
    DAT_140f2abe8 = lVar1;
  }
  if (param_1 != '\0') {
    (*(code *)PTR__guard_dispatch_icall_140ee15d0)(lVar1);
  }
  FUN_140188e10(local_res8);
  return lVar1;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d4020 */

longlong FUN_1400d4020(char param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_1400d39b0(local_res8,0);
  lVar1 = DAT_1401cc4d8;
  if (DAT_1401cc4d8 == 0) {
    lVar1 = FUN_1400d3e00(0);
    if (DAT_1401cc4e0 == '\0') {
      DAT_1401cc4e0 = '\x01';
      FUN_1400de130(FUN_1400d4120);
    }
    DAT_1401cc4d8 = lVar1;
    *(undefined4 *)(lVar1 + 0x20) = 0x3f;
    if (*(undefined **)(lVar1 + 0x28) != &DAT_140174608) {
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        thunk_FUN_1401212e0();
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar2 = (undefined2 *)_malloc_base(2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0x43;
      }
      *(undefined2 **)(lVar1 + 0x28) = puVar2;
    }
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar1);
    DAT_1401cc488 = lVar1;
    DAT_1401cc4b8 = lVar1;
  }
  if (param_1 != '\0') {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar1);
  }
  FUN_1400d3a00(local_res8);
  return lVar1;
}


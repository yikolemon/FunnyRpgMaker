/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14044e540 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14044e540(char param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_14044e710(local_res8,0);
  lVar1 = DAT_1406293c8;
  if (DAT_1406293c8 == 0) {
    lVar1 = FUN_14044e2e0(0);
    if (DAT_1406293d0 == '\0') {
      DAT_1406293d0 = '\x01';
      FUN_140457e60(&DAT_14044e640);
    }
    DAT_1406293c8 = lVar1;
    *(undefined4 *)(lVar1 + 0x20) = 0x3f;
    if (*(char **)(lVar1 + 0x28) != "message") {
      if (*(char **)(lVar1 + 0x28) != (char *)0x0) {
        thunk_FUN_1404a2310();
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar2 = (undefined2 *)_malloc_base(2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0x43;
      }
      *(undefined2 **)(lVar1 + 0x28) = puVar2;
    }
    (*DAT_14059d150)(lVar1);
    DAT_140629378 = lVar1;
    _DAT_1406293a8 = lVar1;
  }
  if (param_1 != '\0') {
    (*DAT_14059d150)(lVar1);
  }
  FUN_14044e760(local_res8);
  return lVar1;
}


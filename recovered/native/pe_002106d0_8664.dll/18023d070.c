/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d070 */

longlong FUN_18023d070(char param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 local_res8 [8];
  
  FUN_18023d240(local_res8,0);
  lVar1 = DAT_180417ef8;
  if (DAT_180417ef8 == 0) {
    lVar1 = FUN_18023ce10(0);
    if (DAT_180417f00 == '\0') {
      DAT_180417f00 = '\x01';
      FUN_180246990(FUN_18023d170);
    }
    DAT_180417ef8 = lVar1;
    *(undefined4 *)(lVar1 + 0x20) = 0x3f;
    if (*(undefined **)(lVar1 + 0x28) != &DAT_18038759c) {
      if (*(undefined **)(lVar1 + 0x28) != (undefined *)0x0) {
        thunk_FUN_180290e40();
      }
      *(undefined8 *)(lVar1 + 0x28) = 0;
      puVar2 = (undefined2 *)_malloc_base(2);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0x43;
      }
      *(undefined2 **)(lVar1 + 0x28) = puVar2;
    }
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar1);
    DAT_180417ea8 = lVar1;
    DAT_180417ed8 = lVar1;
  }
  if (param_1 != '\0') {
    (*(code *)PTR__guard_dispatch_icall_18038bc80)(lVar1);
  }
  FUN_18023d290(local_res8);
  return lVar1;
}


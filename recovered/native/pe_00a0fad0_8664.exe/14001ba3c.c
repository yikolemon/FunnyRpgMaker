/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001ba3c */

undefined8 Catch_14001ba3c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 1000) + 0x70);
  *(undefined8 *)(param_2 + 0x2e0) = *(undefined8 *)(*(longlong *)(param_2 + 1000) + 0x78);
  *(undefined4 *)(param_2 + 0x3e4) = 0;
  while (*(longlong *)(param_2 + 0x338) = lVar2, lVar2 != *(longlong *)(param_2 + 0x2e0)) {
    FUN_140006874(param_2 + 0x1d0,param_2 + 0x3f0);
    FUN_14001f9b2(*(undefined8 *)(param_2 + 1000),param_2 + 0x290,*(undefined8 *)(param_2 + 0x338),
                  param_2 + 0x1d0);
    FUN_1400065bc(param_2 + 0x3f0);
    *(undefined4 *)(param_2 + 0x400) = *(undefined4 *)(param_2 + 0x2a0);
    *(undefined4 *)(param_2 + 0x404) = *(undefined4 *)(param_2 + 0x2a4);
    *(undefined4 *)(param_2 + 0x408) = *(undefined4 *)(param_2 + 0x2a8);
    *(undefined4 *)(param_2 + 0x40c) = *(undefined4 *)(param_2 + 0x2ac);
    *(undefined4 *)(param_2 + 0x3f0) = *(undefined4 *)(param_2 + 0x290);
    *(undefined4 *)(param_2 + 0x3f4) = *(undefined4 *)(param_2 + 0x294);
    *(undefined4 *)(param_2 + 0x3f8) = *(undefined4 *)(param_2 + 0x298);
    *(undefined4 *)(param_2 + 0x3fc) = *(undefined4 *)(param_2 + 0x29c);
    *(undefined8 *)(param_2 + 0x2a0) = 0;
    *(undefined8 *)(param_2 + 0x2a8) = 0xf;
    *(undefined1 *)(param_2 + 0x290) = 0;
    FUN_1400017de(param_2 + 0x290);
    *(undefined1 *)(param_2 + 0x44e) = 1;
    lVar2 = param_2 + 0x398;
    plVar1 = *(longlong **)(param_2 + 0x338);
    if ((longlong *)lVar2 != plVar1) {
      plVar3 = plVar1;
      if (0xf < (ulonglong)plVar1[3]) {
        plVar3 = (longlong *)*plVar1;
      }
      lVar2 = FUN_140017200(param_2 + 0x398,plVar3,plVar1[2]);
    }
    *(int *)(param_2 + 0x3e4) =
         (int)CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(param_2 + 0x44e));
    lVar2 = *(longlong *)(param_2 + 0x338) + 0x20;
  }
  if ((*(byte *)(param_2 + 0x3e4) & 1) == 0) {
    lVar2 = *(longlong *)(param_2 + 0x440);
    FUN_14001ef57(param_2 + 0x420,*(longlong *)(param_2 + 1000) + 0x238,
                  *(undefined1 *)(lVar2 + 0x23),*(undefined1 *)(lVar2 + 0x21),
                  *(undefined1 *)(lVar2 + 0x22),*(undefined1 *)(lVar2 + 0x25),
                  *(undefined1 *)(lVar2 + 0x26));
    FUN_1400065bc(param_2 + 0x3f0);
    *(undefined4 *)(param_2 + 0x400) = *(undefined4 *)(param_2 + 0x430);
    *(undefined4 *)(param_2 + 0x404) = *(undefined4 *)(param_2 + 0x434);
    *(undefined4 *)(param_2 + 0x408) = *(undefined4 *)(param_2 + 0x438);
    *(undefined4 *)(param_2 + 0x40c) = *(undefined4 *)(param_2 + 0x43c);
    *(undefined4 *)(param_2 + 0x3f0) = *(undefined4 *)(param_2 + 0x420);
    *(undefined4 *)(param_2 + 0x3f4) = *(undefined4 *)(param_2 + 0x424);
    *(undefined4 *)(param_2 + 0x3f8) = *(undefined4 *)(param_2 + 0x428);
    *(undefined4 *)(param_2 + 0x3fc) = *(undefined4 *)(param_2 + 0x42c);
    *(undefined8 *)(param_2 + 0x430) = 0;
    *(undefined8 *)(param_2 + 0x438) = 0xf;
    *(undefined1 *)(param_2 + 0x420) = 0;
    FUN_1400017de(param_2 + 0x420);
  }
  return 0x14001ae1e;
}


/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140263380 */

ulonglong Unwind_140263380(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  longlong in_RAX;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *unaff_RBP;
  bool in_ZF;
  undefined8 uStack_10;
  
  if (!in_ZF) {
    *(byte *)(in_RAX + -0x73) = *(byte *)(in_RAX + -0x73) & (byte)param_1;
    puVar7 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar3 = '\x18';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar7 = puVar7 + -1;
      *puVar7 = *unaff_RBP;
      cVar3 = cVar3 + -1;
    } while ('\0' < cVar3);
    uVar5 = (**(code **)(in_RAX + 0x74280f90))();
    return uVar5 & 0xffffffffffffff20;
  }
  uVar8 = (ulonglong)((int)&stack0x00000000 - 0x80);
  *(undefined8 *)(uVar8 + 0x78) = 0xfffffffffffffffe;
  *(undefined8 *)(uVar8 - 8) = 0x1402633cb;
  FUN_140264f86(uVar8 + 0x60);
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  *(undefined8 *)(uVar8 - 8) = 0x1402633e8;
  uVar4 = FUN_140263afc(param_1 + 0x70,(ulonglong)(lVar1 - lVar2) >> 3,4,uVar8 + 0x60);
  *(undefined1 *)(uVar8 + 0x77) = uVar4;
  uVar5 = *(ulonglong *)(param_1 + 0x58);
  *(longlong *)(uVar8 + 0x40) =
       ((longlong)uVar5 >> 0x3f & 0xe000000000000000U) +
       (uVar5 >> 5) * 4 + *(longlong *)(param_1 + 0x40);
  *(ulonglong *)(uVar8 + 0x48) = (ulonglong)((uint)uVar5 & 0x1f);
  *(undefined1 **)(uVar8 + 0x20) = (undefined1 *)(uVar8 + 0x77);
  *(undefined8 *)(uVar8 - 8) = 0x140263440;
  FUN_140230bd4(param_1 + 0x40,uVar8 + 0x30,(longlong *)(uVar8 + 0x40),1);
  if ((*(char *)(uVar8 + 0x77) == '\x01') &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
    *(undefined8 *)(uVar8 - 8) = 0x140263464;
    FUN_140224bca(uVar8 + 0x50,param_1 + 0xb8);
    uVar6 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) + 8);
    *(undefined8 *)(uVar8 - 8) = 0x14026347e;
    FUN_140265006(uVar6,uVar8 + 0x40,param_2);
    lVar1 = *(longlong *)(uVar8 + 0x40);
    *(undefined8 *)(uVar8 - 8) = 0x140263491;
    uVar6 = FUN_140261594(lVar1 + 0x40,uVar8 + 0x50);
    *(undefined8 *)(param_1 + 0x60) = uVar6;
  }
  *(undefined8 *)(uVar8 - 8) = 0x14026349e;
  FUN_140224c96(uVar8 + 0x60);
  return 1;
}


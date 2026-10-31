/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011d898 */

undefined * FUN_18011d898(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = DAT_180419160;
  *(undefined4 *)(DAT_180419160 + 0x2974) = 0;
  piVar1 = (int *)(lVar2 + 0x2978);
  if (*(int *)(lVar2 + 0x297c) < 0) {
    uVar3 = FUN_1800fe7f8(0);
    if (*(longlong *)(lVar2 + 0x2980) != 0) {
      FUN_1802a82f0(uVar3,*(longlong *)(lVar2 + 0x2980),(longlong)*(int *)(lVar2 + 0x2978));
      FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2980));
    }
    *(undefined8 *)(lVar2 + 0x2980) = uVar3;
    *(undefined8 *)(lVar2 + 0x2978) = 0;
  }
  else {
    *piVar1 = 0;
    if (*(int *)(lVar2 + 0x297c) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x2980);
      lVar6 = 0;
      goto LAB_18011d96c;
    }
  }
  lVar5 = FUN_1800fe7f8(8);
  if (*(longlong *)(lVar2 + 0x2980) != 0) {
    FUN_1802a82f0(lVar5,*(longlong *)(lVar2 + 0x2980),(longlong)*(int *)(lVar2 + 0x2978));
    FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x2980));
  }
  *(longlong *)(lVar2 + 0x2980) = lVar5;
  *(undefined4 *)(lVar2 + 0x297c) = 8;
  lVar6 = (longlong)*(int *)(lVar2 + 0x2978);
LAB_18011d96c:
  *(undefined1 *)(lVar5 + lVar6) = 0;
  *(int *)(lVar2 + 0x2978) = *(int *)(lVar2 + 0x2978) + 1;
  if ((longlong)*(int *)(lVar2 + 0x2988) != 0) {
    lVar5 = *(longlong *)(lVar2 + 0x2990);
    lVar6 = (longlong)*(int *)(lVar2 + 0x2988) * 0x48;
    do {
      (**(code **)(lVar5 + 0x38))(lVar2,lVar5,piVar1);
      lVar5 = lVar5 + 0x48;
      lVar6 = lVar6 + -0x48;
    } while (lVar6 != 0);
  }
  if (param_1 != (longlong *)0x0) {
    *param_1 = (longlong)(int)(*piVar1 + -1 + (uint)(*piVar1 == 0));
  }
  puVar4 = &DAT_180419168;
  if (*(undefined **)(lVar2 + 0x2980) != (undefined *)0x0) {
    puVar4 = *(undefined **)(lVar2 + 0x2980);
  }
  return puVar4;
}


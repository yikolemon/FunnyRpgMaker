/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007f610 */

void FUN_14007f610(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar5;
  int iVar6;
  longlong lVar4;
  
  uVar1 = FUN_140077ff5("Docking",0,0);
  iVar2 = *(int *)(param_1 + 0x2988);
  if (iVar2 == *(int *)(param_1 + 0x298c)) {
    if (iVar2 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar2 / 2 + iVar2;
    }
    iVar6 = iVar2 + 1;
    if (iVar2 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar3 = FUN_140077ab4((longlong)iVar6 * 0x48);
    if (*(longlong *)(param_1 + 0x2990) != 0) {
      FUN_1401c5180(lVar3,*(longlong *)(param_1 + 0x2990),
                    (longlong)*(int *)(param_1 + 0x2988) * 0x48);
      FUN_140077b90(*(undefined8 *)(param_1 + 0x2990));
    }
    *(longlong *)(param_1 + 0x2990) = lVar3;
    *(int *)(param_1 + 0x298c) = iVar6;
    iVar2 = *(int *)(param_1 + 0x2988);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x2990);
  }
  lVar4 = (longlong)iVar2;
  *(char **)(lVar3 + lVar4 * 0x48) = "Docking";
  *(undefined4 *)(lVar3 + 8 + lVar4 * 0x48) = uVar1;
  *(undefined4 *)(lVar3 + 0xc + lVar4 * 0x48) = 0;
  *(code **)(lVar3 + 0x10 + lVar4 * 0x48) = FUN_14009794d;
  *(code **)(lVar3 + 0x18 + lVar4 * 0x48) = FUN_14009794d;
  *(code **)(lVar3 + 0x20 + lVar4 * 0x48) = FUN_140097987;
  *(code **)(lVar3 + 0x28 + lVar4 * 0x48) = FUN_1400979a9;
  *(code **)(lVar3 + 0x30 + lVar4 * 0x48) = FUN_140097e18;
  *(code **)(lVar3 + 0x38 + lVar4 * 0x48) = FUN_140097e56;
  *(undefined8 *)(lVar3 + 0x40 + lVar4 * 0x48) = 0;
  *(int *)(param_1 + 0x2988) = *(int *)(param_1 + 0x2988) + 1;
  *(code **)(param_1 + 0x2968) = FUN_1400982d4;
  return;
}


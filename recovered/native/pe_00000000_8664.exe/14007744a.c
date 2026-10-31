/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007744a */

void FUN_14007744a(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0xbe5) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0xe0);
    lVar4 = FUN_140076dd1(lVar1,4,0xffffffff);
    piVar6 = (int *)(lVar4 + 0xc);
    if (lVar4 == 0) {
      piVar6 = (int *)(lVar1 + 0x134);
    }
    if (*piVar6 != param_2) {
      iVar3 = *(int *)(lVar1 + 0x1580);
      if (iVar3 == *(int *)(lVar1 + 0x1584)) {
        if (iVar3 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar3 / 2 + iVar3;
        }
        iVar7 = iVar3 + 1;
        if (iVar3 + 1 < iVar5) {
          iVar7 = iVar5;
        }
        lVar4 = FUN_140077ab4((longlong)iVar7 * 0x1c);
        if (*(longlong *)(lVar1 + 0x1588) != 0) {
          FUN_1401c5180(lVar4,*(longlong *)(lVar1 + 0x1588),
                        (longlong)*(int *)(lVar1 + 0x1580) * 0x1c);
          FUN_140077b90(*(undefined8 *)(lVar1 + 0x1588));
        }
        *(longlong *)(lVar1 + 0x1588) = lVar4;
        *(int *)(lVar1 + 0x1584) = iVar7;
        iVar3 = *(int *)(lVar1 + 0x1580);
      }
      else {
        lVar4 = *(longlong *)(lVar1 + 0x1588);
      }
      lVar2 = (longlong)iVar3 * 0x1c;
      *(undefined8 *)(lVar4 + lVar2) = 0x100000004;
      *(undefined4 *)(lVar4 + 8 + lVar2) = 0;
      *(int *)(lVar4 + 0xc + lVar2) = param_2;
      *(undefined4 *)(lVar4 + 0x18 + lVar2) = 0;
      *(undefined8 *)(lVar4 + 0x10 + lVar2) = 0;
      *(int *)(lVar1 + 0x1580) = *(int *)(lVar1 + 0x1580) + 1;
    }
  }
  return;
}


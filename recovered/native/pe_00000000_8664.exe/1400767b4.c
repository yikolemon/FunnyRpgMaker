/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400767b4 */

void FUN_1400767b4(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xbe5) != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    iVar4 = *(int *)(lVar2 + 0x1580);
    iVar1 = *(int *)(lVar2 + 0x15a4);
    *(int *)(lVar2 + 0x15a4) = iVar1 + 1;
    if (iVar4 == *(int *)(lVar2 + 0x1584)) {
      if (iVar4 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar4 / 2 + iVar4;
      }
      iVar7 = iVar4 + 1;
      if (iVar4 + 1 < iVar6) {
        iVar7 = iVar6;
      }
      lVar5 = FUN_140077ab4((longlong)iVar7 * 0x1c);
      if (*(longlong *)(lVar2 + 0x1588) != 0) {
        FUN_1401c5180(lVar5,*(longlong *)(lVar2 + 0x1588),(longlong)*(int *)(lVar2 + 0x1580) * 0x1c)
        ;
        FUN_140077b90(*(undefined8 *)(lVar2 + 0x1588));
      }
      *(longlong *)(lVar2 + 0x1588) = lVar5;
      *(int *)(lVar2 + 0x1584) = iVar7;
      iVar4 = *(int *)(lVar2 + 0x1580);
    }
    else {
      lVar5 = *(longlong *)(lVar2 + 0x1588);
    }
    lVar3 = (longlong)iVar4 * 0x1c;
    *(undefined8 *)(lVar5 + lVar3) = 0x200000006;
    *(int *)(lVar5 + 8 + lVar3) = iVar1;
    *(int *)(lVar5 + 0xc + lVar3) = param_2;
    *(undefined8 *)(lVar5 + 0x10 + lVar3) = 0;
    *(undefined4 *)(lVar5 + 0x18 + lVar3) = 0;
    *(int *)(lVar2 + 0x1580) = *(int *)(lVar2 + 0x1580) + 1;
  }
  return;
}


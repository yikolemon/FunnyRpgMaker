/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400772fe */

void FUN_1400772fe(longlong param_1,float param_2,float param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0xbe5) == '\x01') {
    lVar3 = *(longlong *)(param_1 + 0xe0);
    if ((((param_2 != 0.0) || (NAN(param_2))) || (param_3 != 0.0)) || (NAN(param_3))) {
      iVar1 = *(int *)(lVar3 + 0x15a4);
      *(int *)(lVar3 + 0x15a4) = iVar1 + 1;
      iVar5 = *(int *)(lVar3 + 0x1580);
      uVar2 = *(undefined4 *)(lVar3 + 0x15a0);
      if (iVar5 == *(int *)(lVar3 + 0x1584)) {
        if (iVar5 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar5 / 2 + iVar5;
        }
        iVar8 = iVar5 + 1;
        if (iVar5 + 1 < iVar7) {
          iVar8 = iVar7;
        }
        lVar6 = FUN_140077ab4((longlong)iVar8 * 0x1c);
        if (*(longlong *)(lVar3 + 0x1588) != 0) {
          FUN_1401c5180(lVar6,*(longlong *)(lVar3 + 0x1588),
                        (longlong)*(int *)(lVar3 + 0x1580) * 0x1c);
          FUN_140077b90(*(undefined8 *)(lVar3 + 0x1588));
        }
        *(longlong *)(lVar3 + 0x1588) = lVar6;
        *(int *)(lVar3 + 0x1584) = iVar8;
        iVar5 = *(int *)(lVar3 + 0x1580);
      }
      else {
        lVar6 = *(longlong *)(lVar3 + 0x1588);
      }
      lVar4 = (longlong)iVar5 * 0x1c;
      *(undefined8 *)(lVar6 + lVar4) = 0x100000002;
      *(int *)(lVar6 + 8 + lVar4) = iVar1;
      *(float *)(lVar6 + 0xc + lVar4) = param_2;
      *(float *)(lVar6 + 0x10 + lVar4) = param_3;
      *(undefined4 *)(lVar6 + 0x14 + lVar4) = uVar2;
      *(undefined4 *)(lVar6 + 0x18 + lVar4) = 0;
      *(int *)(lVar3 + 0x1580) = *(int *)(lVar3 + 0x1580) + 1;
    }
  }
  return;
}

